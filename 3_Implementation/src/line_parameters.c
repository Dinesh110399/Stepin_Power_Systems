#include "stdio.h"
#include "math.h"
#include "line_parameters.h"
#include "stdlib.h"
double arr[14]={0.0};
c c_mul(c z,c i)
{
    c res;
    res.real=(z.real*i.real)+(-z.img*i.img);
    res.img=(z.real*i.img)+(z.img*i.real);
    return res;

}
double c_mag(c res)
{
 return   (double) sqrt(pow(res.real,2)+pow(res.img,2));
}
c c_add(c a ,c b)
{
    c res;
    res.real=a.real+b.real;
    res.img=a.img+b.img;
    return res;
}
double c_angle(c a)
{
    double angle;
    angle=atan(a.img/a.real);
    return angle;

}
c c_div(c a,c b)
{
    c res;
    if (b.img==0 && b.real==0)
    {
        res.real=0.0;
        res.img=0.0;
        return res;
    }
    else{
        b.img=b.img*-1;
        res.real=(1/(pow(b.real,2)+pow(b.img,2)))*(c_mul(a,b).real);
        res.img=(1/(pow(b.real,2)+pow(b.img,2)))*(c_mul(a,b).img);
        return res;
    }
    
}

double * shortLine(int rcv_pow,int rcv_vol ,double pf,double res, double inductor )
{
    double sinteta,curr,eff,reg,send_vol,send_pow,*ptr1=arr;
    c z,irbar,vs,r;
    rcv_vol=rcv_vol/sqrt(3);
    curr=rcv_pow/(3*rcv_vol*pf);
    sinteta=sin(acos(pf));
    z.real=res;
    z.img=inductor;
    irbar.real=curr*pf;
    irbar.img=-curr*sinteta;
    r=c_mul(z,irbar);
    vs.real=rcv_vol+r.real;
    vs.img=r.img;
    send_vol=c_mag(vs);
    send_pow=rcv_pow+((3*pow(curr,2)*res));
    eff=(rcv_pow/send_pow)*100;
    reg=((send_vol-rcv_vol)*100)/rcv_vol;
    *(ptr1)=vs.real;
    *(ptr1+1)=vs.img;
    *(ptr1+2)=eff;
    *(ptr1+3)=reg;                                      
    return ptr1;
    
}
double * mediumLine(int rcv_pow,int rcv_vol ,double pf,double res, double inductor,double cap,int len )
{
    double sinteta,rcv_curr,eff,reg,send_vol,send_pow,ang1,ang2,send_curr,pfs,*ptr=arr;
    c z,Irbar,vs,r,Ic1bar,Ilinebar,Ic2bar,Isbar;
    rcv_vol=rcv_vol/sqrt(3);
    rcv_curr=rcv_pow/(3*rcv_vol*pf);
    sinteta=sin(acos(pf));
    z.real=res*len;
    z.img=inductor*len;
    Irbar.real=rcv_curr*pf;
    Irbar.img=-rcv_curr*sinteta;
    Ic1bar.real=0;
    Ic1bar.img=0.5*len*cap*rcv_vol;
    Ilinebar=c_add(Irbar,Ic1bar);
    r=c_mul(z,Ilinebar);
    vs.real=rcv_vol+r.real;
    vs.img=r.img;
    send_vol=c_mag(vs);
    ang1=c_angle(vs);
    Ic2bar.real=0.5*vs.img*cap*len;
    Ic2bar.img=0.5*vs.real*cap*len;
    Isbar=c_add(Ic2bar,Ilinebar);
    send_curr=c_mag(Isbar);
    ang2=c_angle(Isbar);
    pfs=cos(fabs(ang1)+fabs(ang2));
    send_pow=rcv_pow+((3*pow(send_curr,2)*res*0.5)+(3*pow(rcv_curr,2)*res*0.5));
    eff=(rcv_pow/send_pow)*100;
    reg=((send_vol-rcv_vol)*100)/rcv_vol;
    *(ptr)=vs.real;
    *(ptr+1)=vs.img;
    *(ptr+2)=Isbar.real;
    *(ptr+3)=Isbar.img;
    *(ptr+4)=pfs;
    *(ptr+5)=eff;
    *(ptr+6)=reg;                                       
    return ptr;
}
double * longLine(int rcv_pow,int rcv_vol ,double pf,double res, double inductor,double cap,int len )
{
    double sinteta,rcv_curr,eff,reg,send_vol,send_pow,send_curr,*ptr=arr;
    c z,irbar,vs,r,ybar,A,B,C,D,vrbar,Isbar;
    rcv_vol=rcv_vol/sqrt(3);
    rcv_curr=rcv_pow/(3*rcv_vol*pf);
    sinteta=sin(acos(pf));
    z.real=0;
    z.img=inductor;
    ybar.real=0;
    ybar.img=cap*len;
    vrbar.real=rcv_vol;
    vrbar.img=0;
    irbar.real=rcv_curr*pf;
    irbar.img=-rcv_curr*sinteta;
    A.real=cosh(sqrt((int)(c_mul(ybar,z).real*-1)));
    B.real=sqrt(c_div(z,ybar).real)*sinh(sqrt(-1*c_mul(ybar,z).real));
    C.real=sqrt(c_div(z,ybar).real)*sinh(sqrt(-1*c_mul(ybar,z).real));
    D.real=A.real;
    A.img=0;B.img=0;C.img=0;D.img=0;
    vs=c_add(c_mul(A,vrbar),c_mul(B,irbar));
    Isbar=c_add(c_mul(C,vrbar),c_mul(D,irbar));
    send_vol=c_mag(vs);
    send_curr=c_mag(Isbar);
    send_pow=rcv_pow+((3*pow(send_curr,2)*res*0.5)+(3*pow(rcv_curr,2)*res*0.5));
    eff=(rcv_pow/send_pow)*100;
    reg=(((send_vol/A.real)-rcv_vol)*100)/rcv_vol;
    *(ptr)=vs.real;
    *(ptr+1)=vs.img;
    *(ptr+2)=Isbar.real;
    *(ptr+3)=Isbar.img;
    *(ptr+4)=eff;
    *(ptr+5)=reg;
    *(ptr+6)=A.real;
    *(ptr+7)=A.img; 
    *(ptr+8)=B.real; 
    *(ptr+9)=B.img; 
    *(ptr+10)=C.real; 
    *(ptr+11)=C.img;                                     
    return ptr;
}
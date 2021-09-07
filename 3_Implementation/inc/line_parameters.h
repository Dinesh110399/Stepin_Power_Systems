/**
 * @file line_parameters.h
 * @author y.dinesh (dinesh110399@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __LINE_PARAMETERS_H__
#define __LINE_PARAMETERS_H__
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/**
 * Structure helps to get complex number 
 * 
 */
typedef struct complex_t
{
    double real;
    double img;
}c;
/**
 * this function helps to find the magnitude of a complex number
 * 
 * @return double 
 */
double c_mag(c);
/**
 * This functions computes the phase angle of a comlex number in radians
 * 
 * @return double 
 */
double c_angle(c);
/**
 * Function performs the Addition Arthematic operation b/w two complex numbers
 * 
 * @return c 
 */
c c_add(c,c);
/**
 * Function performs the Multiplication Arthematic operation b/w two complex numbers
 * 
 * @return c 
 */
c c_mul(c ,c);
/**
 * Function performs the Division Arthematic operation b/w two complex numbers
 * 
 * @return c 
 */
c c_div(c,c);
/**
 * This functions computes the short transmission parameters (Sending_end Voltage,Efficiency of line,voltage regulation)
 * 
 * @return double* 
 */
double * shortLine(int ,int ,double,double,double);
/**
 *This functions computes the medium transmission parameters(Sending_end Voltage,Sending_end current,sending end power factor,Efficiency of line,voltage regulation)
 * 
 * @return double* 
 */
double * mediumLine(int, int ,double,double,double,double,int);
/**
 * This functions computes the Long transmission parameters (Sending_end Voltage,Sending_end current,Efficiency of line,voltage regulation,ABCD parameters)

 * 
 * @return double* 
 */
double * longLine(int, int, double ,double,double,double,int);
#endif 
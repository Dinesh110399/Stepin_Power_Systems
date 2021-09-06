# TEST PLAN:

## Table no: High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       | Select the type of tranmsion system                         | (1). Choose 1 for Short Line  (2). Choose 2 for Medium Line (3). Choose 3 for Long Transmission Line (4). Choose 4 to exit from the console | Switch case to be exceuted according to the chooice | PASS | Requirement based|
|  H_02   |Check for the choice chosen.| No i/p required at this stage| Entering the chosen function  |PASS|Requirement based |
| H_03 | Check if chosen choice is short line  | (1). Recieving Power (2).Recieving Voltage (3).Resitance (4).Inductive reactance (5).Power factor | Return the pointer | PASS | Requirement based |
| H_04 | Check if chosen choice is Medium line| (1). Recieving Power (2).Recieving Voltage (3).Resitance (4).Inductive reactance (5).Capacitive admitance (6).Power factor (7).Length of the line  | Return the pointer | PASS | Requirement based |
| H_05 | Check if chosen choice is Long line| (1). Recieving Power (2).Recieving Voltage (3).Resitance (4).Inductive reactance (5).Capacitive admitance (6).Power factor (7).Length of the line  | Return the pointer |PASS | Requirement based |
| H_06 | Exiting the program| (1). Choose 4 | exit from the program| PASS| Requirement based |




## Table no: Low level test plan

| **Test ID** | **HLT ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
|-------------|-----|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |H_02|check for the choice using switch case | (1). Choose 1 for Short Line  (2). Choose 2 for Medium Line (3). Choose 3 for Long Transmission Line (4). Choose 4 to exit from the console| SUCCESS | SUCCESS |Requirement based |
|  L_02    |H_03|Computing short line,call complex addition and complex mag functions.   |Input stated in H_03| Return Pointer contains the parameters (1). Sending voltage in complex form (2). Efficeincy (3). Voltage Regulation |SUCCESS|Requirement based|
|  L_03       |H_04|Computing Medium line,call complex addition and complex mag functions and complex mul.      | Input stated in H_04|Return Pointer contains the parameters(1). Sending voltage in complex form (2). Sending end current in complex form (3). Efficeincy (4). Voltage Regulation | SUCCESS |Requirement based|
|  L_04       |H_05|Computing Long line,call all complex arthematic operations functions.|      Input stated in H_05|Return Pointer contains the parameters (1). Sending voltage in complex form (2). Sending end current in complex form (3). Efficeincy (4). Voltage Regulation (5). ABCD Parameters| SUCCESS |Requirement basedl|

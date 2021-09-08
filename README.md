# Stepin_MiniProject
![code quality score](https://www.code-inspector.com/project/27734/score/svg)
![code grade](https://www.code-inspector.com/project/27734/status/svg)
[![Codacy Badge](https://app.codacy.com/project/badge/Grade/8f1fc4f9d43b4768871f9ee0ff75db3b)](https://www.codacy.com/gh/Dinesh110399/Stepin_MiniProject/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=Dinesh110399/Stepin_MiniProject&amp;utm_campaign=Badge_Grade)


#BADGES

|Build    |Static Code Analysis |Dynamic Code Analysis|Code Quality     |Unity   |Git Inspector|
|:--------|:--------|:--------|:----------------|:--------|:-----------|
|[![C/C++ CI](https://github.com/Dinesh110399/Stepin_Power_Systems/actions/workflows/c-cpp.yml.yml/badge.svg)](https://github.com/Dinesh110399/Stepin_Power_Systems/actions/workflows/c-cpp.yml)    |    [![cppcheck-action](https://github.com/Dinesh110399/Stepin_Power_Systems/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/Dinesh110399/Stepin_Power_Systems/actions/workflows/cppcheck.yml)   |    [![valgrind](https://github.com/Dinesh110399/Stepin_Power_Systems/actions/workflows/Valgrind.yml/badge.svg)](https://github.com/Dinesh110399/Stepin_Power_Systems/actions/workflows/Valgrind.yml)    |[![Unit testing](https://github.com/silwandeva/STEPIN-EMPLOYEE-MANAGEMENT/blob/main/.github/workflows/unit-test.yml/badge.svg)](https://github.com/silwandeva/STEPIN-EMPLOYEE-MANAGEMENT/blob/main/.github/workflows/unit-test.yml)|![Contribution Check - Git Inspector](https://www.code-inspector.com/project/27734/score/svg)|


## Introduction
#### Title: Computation Transmission Parameters in Power System
This project helps to calculate the Transmission Line parameters(A,B,CD) when given with some input data containing voltage, length of Transmission Line etc. Display the total line parameters and also the Efficiency of the line including voltage regulation values. This parameter helps out the engineer to know about the working of transmission system to reduce losses and construct the transmission line in a much faster pace with high efficiency and reliability.

## Research
### Objectives:
  - Compute transmission line parameters for short transmission system
  - Compute transmission line parameters for Medium transmission system using Nominal pi Model
  - Compute transmission line parameters for Long transmission system assuming resistance of the system as zero
  ### Explaination:
   For Transmission lines it takes more time for calculating the sending end voltage to finally get the efficiency manually.This project helps the customer to re-design their transmission system with higher efficiency by simply puting their design values in this project and taking out the efficiency.
## Cost and Features
- Previously the computation is done manually.
- Now the system is computing the values,by providing the input values.
- Provides the efficiency and voltage regulation values. 
## Defining Our System
  Input to the various transmission systems are explained below
  #### Small Transmission Line
    - Input 1-> Recieving end Power(Enter in Mega/Kilo watts)
    - Input 2-> Recieving end Voltage(Enter in Kilo volts)
    - Input 3-> Resistance  of Short Transmission Line(Enter in Ohms)
    - Input 4-> Inductive Reactance(Enter in ohms)
    - Input 5-> Power factor(0<pf<1)
  #### Medium Transmission Line
    - Input 1-> Recieving end Power(Enter in Mega/Kilo watts)
    - Input 2-> Recieving end Voltage(Enter in Kilo volts)
    - Input 3-> Resistance  of Medium Transmission Line(Enter in Ohms)
    - Input 4-> Inductive Reactance(Enter in ohms)
    - Input 5-> Capacitive suceptance(Enter in mho)
    - Input 6-> Power factor(0<pf<1)
    - Input 7-> Length of line(Enter in Km)
  #### Long Transmission Line
    - Input 1-> Recieving end Power(Enter in Mega/Kilo watts)
    - Input 2-> Recieving end Voltage(Enter in Kilo volts)
    - Input 3-> Resistance  of Long Transmission Line(Enter in Ohms)
    - Input 4-> Inductive Reactance(Enter in ohms)
    - Input 5-> Capacitive suceptance(Enter in mho)
    - Input 6-> Power factor(0<pf<1)
    - Input 7-> Length of line(Enter in Km)

## SWOT ANALYSIS
  ![swot](https://user-images.githubusercontent.com/36735523/114818941-3f939500-9dda-11eb-8742-94560f170af5.png)


# 4W&#39;s and 1&#39;H

## Who:
- Transco and Distribution companies whose main focus on constructing Transmission lines

## What:
- Many Transmission Line are inefficient due to prolonged time for testing the efficiency of the transmission line manually.This project gives the oopurtunity to compute all the required parameters and deploy into real world with more efficiency

## When:
- With the increasing population demand for Electric power also increased exponentially.
- With the increase in power demand,increased the problem to design the efficient transmision system to reduce the power loss across india

## Where:
- This problem is surfaced in all states of India

## How:
- This project takes in all the design input values and yields out the Line parameters.

# Detail requirements
## High Level Requirements:
| ID | Description | Category | Status
| ------ | ------ | ------ | ------|
| HR01 | User has a menu for selecting the type of transmission line     |  Technical  |  IMPLEMENTED   |
| HR02 | Requires the input from the user for Short transmission line | Technical | IMPLEMENTED  |
| HR03 | Requires the input from the user for Medium transmission line | Technical | IMPLEMENTED  |
| HR04 | Requires the input from the user for Long transmission line | Technical | IMPLEMENTED  | 


##  Low level Requirements
| ID | Description | HLR ID | Status
| ------ | ------ | ------ | ------|
| LR01 | Small menu should be created for the user to interact.A switch case statement to get the option for the user to select the type of transmission line.     |  HR01  |  IMPLEMENTED|
| LR02 | A function to calculate the complex addition.And magnitude of complex number is required to compute the function shortLine | HR02 | IMPLEMENTED|
| LR03 | A function to calculate the complex addition.And magnitude of complex number and complex multiplication function is required to compute the function MediumLine | HR03 |IMPLEMENTED|
| LR04 | Requires all the complex number arthimetic functions   HR04 | IMPLEMENTED| 


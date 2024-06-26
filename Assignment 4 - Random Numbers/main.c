/***************************************************************************************************************************
Program name: "Non-deterministic Random Numbers" - This program will welcome the user to the program, then will ask        *
for their name and title. After welcoming the user, the program will give a description of what it does for the user       *
                                                                                                                           *
This program will generate 64-bit IEEE float numbers.                                                                      *
How many numbers do you want. Today's limit is 100 per customer:                                                           *
Your numbers have been stored in an array. Here is that array.                                                             *
                                                                                                                           *
The program will then take in user input for the size of the array that they want, if the user inputs a number greater     *
than 100, or a negative number, the program will tell them that they have entered an invalid input, and to try again       *
                                                                                                                           *
"Invalid array size...Try again:                                                                                           *
                                                                                                                           *
Once the user has input a valid array size, the program lets them know it is generating n random numbers, where n is the   *
array size the user input above. Once the array has been filled with random numbers, the program will output the entire    *
array, then it will normalize the array to be between the values 1.0 and 2.0, and will output the entire array again.      *
After this second array output, the program will then sort the array (using C++ library functions) and will output the     *
array one last time for the user, this time sorted from least to greatest                                                  *
                                                                                                                           *
The program will then say goodbye to the user, and terminate the program                                                   *
                                                                                                                           *
This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License  *
version 3 as published by the Free Software Foundation.  This program is distributed in the hope that it will be useful,   *
but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See   *
the GNU General Public License for more details A copy of the GNU General Public License v3 is available here:             *
<https://www.gnu.org/licenses/>.                                                                                           *
****************************************************************************************************************************/



/**********************************************************************************************************************************
Author information
  Author name: Nathan Warner
  Author email: nwarner4@csu.fullerton.edu

Program information
  Program name: Non-deterministic Random Numbers
  Programming languages: One module in C, one module in C++, five modules in x86_64 assembly, and one module in bash
  Date program began: 2024-Apr-8
  Date of last update: 2024-Apr-11
  Files in this program: main.c, sort.cpp, manager.asm, fill_random_array.asm, isnan.asm, show_array.asm, normalize_array.asm, r.sh
  Testing: Alpha testing completed.  All functions are correct.
  Status: Ready for release to customers

Purpose
  The program will create an array of size n, where n is input by the user, and between 1 and 100, and will create a random number
    array, will normalize the array between 1.0 and 2.0, and then sort the array

This file:
  File name: main.c
  Language: C
  Max page width: 124 columns
  Assemble (standard): gcc  -m64 -Wall -no-pie -o main.o -std=c2x -c main.c
  Optimal print specification: Landscape, 7 points, monospace, 8½x11 paper
  Prototype of this function: int main(int argc, const char * argv[]);
***********************************************************************************************************************************/


#include <stdio.h>
#include <math.h>

extern char* manager();

int main(int argc, const char * argv[])
{printf("\nWelcome to Random Products, LLC\n");
 printf("This software is maintained by Nathan Warner\n");
 char* userName = manager();
 printf("\nOh, %s. We hope you enjoyed your arrays. Do come again.\n", userName);
 printf("A zero will be sent to the operating system.\n");
}

//End of the function main.c ====================================================================
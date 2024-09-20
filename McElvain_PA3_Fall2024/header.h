/*****************************************************************
* Programmer: Sam McElvain
* Class: CptS 121, Fall 2024; Lab Section 11
* Assignment: PA3
* Date: September 17, 2024
* Description: This program analyzes several student GPAs.
* Notes:
*****************************************************************/

#ifndef header_h
#define header_h

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#define PI 3.141592

/* Function: read_double
* Date created: September 17, 2024
* Date last modified: September 18, 2024
* Description: This function reads one double precision number from the input file. 
*/

double read_double(FILE* infile);

/* Function: read_integer
* Date created: September 17, 2024
* Date last modified: September 19, 2024
* Description: This function reads one integer from the input file.
*/

double read_integer(FILE* infile);

#endif
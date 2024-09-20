/*****************************************************************
* Programmer: Sam McElvain
* Class: CptS 121, Fall 2024; Lab Section 11
* Assignment: PA3
* Date: September 17, 2024
* Description: This program analyzes several student GPAs.
* Notes:
*****************************************************************/

#include "header.h"

/* Function: read_double
* Date created: September 17, 2024
* Date last modified: September 19, 2024
* Description: This function reads one double precision number from the input file.
*/

double read_double(FILE* infile) {

	double floatingpoint = 0.0;

	fscanf(infile, "%lf", &floatingpoint);

	return floatingpoint;
}

/* Function: read_integer
* Date created: September 17, 2024
* Date last modified: September 19, 2024
* Description: This function reads one integer from the input file.
*/

double read_integer(FILE* infile) {

	double integer = 0;

	fscanf(infile, "%d", &integer);

	return integer;
}
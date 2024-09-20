/*****************************************************************
* Programmer: Sam McElvain
* Class: CptS 121, Fall 2024; Lab Section 11
* Assignment: PA3
* Date: September 17, 2024
* Description: This program analyzes several student GPAs.
* Notes:
*****************************************************************/

#include "header.h"

int main(void)
{
	FILE* infile = NULL, 
		* outfile = NULL;

	int id1,
		id2,
		id3,
		id4,
		id5,
		standing1,
		standing2,
		standing3,
		standing4,
		standing5;

	double gpa1,
		gpa2,
		gpa3,
		gpa4,
		gpa5,
		age1,
		age2,
		age3,
		age4,
		age5;

	infile = fopen("input.dat", "r");
	outfile = fopen("output.dat", "w");

	// Student 1
	id1 = read_integer(infile);
	gpa1 = read_double(infile);
	standing1 = read_integer(infile);
	age1 = read_double(infile);

	// Student 2
	id2 = read_integer(infile);
	gpa2 = read_double(infile);
	standing2 = read_integer(infile);
	age2 = read_double(infile);

	// Student 3
	id3 = read_integer(infile);
	gpa3 = read_double(infile);
	standing3 = read_integer(infile);
	age3 = read_double(infile);

	// Student 4
	id4 = read_integer(infile);
	gpa4 = read_double(infile);
	standing4 = read_integer(infile);
	age4 = read_double(infile);

	// Student 5
	id5 = read_integer(infile);
	gpa5 = read_double(infile);
	standing5 = read_integer(infile);
	age5 = read_double(infile);


	return 0;
}
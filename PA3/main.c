/*******************************************************************************************
* Programmer: Jacob Wright                                                                 *
* Class: Cpt S 121, Spring 2013; Lab Section 4                                             *
* Programming Assignment 3:  Statistical Analysis of Student Records                       *
* Date: February 6, 2013                                                                   *
* Description:  File opening, reading, writing and fuctions                                *
*******************************************************************************************/

#include "equations.h"

int main (void)
{
	FILE *infile = NULL, *outfile = NULL;
	double read_record = 0, double_number = 0;
	int int_number = 0;
	//Opens an input file "input.dat" for reading;
	infile = fopen ("input.dat", "r");
    //Opens an output file "output.dat" for writing;
	outfile = fopen ("output.dat", "w");
	//Reads five records from the input file (input.dat); You will need to use a combination of read_double ( ) and read_integer ( ) function calls here!
	read_record = read_double (infile);
	
	
	// This line is incorrect
	// read_record is an double, but read_integer returns an int
	// This isn't a huge deal, but you have another problem
	// Say line 21 reads some important data, not line 28 will read and replace the data you had.
	read_record = read_integer (infile);  
	



    //Calculates the sum of the GPAs;
    //Calculates the sum of the class standings;
    //Calculates the sum of the ages;
 
    //Calculates the mean of the GPAs, writing the result to the output file (output.dat);
    //Calculates the mean of the class standings, writing the result to the output file (output.dat);
    //Calculates the mean of the ages, writing the result to the output file (output.dat);
 
    //Calculates the deviation of each GPA from the mean (Hint: need to call calculate_deviation ( ) 5 times)
    //Calculates the variance of the GPAs
    //Calculates the standard deviation of the GPAs, writing the result to the output file (output.dat);
 
    //Determines the min of the GPAs, writing the result to the output file (output.dat);
    //Determines the max of the GPAs, writing the result to the output file (output.dat);
 
    //Closes the input and output files (i.e. input.dat and output.dat)

	

	return 0;
}


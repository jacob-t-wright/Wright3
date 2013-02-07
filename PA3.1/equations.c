/*******************************************************************************************
* Programmer: Jacob Wright                                                                 *
* Class: Cpt S 121, Spring 2013; Lab Section 4                                             *
* Programming Assignment 3:  Statistical Analysis of Student Records                       *
* Date: February 6, 2013                                                                   *
* Description:  File opening, reading, writing and fuctions                                *
*******************************************************************************************/

#include "equations.h"

//Reads one double precision number from the input file
double read_double (FILE *infile)
{
	double number = 0;
	fscanf (infile, "%lf", &number);
	return number;
}

//Reads one integer number from the input file
int read_integer (FILE *infile)
{
	double number = 0;
	fscanf (infile, "%d", &number);
	return number;
}

//Finds the sum of number1, number2, number3, number4, and number5 and returns the result
double calculate_sum (double number1, double number2, double number3, double number4, double number5)
{
	return (number1 + number2 + number3 + number4 + number5);
}

//Determines the mean through the calculation sum / number and returns the result
double calculate_mean (double sum, int number)
{
	return (sum / number);
}

//Determines the deviation of number from the mean and returns the result
double calculate_deviation (double number, double mean)
{

}

//Determines the variance through the calculation: ((deviation1)^2 + (deviation2)^2 + (deviation3)^2 + (deviation4)^2 + (deviation5)^2) / number and returns the result
//Call calculate_mean
double calculate_variance (double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, int number)
{

}

//Calculates the standard deviation as sqrt (variance) and returns the result
double calculate_standard_deviation (double variance)
{

}

//Determines the maximum number out of the five input parameters passed into the function, returning the max
double find_max (double number1, double number2, double number3, double number4, double number5)
{

}

//Determines the minimum number out of the five input parameters passed into the function, returning the min
double find_min (double number1, double number2, double number3, double number4, double number5)
{

}

//Prints a double precision number (to the hundredths place) to an output file
void print_double (FILE *outfile, double number)
{

}
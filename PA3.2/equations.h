/*******************************************************************************************
* Programmer: Jacob Wright                                                                 *
* Class: Cpt S 121, Spring 2013; Lab Section 4                                             *
* Programming Assignment 3:  Statistical Analysis of Student Records                       *
* Date: February 6, 2013                                                                   *
* Description:  File opening, reading, writing and fuctions                                *
*******************************************************************************************/
#ifndef PA3_H
#define PA3_H

#include <stdio.h>
#include <math.h>
double read_double (FILE *infile);
int read_integer (FILE *infile);
double calculate_sum (double number1, double number2, double number3, double number4, double number5);
double calculate_mean (double sum, int number);
double calculate_deviation (double number, double mean);
double calculate_variance (double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, int number);
double calculate_standard_deviation (double variance);
double find_max (double number1, double number2, double number3, double number4, double number5);
double find_min (double number1, double number2, double number3, double number4, double number5);
void print_double (FILE *outfile, double number);

#endif
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
	double	gpa1 = 0.0, gpa2 = 0.0, gpa3 = 0.0, gpa4 = 0.0, gpa5 = 0.0,
			age1 = 0.0, age2 = 0.0, age3 = 0.0, age4 = 0.0, age5 = 0.0,
			sum_gpa = 0.0, sum_class_standing = 0.0, sum_age = 0.0,
			mean_gpa = 0.0, mean_class_standing = 0.0, mean_age = 0.0,
			gpa1_dev = 0.0, gpa2_dev = 0.0, gpa3_dev = 0.0, gpa4_dev = 0.0, gpa5_dev = 0.0, 
			gpa_variance = 0.0, gpa_std_dev = 0.0, min_gpa = 0.0, max_gpa = 0.0;
	int 	id1 = 0, id2 = 0, id3 = 0, id4 = 0, id5 =0,
			class_standing1 = 0, class_standing2 = 0, class_standing3 = 0, class_standing4 = 0, class_standing5 = 0;	
			
	//Opens an input file "input.dat" for reading;
	infile = fopen ("input.dat", "r");
    //Opens an output file "output.dat" for writing;
	outfile = fopen ("output.dat", "w");
	//Reads five records from the input file (input.dat); You will need to use a combination of read_double ( ) and read_integer ( ) function calls here!
    id1 = read_integer (infile);
	gpa1 = read_double (infile);
	class_standing1 = read_integer (infile);
	age1 = read_double (infile);

	id2 = read_integer (infile);
	gpa2 = read_double (infile);
	class_standing2 = read_integer (infile);
	age2 = read_double (infile);

	id3 = read_integer (infile);
	gpa3 = read_double (infile);
	class_standing3 = read_integer (infile);
	age3 = read_double (infile);

	id4 = read_integer (infile);
	gpa4 = read_double (infile);
	class_standing4 = read_integer (infile);
	age4 = read_double (infile);

	id5 = read_integer (infile);
	gpa5 = read_double (infile);
	class_standing5 = read_integer (infile);
	age5 = read_double (infile);

	//Calculates the sum of the GPAs;
	sum_gpa = calculate_sum (gpa1, gpa2, gpa3, gpa4, gpa5);

    //Calculates the sum of the class standings;
	sum_class_standing = calculate_sum (class_standing1, class_standing2, class_standing3, class_standing4, class_standing5);

    //Calculates the sum of the ages;
	sum_age = calculate_sum (age1, age2, age3, age4, age5);

    //Calculates the mean of the GPAs, writing the result to the output file (output.dat);
	mean_gpa = calculate_mean (sum_gpa, 5);
	fprintf (outfile, "The mean GPA is %lf\n", mean_gpa);

    //Calculates the mean of the class standings, writing the result to the output file (output.dat);
	mean_class_standing = calculate_mean (sum_class_standing, 5);
	fprintf (outfile, "The mean class standing is %lf\n", mean_class_standing);

    //Calculates the mean of the ages, writing the result to the output file (output.dat);
	mean_age = calculate_mean (sum_age, 5);
	fprintf (outfile, "The mean age is %lf\n", mean_age);
 
    //Calculates the deviation of each GPA from the mean (Hint: need to call calculate_deviation ( ) 5 times)
	gpa1_dev = calculate_deviation (gpa1, mean_gpa);
	gpa2_dev = calculate_deviation (gpa2, mean_gpa);
	gpa3_dev = calculate_deviation (gpa3, mean_gpa);
	gpa4_dev = calculate_deviation (gpa4, mean_gpa);
	gpa5_dev = calculate_deviation (gpa5, mean_gpa);

    //Calculates the variance of the GPAs
	gpa_variance = calculate_variance (gpa1_dev, gpa2_dev, gpa3_dev, gpa4_dev, gpa5_dev, 5);

    //Calculates the standard deviation of the GPAs, writing the result to the output file (output.dat);
	gpa_std_dev = calculate_standard_deviation (gpa_variance);

    //Determines the min of the GPAs, writing the result to the output file (output.dat);


    //Determines the max of the GPAs, writing the result to the output file (output.dat);
 
    //Closes the input and output files (i.e. input.dat and output.dat)
	fclose (infile);
	fclose (outfile);

	return 0;
}


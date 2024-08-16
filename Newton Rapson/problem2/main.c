#include <stdio.h>
#include <math.h>
#include "prob2.h"

int main(int argc, char *argv[])
{
	int question_part = 0;
	while (1)
	{
		printf("Equation to be solved.\nEnter '1' for :: 2x^3 + 5x^2 - 22x + 15 = 0\nEnter '2' for :: cos(x) - e^(x/2) = 0\nEnter '3' for :: tan^-1(x)\nEnter (1,2 or 3) to select the equation:  ");
		scanf("%d", &question_part);
		if(question_part < 1 || question_part > 3){
			printf("*Input should be 1, 2 or 3 only*.\n\n");
		} else {
			break;
		}
	}

	double initial_guess = 0, max_iterations = 0, tollerance = 0, damping_factor = 0;
	
	printf("Enter Intial Value: ");
	scanf("%lf", &initial_guess);

	printf("Enter max iterations: ");
	scanf("%lf", &max_iterations);

	printf("Enter tollerance: ");
	scanf("%lf", &tollerance);

	printf("Enter damping factor: ");
	while (1)
	{
		scanf("%lf", &damping_factor);
		if(damping_factor <= 0 || damping_factor > 1){
			printf("Damping factor should between (0,1], enter damping factor: ");
		} else {
			break;
		}
	}

	switch (question_part)
	{
	case 1:{
		double x0 = initial_guess;
		printf("Initial guess: %lf, f(x0) = %lf\n", x0, f_poly(x0));
		for (int i = 0; i < max_iterations && fabs(f_poly(x0)) > tollerance; i++) {
			double fval = f_poly(x0);
			double fdashval = fdash_poly(x0);
			x0 = x0 - damping_factor * fval / fdashval;
			printf("%d: New x0 = %lf, f(x0) = %lf\n", i+1, x0, f_poly(x0));
		}
		break;
	} 
	case 2:{
		double x0 = initial_guess;
		printf("Initial guess: %lf, f(x0) = %lf\n", x0, f_cos(x0));
		for (int i = 0; i < max_iterations && fabs(f_cos(x0)) > tollerance; i++) {
			double fval = f_cos(x0);
			double fdashval = fdash_cos(x0);
			x0 = x0 - damping_factor * fval / fdashval;
			printf("%d: New x0 = %lf, f(x0) = %lf\n", i+1, x0, f_cos(x0));
		}
		break;
	}
	case 3:{
		double x0 = initial_guess;
		printf("Initial guess: %lf, f(x0) = %lf\n", x0, f_taninv(x0));
		for (int i = 0; i < max_iterations && fabs(f_taninv(x0)) > tollerance; i++) {
			double fval = f_taninv(x0);
			double fdashval = fdash_taninv(x0);
			x0 = x0 - damping_factor * fval / fdashval;
			printf("%d: New x0 = %lf, f(x0) = %lf\n", i+1, x0, f_taninv(x0));
		}
		break;
	}
	default:
		break;
	}
	

	return 0;
}

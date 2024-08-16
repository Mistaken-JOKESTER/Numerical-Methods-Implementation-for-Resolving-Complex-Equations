#include <stdlib.h>
#include<stdio.h>
#include <math.h>

#define VT 25.9e-3
#define R 10
#define Is 10e-9

double dfdx(double x, double t){
	return (-1 * (x/2) - (6 * t * exp(-t/2)));
}


/* f(V2) = -x/2 - 6te^(-t/2)
=> f'(V2) = -1/2 - 6e^(-t/2)(1 + -t/2)
*/

double f(double x_old, double t_old, double h, double x_new, double t_new) {
	return (x_new - x_old) / h - (dfdx(x_old, t_old) + dfdx(x_new, t_new))/2;
}

double fdash(double x_old, double t_old, double h, double x_new, double t_new) {
	return 1 / h + 1 / 4;
}

double neuton_raphson (double x, double t, double h)
{
	double initial_guess = x, max_iterations = 100, tollerance = 10.0e-10, damping_factor = 1;
	double x_new = x, t_new = t+h;
	for (int i = 0; i < max_iterations + 1; i++) {
		double fval = f(x, t, h, x_new, t_new);
		if (fabs(fval) < tollerance || i == max_iterations) {
			return x_new;
		}

		double fdashval = fdash(x, t, h, x_new, t_new);
		if (fabs(fdashval) < 1.0e-20) {
			printf("dfdx too small. Halting...\n");
			exit(0);
     	}
		
		x_new += -1 *  damping_factor * fval / fdashval;
		
	}

	printf("NR did not converge. Halting...\n");
	exit(0);
}


double trz(double h, char* file_name) {
	double x = 2, x_new;
    double t = 0, t_new;
	double tend = 20;
	FILE *file = fopen(file_name, "w");
	fprintf(file,"%13.6e %13.6e\n", t,x);

	while(t < tend)
	{
		t_new = t+h;
		x_new = neuton_raphson(x, t, h);
		fprintf(file,"%13.6e %13.6e\n", t_new,x_new);
		t = t_new;
		x = x_new;
	}

	fclose(file);
}
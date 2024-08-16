#include<stdio.h>
#include <math.h>

double forward_euler(double h, char* file_name) {
	double x = 2;
    double t = 0;
	double tend = 20;
	FILE *file = fopen(file_name, "w");
	fprintf(file,"%13.6e %13.6e\n", t,x);

	while(t < tend)
	{
		double f = h * (-1 * (x/2) - (6 * t * exp(-t/2)));
		x = x + h*f;
		t = t + h;
		fprintf(file,"%13.6e %13.6e\n", t,x);
	}

	fclose(file);
}
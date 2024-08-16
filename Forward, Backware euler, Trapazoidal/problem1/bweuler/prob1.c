#include<stdio.h>
#include <math.h>

double backward_euler(double h, char* file_name) {
	double x = 2;
    double t = 0;
	double tend = 20;
	FILE *file = fopen(file_name, "w");
	fprintf(file,"%13.6e %13.6e\n", t,x);

	while(t < tend)
	{
		t = t + h;
		x = 2 * (x - 6 * h * t * exp(-t / 2)) / (2 + h);
		fprintf(file,"%13.6e %13.6e\n", t,x);
	}

	fclose(file);
}
#include<stdio.h>
#include <math.h>

double dfdx(double x, double t){
	return -4 * sin(2*t) + 6 * cos(2*t);
}

double forward_euler(double h, char* file_name) {
	double x = 3;
    double t = 0;
	double tend = 20;
	FILE *file = fopen(file_name, "w");
	fprintf(file,"%13.6e %13.6e\n", t,x);

	while(t < tend)
	{
		double f = dfdx(x, t);
		x = x + h*f;
		t = t + h;
		fprintf(file,"%13.6e %13.6e\n", t,x);
	}

	fclose(file);
}
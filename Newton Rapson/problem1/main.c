#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double fdash(double t)
{
	return 1/pow(cosh(t), 2)  + 1.2 * sin(t);
}

double f(double t)
{
	return tanh(t) - 1.2*cos(t);
}

int main(void)
{
    printf("2\n");
	FILE *outputFile = fopen("convergence.txt", "w");
	if (outputFile == NULL) {
        printf("3\n");
        perror("Error opening files");
        return 1;
    }

    printf("1\n");
	double t0 = 0, tollrance = 10e-8;
	printf("Enter intial guess: ");
	scanf("%lf", &t0);
	
	printf("Initial guess: %16.9e, f(t0) = %16.9e\n", t0, f(t0));
	for (int i = 0; i < 20 && fabs(f(t0)) > tollrance; i++) {
		double fval = f(t0);
		// print data to file for ploting
		fprintf(outputFile, "%f %f\n", t0, fval);

		double fdashval = fdash(t0);
		t0 = t0 - fval / fdashval;
		printf("%d: New t = %16.9e, f(t) = %16.9e\n", i+1, t0, f(t0));
	}

	fprintf(outputFile, "%f %f\n", t0, f(t0));

	return 0;
}

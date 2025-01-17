#include <stdio.h>
#include <math.h>

/* f(x) = atan(x) */
/* => f'(x) = 1 / (1 + x^2) */

double fdash(double x)
{
	return 1 / (1 + x*x);
}

double f(double x)
{
	return atan(x);
}

int
main(void)
{
	double x0 = 1.5;
	printf("Initial guess: %lf, f(x0) = %lf\n", x0, f(x0));
	for (int i = 0; i < 50 && fabs(f(x0)) > 1e-8; i++) {
		double fval = f(x0);
		double fdashval = fdash(x0);
		x0 = x0 - 0.4 * fval / fdashval;
		printf("%d: New x0 = %lf, f(x0) = %lf\n", i+1, x0, f(x0));
	}
	return 0;
}

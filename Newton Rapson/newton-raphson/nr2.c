#include <stdio.h>
#include <math.h>

/* f(V2) = V0 - V2 - Is R * (exp(V2/VT) - 1) 
=> f'(V2) = -1 - Is R * exp(V2 / VT) / VT
*/

#define VT 25.9e-3
#define R 10
#define Is 10e-9

double
f(double V2, double V0) {
	return V0 - V2 - Is * R * (exp(V2/VT) - 1);
}

double
fdash(double V2, double V0) {
	return -1 - Is * R * exp(V2 / VT) / VT;
}

int
main(void)
{
	double V0 = 1;
	double V2_0 = 1;
	for (int i = 0; i < 30 && fabs(f(V2_0, V0)) > 1e-8; i++) {
		double fval = f(V2_0, V0);
		double fdashval = fdash(V2_0, V0);
		V2_0 = V2_0 - fval / fdashval;
		printf("%d: New V2_0 = %.10lf, f(V2_0) = %lf\n", i+1, V2_0, f(V2_0, V0));
	}
	return 0;
}

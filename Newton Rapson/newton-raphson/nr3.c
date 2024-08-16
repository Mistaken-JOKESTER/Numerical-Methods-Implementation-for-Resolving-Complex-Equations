#include <stdio.h>
#include <math.h>

/* x^3 - 20x = 0 */
/* f(x) = x^3 - 20x */
/* => f'(x) = 3x^2 - 20 */

#define TYPE double

TYPE fdash(TYPE x)
{
	return 3 * x * x - 20;
}

TYPE f(TYPE x)
{
	return x * x * x - 20 * x;
}

int
main(void)
{
	TYPE x0 = 8;
	printf("Initial guess: %lf, f(x0) = %lf\n", x0, f(x0));
	for (int i = 0; i < 50 && fabs(f(x0)) > 1e-8; i++) {
		TYPE fval = f(x0);
		TYPE fdashval = fdash(x0);
		x0 = x0 - fval / fdashval;
		printf("%d: New x0 = %lf, f(x0) = %e\n", i+1, x0, f(x0));
	}
	return 0;
}

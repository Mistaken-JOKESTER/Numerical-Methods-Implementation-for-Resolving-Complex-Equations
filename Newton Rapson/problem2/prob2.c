#include <math.h>

double fdash_poly(double x)
{
	return 6*pow(x,2) + 10*pow(x,1) - 22;
}

double f_poly(double x)
{
	return 2*pow(x,3) + 5*pow(x,2) - 22*pow(x,1) + 15;
}

double fdash_cos(double x)
{
	return -sin(x) + (1/2)*exp(-x/2);
}

double f_cos(double x)
{
	return cos(x) - exp(-x/2);
}

double fdash_taninv(double x)
{
	return 1/(1 + x*x);
}

double f_taninv(double x)
{
	return atan(x);
}


#include "Test.h"
#include <math.h>

double Test::Task22(double& y, double& u, double& x)
{
	return sin(2 * u) * log10(2 * pow(y, 2) + sqrt(x));
}


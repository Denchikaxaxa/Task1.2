#include "Test.h"
#include <math.h>

double Test::Task27(double& y, double& x, double& v)
{
	return 1.03 * v + exp(2 * y) + tan(fabs(x));
}


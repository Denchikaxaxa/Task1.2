#include "Test.h"
#include <math.h>

double Test::Task15(double& y)
{
	return sin(pow(y, 2)) - 2.8 * y + sqrt(fabs(y));
}

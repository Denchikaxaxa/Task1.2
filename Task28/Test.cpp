#include "Test.h"
#include <math.h>

double Test::Task28(double& y, double& h)
{
	return exp(y + h) + sqrt(fabs(6.4 * y));
}

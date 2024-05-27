#include "Translation.h"
#include <cmath>

ComplexNumber Translation(double radius, double degree)
{
	double pi = 3.14159265358979323846;
	ComplexNumber Result(radius * cos(degree*pi/180), radius * sin(degree*pi/180));
	return Result;
}

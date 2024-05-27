#include "Zukovskij.h"

ComplexNumber function1(ComplexNumber value)
{
	ComplexNumber Minus_One(-1, 0);
	ComplexNumber Plus_One(1, 0);
	ComplexNumber FirstResult(Addition(value, Minus_One));
	ComplexNumber SecondResult(Addition(value, Plus_One));

	ComplexNumber Final_Result(DivideComplexNumber(FirstResult, SecondResult));
	
	return Final_Result;
}

ComplexNumber function2(ComplexNumber value)
{
	ComplexNumber Result(MultiplexComplexNumber(value, value));

	return Result;
}

ComplexNumber function3(ComplexNumber value)
{
	ComplexNumber Minus_One(-1, 0);
	ComplexNumber Plus_One(1, 0);
	ComplexNumber First_Result(Addition(Plus_One, value));
	
	ComplexNumber Second_Result(Addition(Plus_One, MultiplexComplexNumber(Minus_One, value)));

	return DivideComplexNumber(First_Result, Second_Result);
}

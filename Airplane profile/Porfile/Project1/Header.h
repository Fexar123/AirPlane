#pragma once
class ComplexNumber {
private:
	double Re;
	double Im;
public:
	ComplexNumber(double Re, double Im);
	double GetRe();
	double GetIm();
};

ComplexNumber MultiplexComplexNumber(ComplexNumber First, ComplexNumber Second);
ComplexNumber DivideComplexNumber(ComplexNumber First, ComplexNumber Second);
ComplexNumber Addition(ComplexNumber First, ComplexNumber Second);
ComplexNumber substraction(ComplexNumber First, ComplexNumber Second);

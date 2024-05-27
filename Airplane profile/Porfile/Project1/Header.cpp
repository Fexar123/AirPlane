//тут разработана алгебраическая логика комплексных чисел для профилей крыльев по теореме Жуковского
#include "Header.h"
#include <iostream>
using namespace std;

ComplexNumber::ComplexNumber(double Re, double Im)
{
    this->Re = Re;
    this->Im = Im;
}

double ComplexNumber::GetRe() {
    return this->Re;
}

double ComplexNumber::GetIm() {
    return this->Im;
}


ComplexNumber MultiplexComplexNumber(ComplexNumber First, ComplexNumber Second) {
    double realPart = First.GetRe() * Second.GetRe() - First.GetIm() * Second.GetIm();
    double imPart = First.GetRe() * Second.GetIm() + Second.GetRe() * First.GetIm();

    ComplexNumber result(realPart, imPart);

    return result;
}

ComplexNumber DivideComplexNumber(ComplexNumber First, ComplexNumber Second) {
    ComplexNumber SoprWithSecond(Second.GetRe(), -1 * Second.GetIm());
    ComplexNumber MultFirst(MultiplexComplexNumber(First, SoprWithSecond));
    ComplexNumber MultSecond(MultiplexComplexNumber(Second, SoprWithSecond));
    double SumMultSecond = MultSecond.GetRe() + MultSecond.GetIm();

    ComplexNumber End(1 / SumMultSecond, 0);
    ComplexNumber result(MultiplexComplexNumber(MultFirst, End));

    return result;
}

ComplexNumber Addition(ComplexNumber First, ComplexNumber Second) {
    ComplexNumber result(First.GetRe() + Second.GetRe(), First.GetIm() + Second.GetIm());
    return result;
}

ComplexNumber substraction(ComplexNumber First, ComplexNumber Second) {
    ComplexNumber result(First.GetRe() - Second.GetRe(), First.GetIm() - Second.GetIm());
    return result;
}
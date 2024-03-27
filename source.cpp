#include <iostream>
#include <string>
using namespace std;

class ComplexNumber
{
public:
    ComplexNumber(double Re, double Im)
    {
        this->Re = Re;
        this->Im = Im;
    }
    double GetRe()
    {
        return this->Re;
    }
    double GetIm()
    {
        return this->Im;
    }

private:
    double Re;
    double Im;
};

void CreateDisplay(int sizeX, int sizeY)
{
    string pixels = "";
    for (int i = 0; i < sizeY; i++)
    {
        for (int j = 0; j < sizeX; j++)
        {
            pixels = pixels + "#";
            if (j == sizeX - 1)
            {
                cout << pixels << endl;
                pixels = "";
            }
        }
    }
}

ComplexNumber DivideComplexNumber(ComplexNumber First, ComplexNumber Second)
{
    double denominator = Second.GetRe() * Second.GetRe() + Second.GetIm() * Second.GetIm();
    double realResult = (First.GetRe() * Second.GetRe() + First.GetIm() * Second.GetIm()) / denominator;
    double imagResult = (First.GetIm() * Second.GetRe() - First.GetRe() * Second.GetIm()) / denominator;

    ComplexNumber result(realResult, imagResult);

    return result;
}

ComplexNumber MultiplexComplexNumber(ComplexNumber First, ComplexNumber Second)
{
    double realPart = First.GetRe() * Second.GetRe() - First.GetIm() * Second.GetIm();
    double imPart = First.GetRe() * Second.GetIm() + Second.GetRe() * First.GetIm();

    ComplexNumber result(realPart, imPart);

    return result;
}

int main()
{

    ComplexNumber First(1, 0);
    ComplexNumber Second(3, 2);

    ComplexNumber Divide_Result = DivideComplexNumber(First, Second);

    ComplexNumber End_Result = MultiplexComplexNumber(Second, Divide_Result);

    cout << End_Result.GetRe();

    return 0;
}
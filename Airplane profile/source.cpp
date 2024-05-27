//тут разработана алгебраическая логика комплексных чисел для профилей крыльев по теореме Жуковского

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

ComplexNumber MultiplexComplexNumber(ComplexNumber First, ComplexNumber Second)
{
    double realPart = First.GetRe() * Second.GetRe() - First.GetIm() * Second.GetIm();
    double imPart = First.GetRe() * Second.GetIm() + Second.GetRe() * First.GetIm();

    ComplexNumber result(realPart, imPart);

    return result;
}

ComplexNumber DivideComplexNumber(ComplexNumber First, ComplexNumber Second)
{
    ComplexNumber SoprWithSecond(Second.GetRe(), -1 * Second.GetIm());
    ComplexNumber MultFirst(MultiplexComplexNumber(First, SoprWithSecond));
    ComplexNumber MultSecond(MultiplexComplexNumber(Second, SoprWithSecond));
    double SumMultSecond = MultSecond.GetRe() + MultSecond.GetIm();

    ComplexNumber End(1 / SumMultSecond, 0);
    ComplexNumber result(MultiplexComplexNumber(MultFirst, End));

    return result;
}

ComplexNumber addition(ComplexNumber First, ComplexNumber Second)
{
    ComplexNumber result(First.GetRe() + Second.GetRe(), First.GetIm() + Second.GetIm());
    return result;
}

ComplexNumber  substraction(ComplexNumber First, ComplexNumber Second)
{
    ComplexNumber result(First.GetRe() - Second.GetRe(), First.GetIm() - Second.GetIm());
    return result;
}


        int main()
    {

        ComplexNumber First(1, 0);
        ComplexNumber Second(3, 2);


        ComplexNumber End_Result = substraction(Second, First);

        cout << End_Result.GetRe() << endl;
        cout << End_Result.GetIm();
        return 0;
    }
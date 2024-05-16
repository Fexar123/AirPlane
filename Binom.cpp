#include <iostream>
using namespace std;

int factorial(int number)
{
    if (number == 0)
    {
        return 1;
    }
    if (number == 1)
    {
        return number;
    }
    return number * factorial(number - 1);
}

int degree_number(int number, int degree)
{
    int result = 1;
    for (int i = 0; i < degree; i++)
    {
        result = result * number;
    }
    return result;
}

int Sochet(int value, int index)
{
    int main_number = factorial(value);
    int index_number = factorial(index);
    int minus_index_number = factorial(value - index);
    int mult = index_number * minus_index_number;
    int result = main_number / mult;
    return result;
}

int Combinatoric(int a, int b, int degree)
{
    // эта функция использует Сочетания для умножения суммы 2-ух перменных n степени
    int result = 0;
    for (int i = 0; i <= degree; i++)
    {
        for (int k = 0; k <= degree; k++)
        {
            if (k + i == degree)
            {
                int combinatoric_result = Sochet(degree, i);
                int time_result = combinatoric_result * degree_number(a, i) * degree_number(b, degree - i);
                result = result + time_result;
            }
        }
    }

    return result;
}

int main()
{

    cout << Combinatoric(4, 2, 4);

    return 0;
}
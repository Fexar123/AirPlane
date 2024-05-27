#include <iostream>
#include <string>
#include "Zukovskij.h"
#include <cmath>

using namespace std;

int main()
{
    cout << Translation(4, 50).GetRe() << " Re" << endl;
    cout << Translation(4, 50).GetIm() << " Im" << endl;
    

    return 0;
}
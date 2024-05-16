#include<iostream>
using namespace std;


class C {
public:
	C(int Re, int Im) {
		this->Re = Re;
		this->Im = Im;
	}
	int GetRe() {
		return this->Re;
	}
	int GetIm() {
		return this->Im;
	}
	C Sum(C number) {
		C time_number(number.GetRe() + this->Re, number.GetIm() + this->Im);
		return time_number;
	}
	C Min(C number) {
		C time_number(number.GetRe() - this->Re, number.GetIm() - this->Im);
		return time_number;
	}
	C mult(C number) {
		C time_number(number.GetRe() * this->Re - number.GetIm() * this->Im, number.GetRe() * this->Im + this->Re * number.GetIm());
		return time_number;
	}
	void ShowNumber() {
		cout << "Real part:" << this->GetRe() << endl;
		cout << "Imaginary part:" << this->GetIm() << endl;
	}
	void InTrigonometricScope() {
		double Gip = this->Re * this->Re + this->Im * this->Im;
		double i = 0;
		while (true) {
			if (i * i >= Gip  ) {
				false;
				break;
			}
			i++;
		}
		double cos = this->Re / i;
		double sin = this->Im / i;
		cout << "Algebra: " << i * cos << "+ i" << i * sin << endl;
		cout << "Trigonometric: " << i << "(cos(k) + sin(k)" << endl;
	}
private:
	int Re;
	int Im;
};

int main() {

	C practic(3, 7);
	C tester(5, 8);
	C time = practic.mult(tester);
	time.ShowNumber();
	time.InTrigonometricScope();




	return 0;
}
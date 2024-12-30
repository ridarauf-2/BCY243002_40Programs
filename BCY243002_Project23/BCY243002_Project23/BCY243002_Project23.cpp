#include <iostream>
#include<math.h>
using namespace std;
void Quadratic(int a, int b, int c) {
	int d = b * b - 4 * a * c;
	if (d > 0) {
		cout << "roots are real and differnt \n";
		cout << "X1: " << (double)(-b + sqrt(abs(d))) / (2 * a) << endl;
		cout << "X2: " << (double)(-b - sqrt(abs(d))) / (2 * a) << endl;
	}
	else if (d == 0) {
		cout << "roots are real and same \n";
		cout << "X1 & X2 : " << -(double)b / (2 * a);
	}
	else {
		cout << "roots are complex \n";
		cout << "X1: " << -(double)b / (2 * a) << " + i" << sqrt(abs(d)) / (2 * a) << endl;
		cout << "X2: " << -(double)b / (2 * a) << " - i" << sqrt(abs(d)) / (2 * a) << endl;
	}
}
int main() {
	int a, b, c;
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	cout << "enter first number: ";
	cin >> a;
	cout << "enter second number: ";
	cin >> b;
	cout << "enter third number:  ";
	cin >> c;
	Quadratic(a, b, c);
	return 0;
}

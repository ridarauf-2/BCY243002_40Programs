#include <iostream>
using namespace std;
int main() {
	int Num, d, res = 0;
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	cout << "Enter a number: ";
	cin >> Num;
	cout << "enter divisor: ";
	cin >> d;
	if (Num % d == 0) {
		res = Num / d;
		cout << Num << " is divisible by " << d << " and result is: " << res;
	}
	else
		cout << "not divisible";

	return 0;
}

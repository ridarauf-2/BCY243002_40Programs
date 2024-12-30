#include <iostream>
using namespace std;
int main() {
	int A, B, C;
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	cout << "enter first number: ";
	cin >> A;
	cout << "enter second number: ";
	cin >> B;
	cout << "enter third number: ";
	cin >> C;
	if (A > B) {
		if (A > C) {
			cout << "largest number is:" << A;
		}
		else {
			cout << "largest number is:" << C;
		}
	}
	else {
		if (B > C) {
			cout << "largest number is:" << B;
		}
		else {
			cout << "largest number is:" << C;
		}
	}
	return 0;
}

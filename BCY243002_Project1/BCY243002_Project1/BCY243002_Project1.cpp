#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	cout << "enter a number: ";
	cin >> n;
	if (n > 0) {
		cout << n << " is positive";
	}
	else if (n < 0) {
		cout << n << " is negative";
	}
	else if (n == 0) {
		cout << n << " is zero";
	}
	return 0;
}

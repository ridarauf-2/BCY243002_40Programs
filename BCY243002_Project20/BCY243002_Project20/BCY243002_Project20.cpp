#include <iostream>
using namespace std;
int main() {
	int n, temp, p = 0;
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	cout << "enter a number: ";
	cin >> n;
	temp = n;
	while (n > 0) {
		int rem = n % 10;
		p = (p)+(rem * rem * rem);
		n = n / 10;
	}
	if (temp == p) {
		cout << "Yes " << temp << " is a Armstrong Number";
	}
	else {
		cout << "No " << temp << " is not an Armstrong Number";
	}

	return 0;
}

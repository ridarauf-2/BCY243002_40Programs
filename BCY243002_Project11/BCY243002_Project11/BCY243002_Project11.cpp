#include <iostream>
using namespace std;
int main() {
	int fact = 1, n;
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	cout << "enter a number: ";
	cin >> n;
	for (int i = n;i > 0;i--) {
		fact = fact * i;
	}
	cout << "factorial of " << n << " is " << fact;
	return 0;
}

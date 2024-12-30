#include <iostream>
using namespace std;
int main() {
	int n1, n2, res;
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	cout << "enter first number: ";
	cin >> n1;
	cout << "enter second number: ";
	cin >> n2;
	res = min(n1, n2);
	while (res > 1)
		if (n1 % res == 0 && n2 % res == 0) {
			break;

		}
		else {
			res--;
		}
	cout << "GCD of " << n1 << " and " << n2 << " is " << res;
	return 0;
}

#include <iostream>
using namespace std;
int main() {
	int n1, n2, m;
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	cout << "enter first number: ";
	cin >> n1;
	cout << "enter second number: ";
	cin >> n2;
	m = max(n1, n2);
	do {
		if (m % n1 == 0 && m % n2 == 0) {
			break;
		}
		else {
			m++;
		}

	} while (true);
	cout << "LCM of " << n1 << " and " << n2 << " is " << m;
	return 0;
}

#include <iostream>
using namespace std;
int main() {
	int n, cnt = 0;
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	cout << "enter a number: ";
	cin >> n;
	if (n <= 1) {
		cout << n << " is not prime";
	}
	else {
		for (int i = 1;i <= n;i++) {
			if (n % i == 0) {
				cnt++;
			}
		}
	}
	if (cnt == 2) {
		cout << n << " is prime";
	}
	else {
		cout << n << " is not prime";
	}
	return 0;
}

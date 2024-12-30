#include <iostream>
using namespace std;
int power(int n, int p) {
	if (p == 0) {
		return 1;
	}
	else if (n == 0) {
		return 0;
	}
	else
		return n * power(n, p - 1);
}
int main() {
	int num, pow;
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	cout << "enter a number: ";
	cin >> num;
	cout << "enter power: ";
	cin >> pow;
	int res = power(num, pow);
	cout << "result of " << num << "^" << pow << " is: " << res;
	return 0;
}

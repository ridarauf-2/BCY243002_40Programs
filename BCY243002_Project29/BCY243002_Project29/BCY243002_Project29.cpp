#include <iostream>
using namespace std;
int reverse_digits(int n) {
	int rev_num = 0;
	while (n > 0) {
		rev_num = rev_num * 10 + n % 10;
		n = n / 10;
	}
	return rev_num;
}

int main() {
	int n;
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	cout << "enter a number: ";
	cin >> n;
	cout << "reverse of num " << n << " is: " << reverse_digits(n);
	return 0;
}

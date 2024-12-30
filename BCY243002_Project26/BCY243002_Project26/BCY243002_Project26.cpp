#include <iostream>
#include<math.h>
using namespace std;
void Perfectsquare(int n) {
	int num = n / sqrt(n);
	if (num == sqrt(n)) {
		cout << n << " is a perfect square of " << num;
	}
	else {
		cout << n << " is not a perfect square";
	}
}
int main() {
	int n;
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	cout << "enter a number: ";
	cin >> n;
	Perfectsquare(n);
	return 0;
}

#include <iostream>
using namespace std;
int main() {
	int num, sum = 0;
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	cout << "enter a number: ";
	cin >> num;
	while (num != 0) {
		sum += num % 10;
		num = num / 10;
	}
	cout << "sum of digits is : " << sum;
	return 0;
}

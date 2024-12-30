#include <iostream>
using namespace std;
int main() {
	int n1, n2, sum = 0;
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	cout << "enter first number: ";
	cin >> n1;
	cout << "enter second number: ";
	cin >> n2;
	for (int i = n1;i <= n2;i++) {
		sum += i;
	}
	cout << sum;

	return 0;
}

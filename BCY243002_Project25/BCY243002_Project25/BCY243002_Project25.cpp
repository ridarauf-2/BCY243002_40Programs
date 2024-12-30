#include <iostream>
#include<math.h>
using namespace std;
void fibonacci(int n) {
	int a = 0, b = 1, c = 0;
	cout << a << " ";
	cout << b << " ";
	for (int i = 1;i <= n;i++) {
		c = a + b;
		if (c <= n) {
			cout << c << " ";
			a = b;
			b = c;
		}
		else break;
	}
}
int main() {
	int n;
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	cout << "enter a number: ";
	cin >> n;
	fibonacci(n);
	return 0;
}

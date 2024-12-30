#include <iostream>
using namespace std;
int main() {
	int n, even = 0, odd = 0;
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	cout << "enter a number: ";
	cin >> n;
	for (int i = 1;i <= n;i++) {
		cout << i << " ";
		if (i % 2 == 0) {
			even++;
		}
		else if (i % 2 != 0) {
			odd++;
		}
	}
	cout << "\nEven numbers:" << even << "\nOdd numbers: " << odd;
	return 0;
}


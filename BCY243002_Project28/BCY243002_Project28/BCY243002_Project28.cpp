#include <iostream>
using namespace std;
void printDiamond(int n) {
	for (int i = 0;i < n;i++) {
		for (int j = 0;j <= i;j++) {
			cout << " ";
		}
		for (int k = n - 1;k >= i;k--) {
			cout << "* ";
		}
		cout << endl;
	}
	for (int i = 0;i < n;i++) {
		for (int j = n;j > i;j--) {
			cout << " ";
		}
		for (int k = 0;k <= i;k++) {
			cout << "* ";
		}
		cout << endl;
	}
}

int main() {
	int n;
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	cout << "enter a number: ";
	cin >> n;
	printDiamond(n);
	return 0;
}

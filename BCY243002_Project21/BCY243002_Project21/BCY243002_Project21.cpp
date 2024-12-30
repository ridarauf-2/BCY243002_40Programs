#include <iostream>
using namespace std;
void star_pattern(int n) {
	for (int i = 0;i < n;i++) {
		for (int j = 0;j <= i;j++) {
			cout << "* ";
		}
		cout << endl;
	}
}
int main() {
	int num;
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	cout << "enter a number: ";
	cin >> num;
	star_pattern(num);
	return 0;
}

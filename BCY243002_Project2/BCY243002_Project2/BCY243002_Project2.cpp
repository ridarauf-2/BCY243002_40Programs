#include <iostream>
using namespace std;
int main() {
	int marks;
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	cout << "enter marks: ";
	cin >> marks;
	if (marks >= 90) {
		cout << "A*";
	}
	else if (marks < 90 && marks >= 80) {
		cout << "A";
	}
	else if (marks < 80 && marks >= 70) {
		cout << "B";
	}
	else if (marks < 70 && marks >= 60) {
		cout << "C";
	}
	else if (marks < 60 && marks >= 50) {
		cout << "D";
	}
	else if (marks < 50) {
		cout << "F";
	}
	return 0;
}

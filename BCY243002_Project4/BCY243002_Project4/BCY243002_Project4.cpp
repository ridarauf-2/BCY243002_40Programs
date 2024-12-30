#include <iostream>
using namespace std;
int main() {
	int age;
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	cout << "enter age: ";
	cin >> age;
	if (age >= 55) {
		cout << "retired";
	}
	else if (age < 55 && age >= 30) {
		cout << "Adult";
	}
	else if (age < 30 && age >= 20) {
		cout << "Young Adult";
	}
	else if (age < 20 && age >= 13) {
		cout << "Teenager";
	}
	else if (age < 13 && age >= 5) {
		cout << "Child";
	}
	else if (age < 4) {
		cout << "Baby";
	}
	return 0;
}

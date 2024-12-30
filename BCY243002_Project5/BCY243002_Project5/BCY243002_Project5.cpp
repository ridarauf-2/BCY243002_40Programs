#include <iostream>
using namespace std;
int main() {
	int year;
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	cout << "enter year: ";
	cin >> year;
	if (year % 400 == 0 || year % 4 == 0)
		cout << "leap year";
	else if (year % 100 == 0)
		cout << "not a leap year";
	else
		cout << "not a leap year";

	return 0;
}


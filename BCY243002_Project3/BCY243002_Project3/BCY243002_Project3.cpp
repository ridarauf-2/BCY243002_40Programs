#include <iostream>
using namespace std;
int main() {
	char grade;
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	cout << "enter a grade: ";
	cin >> grade;
	switch (grade) {
	case'A':
		cout << "great! :)";
		break;
	case'B':
		cout << "good job :)";
		break;
	case'C':
		cout << "you can do better";
		break;
	case'D':
		cout << "you passed";
	case'F':
		cout << "you failed :(";
	}
	return 0;
}

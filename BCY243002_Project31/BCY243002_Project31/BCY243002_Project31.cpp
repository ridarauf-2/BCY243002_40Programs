Code 1: check password
#include <iostream>
#include<cstring>
using namespace std;
int main() {
	char password[50] = "ROYGBIV", arr[50];
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	while (true) {
		cout << "enter password: ";
		cin.getline(arr, 50);
		if (strcmp(password, arr) == 0) {
			cout << "correct password" << endl;
			break;
		}
		else {
			cout << "incorrect password" << endl;
		}
	}
}

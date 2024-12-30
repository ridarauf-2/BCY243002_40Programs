#include <iostream>
#include<cstring>
using namespace std;
int main() {
	int arr[50], fact = 1, num;
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	cout << "enter a number" << endl;
	cin >> num;
	arr[0] = num;
	for (int i = 1;i < num;i++) {
		arr[i] = arr[0] - i;
	}
	for (int j = 0;j < num;j++) {
		fact = fact * arr[j];
	}
	cout << "factorial of " << num << " is: " << fact;

}

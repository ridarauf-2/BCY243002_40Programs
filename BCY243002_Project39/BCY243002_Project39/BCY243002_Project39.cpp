#include <iostream>
using namespace std;
#define N 10
int main() {
	int arr[N], num;
	bool flag = false;
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	cout << "enter array elements: ";
	for (int i = 0;i < N;i++) {
		cin >> arr[i];
	}
	cout << "enter number to search: ";
	cin >> num;
	for (int i = 0;i < N;i++) {
		if (arr[i] == num) {
			flag = true;
		}
		break;

	}
	if (flag) {
		cout << "number found";
	}
	else {
		cout << "number not found";
	}
	return 0;
}

#include <iostream>
using namespace std;
#define N 4
int main() {
	int arr[4][4];
	bool IDM = true;
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	cout << "enter array elements: ";
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < N;j++) {
			cin >> arr[i][j];
			cout << " ";
			cout << arr[i][j];
			if (i == j && arr[i][j] != 1) {
				IDM = false;
			}
			else if (i != j && arr[i][j] != 0) {
				IDM = false;
			}
		}
		cout << endl;
	}
	if (IDM) {
		cout << "Identity Matrix";
	}
	else {
		cout << "Not Identity Matrix";
	}
	return 0;
}

#include <iostream>
#include<cmath>
# define N 3
using namespace std;
int main() {
	int arr[N][N], transpose[N][N];
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	cout << "enter array elements: ";
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < N;j++) {
			cin >> arr[i][j];
		}
	}
	cout << "Orignal array: \n";
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < N;j++) {
			cout << " ";
			cout << arr[i][j];
		}
		cout << endl;
	}
	cout << "transpose array is: \n";
	for (int i = 0;i < N;i++) {
		for (int j = 0;j < N;j++) {
			transpose[i][j] = arr[j][i];
			cout << " ";
			cout << transpose[i][j];
		}
		cout << endl;
	}
	return 0;
}

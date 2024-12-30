#include <iostream>
# define N 5
using namespace std;
int main() {
	int arr[N], n;
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	cout << "enter a number" << endl;
	cin >> n;
	cout << "enter array elements" << endl;
	for (int i = 0;i < N;i++) {
		cin >> arr[i];
	}
	for (int j = 0;j < N;j++) {
		if (arr[j] % n == 0)
			cout << arr[j] << " is divisible by " << n << endl;
		else
			cout << arr[j] << " is not divisible by " << n << endl;
	}

}

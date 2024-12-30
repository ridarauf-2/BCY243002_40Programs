#include <iostream>
# define N 5
using namespace std;
int main() {
	int arr[N];double sum = 0, avg;
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	cout << "enter array elements" << endl;
	for (int i = 0;i < N;i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	avg = sum / N;
	cout << "average of array is:" << avg;

}

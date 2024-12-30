#include <iostream>
# define N 5
void reverse_array(int arr[], int n) {
	int i = 0, j = n - 1;
	while (i < j) {
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
}
using namespace std;
int main() {
	int arr[N];
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	cout << "enter array elements" << endl;
	for (int i = 0;i < N;i++) {
		cin >> arr[i];
	}
	cout << "orignal array" << endl;
	for (int i = 0;i < N;i++) {
		cout << arr[i] << " ";
	}
	reverse_array(arr, N);
	cout << "\nreversed array" << endl;
	for (int i = 0;i < N;i++) {
		cout << arr[i] << " ";
	}
}

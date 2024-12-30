#include <iostream>
#include<cstring>
using namespace std;
int main() {
	int arr[5], sum = 0;
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	cout << "enter array elements" << endl;
	for (int i = 0;i < 5;i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	cout << "sum of array is: " << sum;

}

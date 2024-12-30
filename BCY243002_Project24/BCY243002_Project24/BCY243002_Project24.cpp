#include <iostream>
#include<math.h>
using namespace std;
int Findsum(int n) {
	int sum = 0;
	for (int i = 1;i <= n;i++) {
		sum += i;
	}
	return sum;
}
int main() {
	int n, res;
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	cout << "enter a number: ";
	cin >> n;
	res = Findsum(n);
	cout << "sum of first " << n << " numbers is: " << res;
	return 0;
}

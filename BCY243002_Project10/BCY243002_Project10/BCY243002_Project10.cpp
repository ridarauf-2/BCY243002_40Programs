#include <iostream>
#include<cstdlib>
using namespace std;
int main() {
	int n, guess;
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	cout << "enter a number: ";
	cin >> guess;
	srand(time(0));
	n = (rand() % 10) + 1;
	cout << "random number: " << n;
	if (guess == n) {
		cout << "\nyou guessed correctly";
	}
	else {
		cout << "\nincorrect guess";
	}
	return 0;
}

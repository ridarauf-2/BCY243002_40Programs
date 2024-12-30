#include <iostream>
using namespace std;
int DiceVal(int& dice) {
	srand(time(0));
	dice = (rand() % 6) + 1;
	return dice;
}

int main() {
	int dice;
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	DiceVal(dice);
	switch (dice) {
	case 1:
		cout << "move 1 space";
		break;
	case 2:
		cout << "move 2 spaces";
		break;
	case 3:
		cout << "move 3 spaces";
		break;
	case 4:
		cout << "move 4 spaces";
		break;
	case 5:
		cout << "move 5 spaces";
		break;
	case 6:
		cout << "move 6 space";
		break;
	default: {
		cout << "error";
	}

	}


	return 0;
}

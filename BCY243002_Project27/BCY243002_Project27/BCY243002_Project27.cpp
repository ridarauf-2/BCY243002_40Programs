#include <iostream>
#include<math.h>
using namespace std;
string printname(string& str2) {
	string result, str1 = "Programming ";
	result = str1 + str2;
	return result;
}

int main() {
	int n;
	cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
	string str = "Fundamentals";
	cout << printname(str);

	return 0;
}

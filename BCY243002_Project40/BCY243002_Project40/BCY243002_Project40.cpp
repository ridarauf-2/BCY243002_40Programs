#include <iostream>
using namespace std;
int main() {
    const int N = 100;
    int num, j = 0;
    int factors[N];
    cout << "my name is:Rida Rauf,Reg No:BCY243002" << endl;
    cout << "Enter a number:";
    cin >> num;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            factors[j] = i;
            j++;
        }
    }
    cout << "The factors of " << num << " are: ";
    for (int i = 0; i < j; i++) {
        cout << factors[i] << " ";
    }
    cout << endl;

    return 0;
}

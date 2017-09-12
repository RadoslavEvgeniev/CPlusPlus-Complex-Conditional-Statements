#include <iostream>
using namespace std;

int main() {
	int number;
	void printResult(int);
	cin >> number;
	printResult(number);
}
void printResult(int number) {
	if (number != 0 && (number < 100 || number > 200)) {
		cout << "invalid" << endl;
	}
}
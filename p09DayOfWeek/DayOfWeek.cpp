#include <iostream> 
#include <string>

using namespace std;

int main() {
	string days[7] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
	int day;
	cin >> day;
	if (day - 1 < 0 || day - 1 > 6) {
		cout << "Error" << endl;
		return 0;
	}

	cout << days[day - 1] << endl;
}
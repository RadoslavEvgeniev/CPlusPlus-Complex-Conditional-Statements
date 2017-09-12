#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	double age;
	string gender;
	cin >> age >> gender;
	map <bool, string> conditions = { {gender == "m" && age >= 16, "Mr."}, {gender == "m" && age < 16, "Master"}, {gender == "f" && age >= 16, "Ms."}, {gender == "f" && age < 16, "Miss"} };

	for (auto& kvp : conditions) {
		if (kvp.first)
		{
			cout << kvp.second << endl;
			break;
		}
	}
	
}
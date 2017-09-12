#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
	bool checkWhatItIs(string[], string);
	string item;
	cin >> item;
	string fruits[] = { "banana", "apple", "kiwi", "cherry", "lemon", "grapes" };
	string vegies[] = { "tomato", "cucumber", "pepper", "carrot" };
	bool found = false;
	found = checkWhatItIs(fruits, item);
	if (found)
	{
		cout << "fruit" << endl;
		return 0;
	}
	found = checkWhatItIs(vegies, item);
	if (found)
	{
		cout << "vegetable" << endl;
		return 0;
	}

	cout << "unknown" << endl;
}
bool checkWhatItIs(string items[], string item) {
	bool found = false;
	for (int i = 0; i < sizeof(items); i++)
	{
		if (items[i] == item)
		{
			return true;
		}
	}
	return false;
}

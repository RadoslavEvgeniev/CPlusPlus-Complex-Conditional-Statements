#include <iostream>
#include <string>
#include <map>
#include <iomanip>

using namespace std;

int main() {
	string fruit;
	string day;
	double quantity;
	cin >> fruit >> day >> quantity;

	map<string, double> weekDaysPrices = {
		{"banana", 2.50},
		{"apple", 1.20},
		{"orange", 0.85},
		{"grapefruit", 1.45},
		{"kiwi", 2.70},
		{"pineapple", 5.50},
		{"grapes", 3.85}
	};
	map<string, double> weekEndsPrices = {
		{ "banana", 2.70 },
		{ "apple", 1.25 },
		{ "orange", 0.90 },
		{ "grapefruit", 1.60 },
		{ "kiwi", 3 },
		{ "pineapple", 5.60 },
		{ "grapes", 4.20 }
	};
	bool weekDays = day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday";
	bool weekEnds = day == "Saturday" || day == "Sunday";
	map<bool, map<string, double>> shopData = {
		{weekDays, weekDaysPrices},
		{weekEnds, weekEndsPrices}
	};
	double total = 0;
	for (auto& kvp : shopData) {
		if (kvp.first)
		{
			total = kvp.second[fruit] * quantity;
		}
	}
	if (total == 0)
	{
		cout << "error" << endl;;
	}
	else 
	{
		cout << setprecision(2) << fixed << total << endl;
	}
}

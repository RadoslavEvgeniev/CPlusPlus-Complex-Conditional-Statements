#include <iostream>
#include <string>
#include <map>
#include <iomanip>

using namespace std;

int main() {
	string town;
	double sales;
	cin >> town >> sales;
	map<bool, double> sofia = {
		{sales >= 0 && sales <= 500, 0.05},
		{sales > 500 && sales <= 1000, 0.07},
		{sales > 1000 && sales <= 10000, 0.08},
		{sales > 10000, 0.12}
	};
	map<bool, double> varna = {
		{ sales >= 0 && sales <= 500, 0.045 },
		{ sales > 500 && sales <= 1000, 0.075 },
		{ sales > 1000 && sales <= 10000, 0.1 },
		{ sales > 10000, 0.13 }
	};
	map<bool, double> plovdiv = {
		{ sales >= 0 && sales <= 500, 0.055 },
		{ sales > 500 && sales <= 1000, 0.08 },
		{ sales > 1000 && sales <= 10000, 0.12 },
		{ sales > 10000, 0.145 }
	};
	map<string, map<bool, double>> comissionsData = {
		{"Sofia", sofia},
		{"Varna", varna},
		{"Plovdiv", plovdiv}
	};
	double total = 0;
	for (auto& kvp : comissionsData[town]) {
		if (kvp.first)
		{
			total = sales * kvp.second;
		}
	}

	if (total == 0)
	{
		cout << "error" << endl;
	}
	else {
		cout << setprecision(2) << fixed << total << endl;
	}
}
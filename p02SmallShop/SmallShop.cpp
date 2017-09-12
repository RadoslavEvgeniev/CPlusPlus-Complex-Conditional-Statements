#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	map<string, double> sofiaShopData = {
		{"coffee", 0.50},
		{"water", 0.80},
		{"beer", 1.20},
		{"sweets", 1.45},
		{"peanuts", 1.60}
	};
	map<string, double> plovdivShopData = {
		{ "coffee", 0.40 },
		{ "water", 0.70 },
		{ "beer", 1.15 },
		{ "sweets", 1.30 },
		{ "peanuts", 1.50 }
	};
	map<string, double> varnaShopData = {
		{ "coffee", 0.45 },
		{ "water", 0.70 },
		{ "beer", 1.10 },
		{ "sweets", 1.35 },
		{ "peanuts", 1.55 }
	};
	
	map<string, map<string, double>> shopData = {
		{"Sofia", sofiaShopData},
		{"Plovdiv", plovdivShopData},
		{"Varna", varnaShopData}
	};

	string product;
	string town;
	double quantity;
	double total;
	cin >> product >> town >> quantity;
	total = shopData[town][product] * quantity;

	cout << total << endl;
}
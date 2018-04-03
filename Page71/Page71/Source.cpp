//Page71 #7
//4-3-2018
//Author Daniel McGlasson

#include <iostream>

int main()
{
	double dollarsEntered;
	double britishPounds = 0.6318;
	double dollarsToPounds;
	double mexicanPesos = 12.8863;
	double dollarsToPesos;
	double japaneseYen = 82.34;
	double dollarsToYen;


	std::cout << " How many dollars do you have >>>";
	std::cin >> dollarsEntered;

	dollarsToPounds = dollarsEntered * britishPounds;

	std::cout << "You have this many british pounds " << dollarsToPounds;

	std::cout << " How many dollars do you have >>>";
	std::cin >> dollarsEntered;

	dollarsToPounds = dollarsEntered * mexicanPesos;

	std::cout << "You have this many mexican pesos " << dollarsToPesos;
	
	std::cout << " How many dollars do you have >>>";
	std::cin >> dollarsEntered;

	dollarsToPounds = dollarsEntered * japaneseYen;

	std::cout << "You have this many japanese yen " << dollarsToYen;

	system("pause");

	return 0;
}
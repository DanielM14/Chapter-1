//OwnMadLibs
//03/28/2018
//Author: Daniel McGlasson

#include <iostream>
#include <string>


int main()
{
	std::string wordIng;
	std::string animal;
	std::string pluralNoun;
	int aFirstNumberChosenByUser;
	int bSecondNumberChosenByUser;
	int cTheResultOfaMinusB;
	std::cout << "Welcome To My Own Mad Libs. \n\n";
	std::cout << "Enter a word ending in ING >>>" << std::endl;
	std::cin >> wordIng;
	std::cout << "Enter an animal >>>" << std::endl;
	std::cin >> animal;
	std::cout << "Enter a Noun Pluarl >>>" << std::endl;
	std::cin >> pluralNoun;
	std::cout << "Enter a number >>>" << std::endl;
	std::cin >> aFirstNumberChosenByUser;
	std::cout << "Enter another number >>>" << std::endl;
	std::cin >> bSecondNumberChosenByUser;

	std::cout << "The " << aFirstNumberChosenByUser << " ducks is " << bSecondNumberChosenByUser << wordIng << " the people of street number " << cTheResultOfaMinusB << std::endl;
	std::cout << " and the " << animal << " of the cities park. " << pluralNoun << " is freaking out!" << std::endl;

}
	

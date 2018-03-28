//MadLibs
//03/27/2018
//Author: Daniel McGlasson

#include <iostream>
#include <string>


int main()
{
	std::string color;
	std::string wordEst;
	std::string bodyPartPlural;
	std::string animal;
	std::string noun;
	std::string pluralNoun;
	int aFirstNumberChosenByUser;
	int bSecondNumberChosenByUser;
	int cTheResultOfaMinusB;
	std::cout << "Welcome To My Mad Libs. \n\n";
	std::cout << "Enter your favorite color >>>" << std::endl;
	std::cin >> color;
	std::cout << "Enter a word ending in EST >>>" << std::endl;
	std::cin >> wordEst;
	std::cout << "Enter a body part pluarl >>>" << std::endl;
	std::cin >> bodyPartPlural;
	std::cout << "Enter an animal >>>" << std::endl; 
	std::cin >> animal;
	std::cout << "Enter a noun >>>" << std::endl;
	std::cin >> noun;
	std::cout << "Enter a pluarl noun >>>" << std::endl;
	std::cout << "Enter a number >>>" << std::endl;
	std::cin >> aFirstNumberChosenByUser;
	std::cout << "Enter another number >>>" << std::endl;
	std::cin >> bSecondNumberChosenByUser;

	cTheResultOfaMinusB = aFirstNumberChosenByUser - bSecondNumberChosenByUser;
	std::cout << "The " << color << "Dragon is the " << wordEst << "Dragon of all. It has" << cTheResultOfaMinusB << std::endl;
	std::cout << bodyPartPlural << "and a" << animal << "shaped like a" << noun << ". It loves to eat" << pluralNoun << ",although it will feast on nearly anything" << std::endl; 


}
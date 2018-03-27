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
	cTheResultOfaMinusB = aFirstNumberChosenByUser - bSecondNumberChosenByUser;
	std::cout << "The " << color << "Dragon is the " << wordEst << "Dragon of all. It has" << cTheResultOfaMinusB << std::endl;
	std::cout << bodyPartPlural << "and a" << animal << "shaped like a" << noun << ". It loves to eat" << pluralNoun << ",although it will feast on nearly anything" << std::endl; 


}
//Expensive Calculater
//3/27/2018
//Author: Daniel McGlasson


#include <iostream>

int main()
{
	int userInput1;
	int userInput2;
	
	
	std::cout << "Enter your first number >>>";
	std::cin >> userInput1;
	std::cout << "Enter your second number>>>";
	std::cin >> userInput2;



	std::cout << userInput1 << " + " << userInput2 << " = " << userInput1 + userInput2 << std::endl;
	std::cout << userInput1 << " - " << userInput2 << " = " << userInput1 - userInput2 << std::endl;
	std::cout << userInput1 << " x " << userInput2 << " = " << userInput1 * userInput2 << std::endl;
	std::cout << userInput1 << " / " << userInput2 << " = " << userInput1 / userInput2 << std::endl;
	std::cout << userInput1 << " % " << userInput2 << " = " << userInput1 % userInput2 << std::endl;
	
	system("Pause");
	return 0;




}
#include <iostream>
#include <string>
#include <fstream>
#include "AccountData.h"
#include "MenuNav.h"

int currentAccountID = 0;

int main()
{
	std::cout << "WELCOME TO THE BANKING SOFTWARE!\n\n";
	
	menuNav();

	system("pause");
	return 0;
}
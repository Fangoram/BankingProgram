#include "MenuNav.h"
#include "AccountDataBase.h"
//067446099039216073
extern int currentAccountID;
extern std::vector<AccountData> accounts;

void menuNav()
{
	int chosenNumber = 0;

	while (chosenNumber != 10)
	{
		std::cout << "\n////////////////////////////";
		std::cout << "\nCurrently selected account:\nID " << accounts[currentAccountID].viewID() << "\nName: " << accounts[currentAccountID].viewName() << "\n";
		std::cout << "\nPLEASE ENTER THE NUMBER NEXT TO THE DESIRED MENU OPTION\n";
		std::cout << " 1.) CREATE ACCOUNT\n 2.) VIEW ACCOUNTS\n 3.) SEARCH ACCOUNT\n 4.) VIEW ACCOUNT BALANCE\n 5.) MODIFY ACCOUNT NAME\n";
		std::cout << " 6.) WITHDRAW CHECKING\n 7.) WITHDRAW SAVINGS\n 8.) DEPOSIT CHECKING\n 9.) DEPOSIT SAVINGS\n 10.) QUIT\nMENU SELECTION: ";
		

		std::cin >> chosenNumber;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cout << "Invalid input, please try again.\n";
			std::cin >> chosenNumber;
		}

		switch (chosenNumber)
		{
		case 1: //create account
		{
			createAccount();
			break;
		}
		case 2: //view all accounts
		{
			viewAllAccounts();
			break;
		}
		case 3: //search account
		{
			searchAccount();
			break;
		}
		case 4: //view checking account
		{
			if (accounts[currentAccountID].viewID() != 0)
			{
				accounts[currentAccountID].viewAccountBalance();
			}
			else
			{
				std::cout << "\nInvalid Account";
			}
			break;
		}
		case 5: //modify account name
		{
			if (accounts[currentAccountID].viewID() != 0)
			{
				accounts[currentAccountID].modifyAccountName();
			}
			else
			{
				std::cout << "\nInvalid Account";
			}
			break;
		}
		case 6: //withdraw checking
		{
			if (accounts[currentAccountID].viewID() != 0)
			{
				accounts[currentAccountID].withdrawChecking();
			}
			else
			{
				std::cout << "\nInvalid Account";
			}
			break;
		}
		case 7: //withdraw savings
		{
			if (accounts[currentAccountID].viewID() != 0)
			{
				accounts[currentAccountID].withdrawSavings();
			}
			else
			{
				std::cout << "\nInvalid Account";
			}
			break;
		}
		case 8: //deposit checking
		{
			if (accounts[currentAccountID].viewID() != 0)
			{
				accounts[currentAccountID].depositChecking();
			}
			else
			{
				std::cout << "\nInvalid Account";
			}
			break;
		}
		case 9: //deposit savings
		{
			if (accounts[currentAccountID].viewID() != 0)
			{
				accounts[currentAccountID].depositSavings();
			}
			else
			{
				std::cout << "\nInvalid Account";
			}
			break;
		}
		case 10: //quit
		{
			std::cout << "\nThank you for using the Banking Program, Goodbye.\n";
			break;
		}
		default:
		{
			std::cout << "Unacceptable Input\n";
			break;
		}
		}
	}
}
void createAccount()
{
	std::string name;
	double checkingDeposit, savingsDeposit;
	std::cin.ignore();
	std::cout << "Enter the Client's name: ";
	std::getline (std::cin,  name);

	std::cout << "Enter the amount deposited into Checking Account: $";
	std::cin >> checkingDeposit;

	std::cout << "Enter the amount deposited into Savings Account: $";
	std::cin >> savingsDeposit;

	int newID = 0;
	for (auto x : accounts)
	{
		if (newID == x.viewID())
		{
			newID++;
		}
		else
		{
			break;
		}
	}
	AccountData newAccount(newID, name, checkingDeposit, savingsDeposit);
	accounts.push_back(newAccount);
	currentAccountID = newAccount.viewID();
}
void viewAllAccounts()
{
	for (auto x : accounts)
	{
		std::cout << "ID: " << x.viewID() << "\nAccount Name: " << x.viewName() << "\n";
	}
}
//EDITING STUFF INSIDE OF AN ACCOUNT DOES NOT ACTUALLY CHANGE THE VALUES IN THE ACCOUNTS DATABASE, JUST CHANGES THE VALUE IN CURRENTACCOUNT
void searchAccount()
{
	std::cout << "Enter the Account ID\n";
	int accountId;
	std::cin >> accountId;

	for (auto x : accounts)
	{
		if (accountId == x.viewID())
		{
			currentAccountID = x.viewID();
			std::cout << "You successfully found " << x.viewName() << "\n";
		}
	}
}
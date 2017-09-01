#include "AccountData.h"


AccountData::AccountData(int accountID, std::string name, double checkingDeposit, double savingsDeposit) 
	: id(accountID), account_Name(name), checking_account(checkingDeposit), savings_account(savingsDeposit)
{

}
int AccountData::viewID()
{
	return id;
}
std::string AccountData::viewName()
{
	return account_Name;
}
void AccountData::viewAccountBalance()
{
	std::cout << "\nBalance in Checking account: $" << checking_account;
	std::cout << "\nBalance in Savings account: $" << savings_account;
}
void AccountData::modifyAccountName()
{
	std::cin.ignore();
	std::cout << "Please enter the new name of the account holder:\n";
	std::string newName;
	std::getline(std::cin, newName);
	account_Name = newName;
}
void AccountData::withdrawChecking()
{
	std::cout << "How much money are you withdrawing?\n";
	double withdrawAmount;
	std::cin >> withdrawAmount;
	if (withdrawAmount < checking_account)
	{
		checking_account -= withdrawAmount;
		std::cout << withdrawAmount << "successfully withdrawn, $" << checking_account << "remaining in Checking account\n";
	}
	else
		std::cout << "Insufficient Funds!\n";
}
void AccountData::withdrawSavings()
{
	std::cout << "How much money are you withdrawing?\n";
	double withdrawAmount;
	std::cin >> withdrawAmount;
	if (withdrawAmount < savings_account)
	{
		savings_account -= withdrawAmount;
		std::cout << withdrawAmount << "successfully withdrawn, $" << savings_account << "remaining in Savings account\n";
	}
	else
		std::cout << "Insufficient Funds!\n";
}
void AccountData::depositChecking()
{
	std::cout << "How much money are you depositing?\n";
	double depositAmount;
	std::cin >> depositAmount;
	checking_account += depositAmount;
	std::cout << depositAmount << "successfully deposited, $" << checking_account << "total in Savings account\n";
}
void AccountData::depositSavings()
{
	std::cout << "How much money are you depositing?\n";
	double depositAmount;
	std::cin >> depositAmount;
	savings_account += depositAmount;
	std::cout << depositAmount << "successfully deposited, $" << savings_account << "total in Savings account\n";
}
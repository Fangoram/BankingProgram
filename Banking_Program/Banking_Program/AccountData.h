#ifndef _ACCOUNT_DATA_
#define _ACCOUNT_DATA_
#include <string>
#include <iostream>

//struct AccountData
//{
//	int id;
//	std::string account_Name, email_Address;
//	double checking_account, savings_account;
//};

class AccountData
{
private:
	int id;
	std::string account_Name, email_Address;
	double checking_account, savings_account;
public:
	AccountData(int accountID, std::string name, double checkingDeposit, double savingsDeposit);
	int viewID();
	std::string viewName();
	void viewAccountBalance();
	void modifyAccountName();
	void withdrawChecking();
	void withdrawSavings();
	void depositChecking();
	void depositSavings();
};
#endif
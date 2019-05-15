#include "MiniBankingCommonDecl.h"
#include "Account.h"
#include "Excep.h"


int Account::GetAccID()const { return accID; }

int Account::GetBal()const { return balance; }

String& Account::GetString() { return cusName; }

int Account::Getkind()const { return kind; }

void Account::Deposit(int money)
{
	if (money <= 0)
	{
		MinusException expn(money);
		throw expn;
	}
	balance += money;
}

void Account::Withdraw(int money)
{
	if (money <= 0)
	{
		MinusException expn(money);
		throw expn;
	}
	else if (balance < money)
	{
		WithrawException expn(money);
		throw expn;
	}
	balance -= money;
	throw balance;
	
}
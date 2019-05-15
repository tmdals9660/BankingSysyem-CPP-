#ifndef __ACCOUNTHANDLER__H_
#define __ACCOUNTHANDLER__H_

#include "Account.h"
#include "Show.h"
#include "Excep.h"
#include "NormalAccount.h"
#include "HighCreditAccount.h"
#include "AccountRange.h"

typedef Account * ACCOUNT_PTR;

class AccountHandler
{
private:
	AccountRange<ACCOUNT_PTR> acc;
	int accNum;

public:
	AccountHandler();

	void MakeAccount();

	void MakeNormalAccount();

	void MakeCreditAccount();

	void DepositMoney();

	void WithdrawMoney();

	void ShowAllAccinfo();

	bool Alreaycheck(int ID);

	int Numbercheck(int ID);

	bool MatchNumCheck(int check, char *name);

	void Out();

	void LoadFile();

	~AccountHandler()
	{
		for (int i = 0; i < accNum; i++)
			delete acc[i];
	}
};

#endif
#ifndef __CHECK__H_
#define __CHECK__H_

#include "Account.h"
#include "Show.h"
#include "String.h"

class MinusException
{
private:
	int MinusMoney;
public:
	MinusException(int money);
	void ShowExceptionReason();
};

class WithrawException
{
private:
	int withdrawMoney;
public:
	WithrawException(int money);
	void ShowExceptionReason();
};

class WithrawException2
{
private:
	int withdrawMoney2;
public:
	WithrawException2(int money);
	void ShowExceptionReason();
};

class AccountFULL
{
private:
	int NumCheck;
public:
	AccountFULL(int num);

	void ShowExceptionReason();
};


#endif // !__CHECK__H_


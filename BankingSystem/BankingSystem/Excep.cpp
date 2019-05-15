#include "MiniBankingCommonDecl.h"
#include "Excep.h"

Show show2;

MinusException::MinusException(int money) : MinusMoney(money) {}
void MinusException::ShowExceptionReason()
{
	show2.Warning();
}

WithrawException::WithrawException(int money) : withdrawMoney(money) {}
void WithrawException::ShowExceptionReason()
{
	show2.Underbal();
}

WithrawException2::WithrawException2(int money) : withdrawMoney2(money) {}
void WithrawException2::ShowExceptionReason()
{
	show2.Zerobal();
}

AccountFULL::AccountFULL(int num) : NumCheck(num) {}
void AccountFULL::ShowExceptionReason()
{
	show2.Full();
}
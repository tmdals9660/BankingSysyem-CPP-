#ifndef _ACCOUNT__H_
#define _ACCOUNT__H_

#include "String.h"


class Account
{
private:
	int accID; //°èÁÂ
	int balance; //ÀÜ¾×
	String cusName;
	int kind;

public:
	Account(int ID, int money, const char * name, int kind)
		: accID(ID), balance(money),cusName(name) ,kind(kind)
	{	}

	Account(const Account & ref)
		: accID(ref.accID), balance(ref.balance),cusName(ref.cusName), kind(ref.kind)
	{	}


	int GetAccID()const;

	int GetBal()const;

	String& GetString();

	int Getkind()const;

	virtual void GetDeposit(int money) = 0;

	virtual double GetRatio() const = 0;

	virtual double GetBonusRatio() const = 0;

	void Deposit(int money);

	void Withdraw(int money);

	~Account()
	{}
};

#endif // !_ACCOUNT__H_

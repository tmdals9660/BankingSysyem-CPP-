#ifndef _NORMALACCOUNT__H_
#define _NORMALACCOUNT__H_

#include "Account.h"

class NormalAccount : public Account
{
private:
	double Ratio;
public:
	NormalAccount(int ID, int money, const char * name, int kind, double rat)
		: Account(ID, money, name, kind), Ratio(rat) {}

	void GetDeposit(int money);

	double GetBonusRatio()const;

	double GetRatio() const;
};


#endif // !_NORMALACCOUNT__H_


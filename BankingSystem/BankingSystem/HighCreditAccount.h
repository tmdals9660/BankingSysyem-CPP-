#ifndef __HIGHCREDITACCOUNT_H_
#define __HIGHCREDITACCOUNT_H_

#include "NormalAccount.h"

class HighCreditAccount : public NormalAccount
{
private:
	double BonusRatio;
public:
	HighCreditAccount(int ID, int money, const char * name, int kind, double rat, double Br)
		: NormalAccount(ID, money, name, kind, rat), BonusRatio(Br) {}

	double GetRatio() const;

	void GetDeposit(int money);

	double GetBonusRatio() const;
};



#endif // !__HIGHCREDITACCOUNT_H_


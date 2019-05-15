#include "MiniBankingCommonDecl.h"
#include "HighCreditAccount.h"

double HighCreditAccount::GetRatio() const
{
	return NormalAccount::GetRatio() + BonusRatio;
}

void HighCreditAccount::GetDeposit(int money)
{
	Deposit((double)(money + (money * GetRatio())));
}
double HighCreditAccount::GetBonusRatio() const
{
	return BonusRatio;
}
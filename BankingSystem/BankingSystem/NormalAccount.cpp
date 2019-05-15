#include "MiniBankingCommonDecl.h"
#include "NormalAccount.h"

double NormalAccount::GetRatio() const { return Ratio; }

void NormalAccount::GetDeposit(int money)
{
	Deposit((double)(money + (money * GetRatio())));
}
double NormalAccount::GetBonusRatio() const { return 0; }

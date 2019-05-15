#ifndef __SHOW__H_
#define __SHOW__H_

#include "Account.h"
#include "AccountRange.h"

typedef Account * ACCOUNT_PTR;

class Show
{
public:
	void Menu(void);

	void Cancle(void);

	void Warning(void);

	//개좌개설
	void MakeAcc();

	void MakeAcc2();

	void NormalMakeAcc();

	void CreditMakeAcc();

	//이미 존재 계좌
	void Already();

	void CreditRatio();

	//개좌개설완료
	void SucNormalMake(AccountRange<ACCOUNT_PTR> &arr, int num);

	void SucCreditMake(AccountRange<ACCOUNT_PTR> &arr, int num);

	//계좌정보확인완료
	void AccInfo();

	//입금메뉴
	void Deposit();

	//입금완료
	void SucDep(int bal, AccountRange<ACCOUNT_PTR> &arr, int num);

	//출금메뉴
	void Withraw();

	//계좌잔액부족
	void Underbal();

	void Zerobal();

	void BasicRatio();

	void BonusRatio();

	//출금완료
	void SucWithraw(int bal, AccountRange<ACCOUNT_PTR> &arr, int num);

	//잔액조회메뉴
	void AllMenu();

	void SucAll(AccountRange<ACCOUNT_PTR> &arr, int num);

	void inname();

	void inAcc();

	void inDep();

	void inWith();

	void inbal();

	void MakeAccfail();

	void inMake();

	void inInfo();

	void print_line();

	void print_init();

	void AllInfoList(AccountRange<ACCOUNT_PTR> &arr, int checknum);

	void DataLoadFail();

	void DataLoading();

	void Full();

	void InputFailInt(int a, int b);

};

#endif // !__SHOW__H_


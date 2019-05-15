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

	//���°���
	void MakeAcc();

	void MakeAcc2();

	void NormalMakeAcc();

	void CreditMakeAcc();

	//�̹� ���� ����
	void Already();

	void CreditRatio();

	//���°����Ϸ�
	void SucNormalMake(AccountRange<ACCOUNT_PTR> &arr, int num);

	void SucCreditMake(AccountRange<ACCOUNT_PTR> &arr, int num);

	//��������Ȯ�οϷ�
	void AccInfo();

	//�Աݸ޴�
	void Deposit();

	//�ԱݿϷ�
	void SucDep(int bal, AccountRange<ACCOUNT_PTR> &arr, int num);

	//��ݸ޴�
	void Withraw();

	//�����ܾ׺���
	void Underbal();

	void Zerobal();

	void BasicRatio();

	void BonusRatio();

	//��ݿϷ�
	void SucWithraw(int bal, AccountRange<ACCOUNT_PTR> &arr, int num);

	//�ܾ���ȸ�޴�
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


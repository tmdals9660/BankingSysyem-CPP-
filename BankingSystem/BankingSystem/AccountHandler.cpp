#include "MiniBankingCommonDecl.h"
#include "AccountHandler.h"
#include "AccountRange.cpp"
#include <fstream>

using namespace std;

Show show1;
AccountHandler::AccountHandler() :accNum(0) {}

void AccountHandler::Out()
{

	ofstream outFile("AccountList.txt");
	
	outFile << accNum << endl;

	for (int i = 0; i < accNum; i++)
	{
		if (acc[i]->Getkind() == NORMAL)
		{
			outFile << acc[i]->GetAccID() << ' ' << acc[i]->GetBal() << ' ' << acc[i]->GetString() << ' '
				<< acc[i]->Getkind() << ' ' << acc[i]->GetRatio() << ' ' << "0" << endl;
		}
		else
		{
			outFile << acc[i]->GetAccID() << ' ' << acc[i]->GetBal() << ' ' << acc[i]->GetString() << ' '
				<< acc[i]->Getkind() << ' ' << acc[i]->GetRatio() << ' ' << acc[i]->GetBonusRatio() << endl;
		}
	}

	outFile.close();
}

void AccountHandler::LoadFile()
{
	ifstream inFile("AccountList.txt");

	if (!inFile.is_open())
	{
		show1.DataLoadFail();
	}
	else show1.DataLoading();

	int taccID; 
	int tbalance; 
	char tcusName[NAME_LEN];
	int tkind;
	double tRatio;
	double tBonusRatio;

	inFile >> accNum;

	for (int i = 0; i < accNum; i++)
	{
		inFile >> taccID >> tbalance >> tcusName >> tkind >> tRatio >> tBonusRatio;
		if (tkind == NORMAL) acc[i] = new NormalAccount(taccID, tbalance, tcusName, NORMAL, tRatio);
		else acc[i] = new HighCreditAccount(taccID, tbalance, tcusName, CREDIT, tRatio - tBonusRatio, tBonusRatio);
	}

	inFile.close();
}

void AccountHandler::MakeAccount()
{
	int sel;

	system("cls");

	show1.MakeAcc();

	try
	{
		if (accNum >= 100)
		{
			AccountFULL expn(accNum);
			throw expn;
		}
	}
	catch (AccountFULL &exp)
	{
		exp.ShowExceptionReason();
		return;
	}

	show1.MakeAcc2();
	cout << "메뉴 선택 : ";
	cin >> sel;

	if (!cin)
	{
		cin.clear();
		cin.ignore(INT_MAX, '\n');
	}

	switch (sel)
	{
	case NORMAL:
		MakeNormalAccount();
		break;

	case CREDIT:
		MakeCreditAccount();
		break;

	default:
		show1.InputFailInt(1, 2);
	}
}


void AccountHandler::MakeNormalAccount()
{
	int IDtmp;
	char Nametmp[NAME_LEN];
	double ratiotmp;
	double ratio;

	system("cls");
	show1.NormalMakeAcc();

	show1.inMake();
	show1.inAcc();
	cin >> IDtmp;

	if (!cin)
	{
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		show1.MakeAccfail();
		return;
	}

	show1.inMake();
	show1.inname();
	cin >> Nametmp;

	if (!Alreaycheck(IDtmp)) return;

	show1.BasicRatio();
	cin >> ratiotmp;

	ratio = (double)ratiotmp * 0.01;

	acc[accNum++] = new NormalAccount(IDtmp, 0, Nametmp, NORMAL, ratio);
	Out();

	show1.SucNormalMake(acc, accNum-1);
}

void AccountHandler::MakeCreditAccount()
{
	int IDtmp;
	char Nametmp[NAME_LEN];
	double ratiotmp;
	double ratio;
	double ratio2;
	int gradetmp;

	system("cls");
	show1.CreditMakeAcc();

	show1.inMake();
	show1.inAcc();
	cin >> IDtmp;

	if (!cin)
	{
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		show1.MakeAccfail();
		return;
	}

	show1.inMake();
	show1.inname();
	cin >> Nametmp;

	if (!Alreaycheck(IDtmp)) return;

	show1.BasicRatio();
	cin >> ratiotmp;

	ratio = (double)ratiotmp * 0.01;

	show1.CreditRatio();
	show1.BonusRatio();
	cin >> gradetmp;


	switch (gradetmp)
	{
	case 1:
		ratio2 = (double)LEVEL_A * 0.01;
		break;

	case 2:
		ratio2 = (double)LEVEL_B * 0.01;
		break;

	case 3:
		ratio2 = (double)LEVEL_C * 0.01;
		break;

	default:
		show1.MakeAccfail();
		return;
	}

	acc[accNum++] = new HighCreditAccount(IDtmp, 0, Nametmp, CREDIT, ratio, ratio2);
	Out();

	show1.SucCreditMake(acc, accNum - 1);
}

//입금

void AccountHandler::DepositMoney()
{
	system("cls");

	int IDtmp;
	char Nametmp[NAME_LEN];
	int Baltmp;

	show1.Deposit();
	show1.inDep();
	show1.inAcc();
	cin >> IDtmp;

	if (!cin)
	{
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		show1.MakeAccfail();
		return;
	}

	show1.inDep();
	show1.inname();
	cin >> Nametmp;

	int checknum = Numbercheck(IDtmp);

	if (!MatchNumCheck(checknum, Nametmp)) return;

	show1.AccInfo();
	show1.inDep();
	show1.inbal();
	cin >> Baltmp;

	try
	{
		acc[checknum]->GetDeposit(Baltmp);
	}
	catch(MinusException &expn)
	{
		expn.ShowExceptionReason();
		return;
	}
	Out();
	show1.SucDep(Baltmp, acc, checknum);
}

//출금
void AccountHandler::WithdrawMoney()
{
	system("cls");
	int IDtmp;
	int Baltmp;
	char Nametmp[NAME_LEN];

	
	show1.Withraw();
	show1.inWith();
	show1.inAcc();
	cin >> IDtmp;

	if (!cin)
	{
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		show1.MakeAccfail();
		return;
	}


	show1.inWith();
	show1.inname();
	cin >> Nametmp;

	int checknum = Numbercheck(IDtmp);
	if (!MatchNumCheck(checknum, Nametmp)) return;
	
	try
	{
		if (acc[checknum]->GetBal() == 0)
		{
			WithrawException2 expn(IDtmp);
			throw expn;
		}
	}
	catch (WithrawException2 &exp)
	{
		exp.ShowExceptionReason();
		return;
	}

	
	show1.AccInfo();
	
	
	while (1)
	{
	show1.inWith();
	show1.inbal();
	cin >> Baltmp;

	try
	{
		acc[checknum]->Withdraw(Baltmp);
	}
	catch (WithrawException &expn)
	{
		expn.ShowExceptionReason();
	}
	catch (MinusException &expn)
	{
		expn.ShowExceptionReason();
		return;
	}
	catch (int bal)
	{
		break;
	}
	}
	Out();
	show1.SucWithraw(Baltmp, acc, checknum);

}

//잔액조회
void AccountHandler::ShowAllAccinfo()
{
	system("cls");

	int IDtmp;
	char Nametmp[NAME_LEN];

	show1.AllMenu();
	show1.inInfo();
	show1.inAcc();
	cin >> IDtmp;

	if (!cin)
	{
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		show1.MakeAccfail();
		return;
	}

	char a[20];

	if (IDtmp == 9999)
	{
		show1.AllInfoList(acc, accNum);
		show1.print_line();
		show1.print_init();
		cin >> a;
		return;
	}
	show1.inInfo();
	show1.inname();
	cin >> Nametmp;



	int checknum = Numbercheck(IDtmp);
	if (!MatchNumCheck(checknum, Nametmp)) return;

	show1.SucAll(acc, checknum);

}


bool AccountHandler::Alreaycheck(int ID)
{
	for (int i = 0; i < accNum ; i++)
		if (ID == acc[i]->GetAccID())
		{
			show1.Already();
			return false;
		}

	return true;
}
int AccountHandler::Numbercheck(int ID)
{
	int check = -1;

	for (int i = 0; i < accNum; i++)
		if (ID == acc[i]->GetAccID()) check = i;

	return check;
}

bool AccountHandler::MatchNumCheck(int check, char *name)
{
	String str(name);

	if (check == (-1))
	{
		show1.Cancle();
		return false;
	}

	if (str == acc[check]->GetString())
	{
		show1.Cancle();
		return false;
	}

	return true;
}

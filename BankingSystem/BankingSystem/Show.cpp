#include "MiniBankingCommonDecl.h"
#include "Show.h"
#include "AccountRange.h"
#include "AccountHandler.h"

void Show::Cancle()
{
	cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	cout << "¦¢             Á¸ÀçÇÏÁö ¾Ê´Â °èÁÂ¹øÈ£ ÀÌ°Å³ª,           ¦¢" << endl;
	cout << "¦¢ ÀÔ·ÂÇÏ½Å °èÁÂÀÇ ¼ºÇÔ°ú °èÁÂ¹øÈ£°¡ ÀÏÄ¡ÇÏÁö ¾Ê½À´Ï´Ù. ¦¢" << endl;
	cout << "¦¢                ÃÊ±âÈ­¸éÀ¸·Î µ¹¾Æ°©´Ï´Ù.              ¦¢" << endl;
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
	Sleep(SLEEP::CANCLE);
}

void Show::Warning()
{
	int i = 0;
	while (i < 4)
	{
		system("cls");
		cout << "\n\n\n\n\n\n" << endl;
		cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
		cout << "¦¢          ºñ Á¤»óÀûÀÎ ±Ý¾×ÀÌ ÀÔ·ÂµÇ¾ú½À´Ï´Ù.          ¦¢" << endl;
		cout << "¦¢                   °Å·¡¸¦ Áß´ÜÇÕ´Ï´Ù.                 ¦¢" << endl;
		cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
		Sleep(SLEEP::WARNING);
		system("cls");
		Sleep(SLEEP::WARNING);
		++i;
	}
}

void Show::Menu()
{
	system("cls");
	cout << "¦£¦¡¦¡¦¡¦¡ M E N U¦¡¦¡¦¡¦¡¦¤" << endl;
	cout << "¦¢  1. °èÁÂ°³¼³           ¦¢" << endl;
	cout << "¦¢  2. ÀÔ±Ý               ¦¢" << endl;
	cout << "¦¢  3. Ãâ±Ý               ¦¢" << endl;
	cout << "¦¢  4. ÀüÃ¼Ãâ·Â           ¦¢" << endl;
	cout << "¦¢  5. Á¾·á               ¦¢" << endl;
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
}
void Show::MakeAcc()
{
	cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	cout << "¦¢           °èÁÂ °³¼³          ¦¢" << endl;
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
}

void Show::MakeAcc2()
{
	cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	cout << "¦¢    1. º¸Åë ¿¹±Ý °èÁÂ°³¼³     ¦¢" << endl;
	cout << "¦¢    2. ½Å¿ë ½Å·Ú °èÁÂ°³¼³     ¦¢" << endl;
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
}

void Show::BasicRatio()
{
	print_line();
	cout << ">>>±âº» ºñÀ²À» ÀÔ·ÂÇØ ÁÖ¼¼¿ä. : ";
}

void Show::BonusRatio()
{
	cout << ">>>Ãß°¡ ºñÀ²À» ÀÔ·ÂÇØ ÁÖ¼¼¿ä. : ";
}

void Show::CreditRatio()
{
	cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	cout << "¦¢    1. LEVEL_A (7%)     ¦¢" << endl;
	cout << "¦¢    2. LEVEL_B (4%)     ¦¢" << endl;
	cout << "¦¢    3. LEVEL_C (2%)     ¦¢" << endl;
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
}
void Show::NormalMakeAcc()
{
	cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	cout << "¦¢     º¸Åë °èÁÂ °³¼³     ¦¢" << endl;
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
}

void Show::CreditMakeAcc()
{
	cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	cout << "¦¢     ½Å¿ë °èÁÂ °³¼³     ¦¢" << endl;
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
}

//ÀÌ¹Ì Á¸Àç °èÁÂ
void Show::Already()
{
	cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	cout << "¦¢ ÀÌ¹Ì Á¸ÀçÇÏ´Â °èÁÂ¹øÈ£ ÀÔ´Ï´Ù. °³¼³À» Á¾·áÇÕ´Ï´Ù.¦¢" << endl;
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
	Sleep(SLEEP::WATING);
}

//°³ÁÂ°³¼³¿Ï·á
void Show::SucNormalMake(AccountRange<ACCOUNT_PTR> &arr, int num)
{
	cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	cout << "¦¢    °èÁÂ °³¼³ÀÌ ¿Ï·áµÇ¾ú½À´Ï´Ù.   ¦¢" << endl;
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
	cout << " °èÁÂ¹øÈ£ : " << arr[num]->GetAccID() << "    ÀÌ¸§ : " << arr[num]->GetString();
	cout << "    ÀÌÀ² : " << arr[num]->GetRatio() * 100 << "%" << endl;
	Sleep(SLEEP::WATING);
}

void Show::SucCreditMake(AccountRange<ACCOUNT_PTR> &arr, int num)
{
	cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	cout << "¦¢    °èÁÂ °³¼³ÀÌ ¿Ï·áµÇ¾ú½À´Ï´Ù.   ¦¢" << endl;
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
	cout << " °èÁÂ¹øÈ£ : " << arr[num]->GetAccID() << "    ÀÌ¸§ : " << arr[num]->GetString() << endl;
	cout << " ±âº»ÀÌÀ² + Ãß°¡ÀÌÀ²: (" << (arr[num]->GetRatio() - arr[num]->GetBonusRatio()) * 100
		<< " + " << arr[num]->GetBonusRatio() * 100 << " = " << arr[num]->GetRatio() * 100 << "%)" << endl;
	Sleep(SLEEP::WATING);
}


//°èÁÂÁ¤º¸È®ÀÎ¿Ï·á
void Show::AccInfo()
{
	cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	cout << "¦¢°èÁÂÁ¤º¸°¡ È®ÀÎµÇ¾ú½À´Ï´Ù.¦¢" << endl;
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
}

//ÀÔ±Ý¸Þ´º
void Show::Deposit()
{
	cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	cout << "¦¢         ÀÔ   ±Ý        ¦¢" << endl;
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
}

//ÀÔ±Ý¿Ï·á
void Show::SucDep(int bal, AccountRange<ACCOUNT_PTR> &arr, int num)
{
	cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	cout << "¦¢   ÀÔ±Ý ¿Ï·áµÇ¾ú½À´Ï´Ù. ¦¢" << endl;
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
	cout << "ÀÔ±Ý¾× : " << bal << ", ÀÌÀÚ : " << (double)arr[num]->GetRatio()*bal
		<< ", ÇöÀç ÀÜ¾× : " << arr[num]->GetBal() << endl;
	Sleep(SLEEP::WATING);
}

//Ãâ±Ý¸Þ´º
void Show::Withraw()
{
	cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	cout << "¦¢         Ãâ   ±Ý        ¦¢" << endl;
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
}

//°èÁÂÀÜ¾×ºÎÁ·
void Show::Underbal()
{
	cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	cout << "¦¢   °èÁÂ¿¡ ¿äÃ»ÇÏ½Å ¸¸Å­ÀÇ ÀÜ¾×ÀÌ ¾ø½À´Ï´Ù.  ¦¢" << endl;
	cout << "¦¢           ±Ý¾×À» ´Ù½Ã ÀÔ·ÂÇØÁÖ¼¼¿ä.        ¦¢ " << endl;
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
	Sleep(SLEEP::WATING);
	system("cls");
	Withraw();
}

void Show::Zerobal()
{
	cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	cout << "¦¢       °èÁÂ¿¡ ÀÜ°í°¡ ¾ø½À´Ï´Ù.      ¦¢" << endl;
	cout << "¦¢          Ãâ±ÝÀ» Á¾·áÇÕ´Ï´Ù.        ¦¢ " << endl;
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
	Sleep(SLEEP::WATING);
}

//Ãâ±Ý¿Ï·á
void Show::SucWithraw(int bal, AccountRange<ACCOUNT_PTR> &arr, int num)
{
	cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	cout << "¦¢   Ãâ±Ý ¿Ï·áµÇ¾ú½À´Ï´Ù. ¦¢" << endl;
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
	cout << "Ãâ±Ý¾× : " << bal << ", ÇöÀç ÀÜ¾× : " << arr[num]->GetBal() << endl;
	Sleep(SLEEP::WATING);
}
void Show::AllMenu()
{
	cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	cout << "¦¢       ÀÜ ¾× Á¶ È¸      ¦¢            >> 9999 ÀÔ·Â½Ã ÀüÃ¼Á¶È¸" << endl;
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥"<< endl;
}

void Show::SucAll(AccountRange<ACCOUNT_PTR> &arr, int num)
{
	cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	cout << "¦¢   È®ÀÎ ¿Ï·áµÇ¾ú½À´Ï´Ù. ¦¢" << endl;
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
	cout << "°èÁÂ ÀÜ¾× : " << arr[num]->GetBal() << endl;
	Sleep(SLEEP::WATING);
}


void Show::inname()
{
	cout << "ÇÏ½Ç °èÁÂÀÇ ¼ºÇÔÀ» ÀÔ·ÂÇØ ÁÖ¼¼¿ä : ";
}

void Show::inAcc()
{
	cout << "ÇÏ½Ç °èÁÂ¸¦ ÀÔ·ÂÇØ ÁÖ¼¼¿ä : ";
}

void Show::inDep()
{
	cout << ">>>ÀÔ±Ý";
}

void Show::inWith()
{
	cout << ">>>Ãâ±Ý";
}

void Show::inMake()
{
	cout << ">>>°³¼³";
}

void Show::inInfo()
{
	cout << ">>>Á¶È¸";
}
void Show::inbal()
{
	cout << "¾×À» ÀÔ·ÂÇØÁÖ¼¼¿ä : ";
}
void Show::print_line()
{
	cout << "¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡" << endl;
}

void Show::print_init()
{
	cout << "ÃÊ±âÈ­¸é >> ¾Æ¹«Å°³ª ´©¸£¼¼¿ä...." << endl;
}

void Show::AllInfoList(AccountRange<ACCOUNT_PTR> &arr, int checknum)
{
	char Leveltmp[8];

	for (int i = 0; i < checknum; i++)
	{
		print_line();
		cout << "°è ÁÂ ¹ø È£ : " << arr[i]->GetAccID() << endl;
		cout << "°è  ÁÂ   ¸í : "<< arr[i]->GetString() << endl;
		cout << "ÀÜ       ¾× : " << arr[i]->GetBal() << endl;
		cout << "ÀÌ       À² : " << arr[i]->GetRatio() * 100 << "%     ";
		if (arr[i]->Getkind() == 1)
		{

			cout << "\n°è ÁÂ Á¾ ·ù : º¸Åë ¿¹±Ý °èÁÂ" << endl;
		}
		else
		{
			if ((int)(arr[i]->GetBonusRatio() * 100) == LEVEL_A) strcpy(Leveltmp, "LEVEL_A");
			else if ((int)(arr[i]->GetBonusRatio() * 100) == LEVEL_B) strcpy(Leveltmp, "LEVEL_B");
			else if ((int)(arr[i]->GetBonusRatio() * 100) == LEVEL_C) strcpy(Leveltmp, "LEVEL_C");

			cout << "(±â º» : " << (arr[i]->GetRatio() - arr[i]->GetBonusRatio()) * 100 << "%";
			cout << ", Ãß °¡ : " << arr[i]->GetBonusRatio() * 100 << "%)" << endl;
			cout << "½Å ¿ë µî ±Þ : " << Leveltmp << endl;
			cout << "°è ÁÂ Á¾ ·ù : ½Å¿ë ½Å·Ú °èÁÂ" << endl;
		}
	}
}

void Show::MakeAccfail()
{
	cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	cout << "¦¢     ¼ýÀÚ¸¸ ÀÔ·Â °¡´É ÇÕ´Ï´Ù    ¦¢" << endl;
	cout << "¦¢     ÃÊ±âÈ­¸éÀ¸·Î µ¹¾Æ°©´Ï´Ù.   ¦¢" << endl;
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
	Sleep(SLEEP::WATING);
}

void Show::DataLoadFail()
{
	cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	cout << "¦¢    ±â µî·ÏµÈ µ¥ÀÌÅÍ°¡ ¾ø½À´Ï´Ù.  ¦¢" << endl;
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
	Sleep(SLEEP::WATING);
}

void Show::DataLoading()
{
	cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	cout << "¦¢    ±â µî·ÏµÈ µ¥ÀÌÅÍ ºÒ·¯¿À´ÂÁß....   ¦¢" << endl;
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
	Sleep(SLEEP::WATING);
}

void Show::Full()
{
	cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	cout << "¦¢     ´õ ÀÌ»óÀÇ °èÁÂ °ø°£ÀÌ ¾ø½À´Ï´Ù.    ¦¢" << endl;
	cout << "¦¢         °ü¸®ÀÚ¿¡°Ô ¹®ÀÇÇØ ÁÖ¼¼¿ä.      ¦¢" << endl;
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
	Sleep(SLEEP::WATING);
}

void Show::InputFailInt(int a, int b)
{
	cout << "¦£¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¤" << endl;
	cout << "¦¢             Àß¸øµÈ °ªÀ» ÀÔ·ÂÇÏ¼Ì½À´Ï´Ù.          ¦¢"<< endl;
	cout << "¦¢                 ( "<< a<<" ~ " << b << "¸¸ ÀÔ·Â°¡´É)              ¦¢" << endl;
	cout << "¦¦¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¡¦¥" << endl;
	Sleep(SLEEP::WATING);
}


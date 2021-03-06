#include "MiniBankingCommonDecl.h"
#include "Show.h"
#include "AccountRange.h"
#include "AccountHandler.h"

void Show::Cancle()
{
	cout << "忙式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
	cout << "弛             襄營ж雖 彊朝 啗謝廓�� 檜剪釭,           弛" << endl;
	cout << "弛 殮溘ж褐 啗謝曖 撩л婁 啗謝廓�ㄟ� 橾纂ж雖 彊蝗棲棻. 弛" << endl;
	cout << "弛                蟾晦�飛橉虞� 給嬴骨棲棻.              弛" << endl;
	cout << "戌式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
	Sleep(SLEEP::CANCLE);
}

void Show::Warning()
{
	int i = 0;
	while (i < 4)
	{
		system("cls");
		cout << "\n\n\n\n\n\n" << endl;
		cout << "忙式式式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
		cout << "弛          綠 薑鼻瞳檣 旎擋檜 殮溘腎歷蝗棲棻.          弛" << endl;
		cout << "弛                   剪楚蒂 醞欽м棲棻.                 弛" << endl;
		cout << "戌式式式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
		Sleep(SLEEP::WARNING);
		system("cls");
		Sleep(SLEEP::WARNING);
		++i;
	}
}

void Show::Menu()
{
	system("cls");
	cout << "忙式式式式 M E N U式式式式忖" << endl;
	cout << "弛  1. 啗謝偃撲           弛" << endl;
	cout << "弛  2. 殮旎               弛" << endl;
	cout << "弛  3. 轎旎               弛" << endl;
	cout << "弛  4. 瞪羹轎溘           弛" << endl;
	cout << "弛  5. 謙猿               弛" << endl;
	cout << "戌式式式式式式式式式式式式戎" << endl;
}
void Show::MakeAcc()
{
	cout << "忙式式式式式式式式式式式式式式式忖" << endl;
	cout << "弛           啗謝 偃撲          弛" << endl;
	cout << "戌式式式式式式式式式式式式式式式戎" << endl;
}

void Show::MakeAcc2()
{
	cout << "忙式式式式式式式式式式式式式式式忖" << endl;
	cout << "弛    1. 爾鱔 蕨旎 啗謝偃撲     弛" << endl;
	cout << "弛    2. 褐辨 褐煆 啗謝偃撲     弛" << endl;
	cout << "戌式式式式式式式式式式式式式式式戎" << endl;
}

void Show::BasicRatio()
{
	print_line();
	cout << ">>>晦獄 綠徽擊 殮溘п 輿撮蹂. : ";
}

void Show::BonusRatio()
{
	cout << ">>>蹺陛 綠徽擊 殮溘п 輿撮蹂. : ";
}

void Show::CreditRatio()
{
	cout << "忙式式式式式式式式式式式式忖" << endl;
	cout << "弛    1. LEVEL_A (7%)     弛" << endl;
	cout << "弛    2. LEVEL_B (4%)     弛" << endl;
	cout << "弛    3. LEVEL_C (2%)     弛" << endl;
	cout << "戌式式式式式式式式式式式式戎" << endl;
}
void Show::NormalMakeAcc()
{
	cout << "忙式式式式式式式式式式式式忖" << endl;
	cout << "弛     爾鱔 啗謝 偃撲     弛" << endl;
	cout << "戌式式式式式式式式式式式式戎" << endl;
}

void Show::CreditMakeAcc()
{
	cout << "忙式式式式式式式式式式式式忖" << endl;
	cout << "弛     褐辨 啗謝 偃撲     弛" << endl;
	cout << "戌式式式式式式式式式式式式戎" << endl;
}

//檜嘐 襄營 啗謝
void Show::Already()
{
	cout << "忙式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
	cout << "弛 檜嘐 襄營ж朝 啗謝廓�� 殮棲棻. 偃撲擊 謙猿м棲棻.弛" << endl;
	cout << "戌式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
	Sleep(SLEEP::WATING);
}

//偃謝偃撲諫猿
void Show::SucNormalMake(AccountRange<ACCOUNT_PTR> &arr, int num)
{
	cout << "忙式式式式式式式式式式式式式式式式式忖" << endl;
	cout << "弛    啗謝 偃撲檜 諫猿腎歷蝗棲棻.   弛" << endl;
	cout << "戌式式式式式式式式式式式式式式式式式戎" << endl;
	cout << " 啗謝廓�� : " << arr[num]->GetAccID() << "    檜葷 : " << arr[num]->GetString();
	cout << "    檜徽 : " << arr[num]->GetRatio() * 100 << "%" << endl;
	Sleep(SLEEP::WATING);
}

void Show::SucCreditMake(AccountRange<ACCOUNT_PTR> &arr, int num)
{
	cout << "忙式式式式式式式式式式式式式式式式式忖" << endl;
	cout << "弛    啗謝 偃撲檜 諫猿腎歷蝗棲棻.   弛" << endl;
	cout << "戌式式式式式式式式式式式式式式式式式戎" << endl;
	cout << " 啗謝廓�� : " << arr[num]->GetAccID() << "    檜葷 : " << arr[num]->GetString() << endl;
	cout << " 晦獄檜徽 + 蹺陛檜徽: (" << (arr[num]->GetRatio() - arr[num]->GetBonusRatio()) * 100
		<< " + " << arr[num]->GetBonusRatio() * 100 << " = " << arr[num]->GetRatio() * 100 << "%)" << endl;
	Sleep(SLEEP::WATING);
}


//啗謝薑爾�挫怷牁�
void Show::AccInfo()
{
	cout << "忙式式式式式式式式式式式式式忖" << endl;
	cout << "弛啗謝薑爾陛 �挫庰Ц�蝗棲棻.弛" << endl;
	cout << "戌式式式式式式式式式式式式式戎" << endl;
}

//殮旎詭景
void Show::Deposit()
{
	cout << "忙式式式式式式式式式式式式忖" << endl;
	cout << "弛         殮   旎        弛" << endl;
	cout << "戌式式式式式式式式式式式式戎" << endl;
}

//殮旎諫猿
void Show::SucDep(int bal, AccountRange<ACCOUNT_PTR> &arr, int num)
{
	cout << "忙式式式式式式式式式式式式忖" << endl;
	cout << "弛   殮旎 諫猿腎歷蝗棲棻. 弛" << endl;
	cout << "戌式式式式式式式式式式式式戎" << endl;
	cout << "殮旎擋 : " << bal << ", 檜濠 : " << (double)arr[num]->GetRatio()*bal
		<< ", ⑷營 濤擋 : " << arr[num]->GetBal() << endl;
	Sleep(SLEEP::WATING);
}

//轎旎詭景
void Show::Withraw()
{
	cout << "忙式式式式式式式式式式式式忖" << endl;
	cout << "弛         轎   旎        弛" << endl;
	cout << "戌式式式式式式式式式式式式戎" << endl;
}

//啗謝濤擋睡褶
void Show::Underbal()
{
	cout << "忙式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
	cout << "弛   啗謝縑 蹂羶ж褐 虜躑曖 濤擋檜 橈蝗棲棻.  弛" << endl;
	cout << "弛           旎擋擊 棻衛 殮溘п輿撮蹂.        弛 " << endl;
	cout << "戌式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
	Sleep(SLEEP::WATING);
	system("cls");
	Withraw();
}

void Show::Zerobal()
{
	cout << "忙式式式式式式式式式式式式式式式式式式忖" << endl;
	cout << "弛       啗謝縑 濤堅陛 橈蝗棲棻.      弛" << endl;
	cout << "弛          轎旎擊 謙猿м棲棻.        弛 " << endl;
	cout << "戌式式式式式式式式式式式式式式式式式式戎" << endl;
	Sleep(SLEEP::WATING);
}

//轎旎諫猿
void Show::SucWithraw(int bal, AccountRange<ACCOUNT_PTR> &arr, int num)
{
	cout << "忙式式式式式式式式式式式式忖" << endl;
	cout << "弛   轎旎 諫猿腎歷蝗棲棻. 弛" << endl;
	cout << "戌式式式式式式式式式式式式戎" << endl;
	cout << "轎旎擋 : " << bal << ", ⑷營 濤擋 : " << arr[num]->GetBal() << endl;
	Sleep(SLEEP::WATING);
}
void Show::AllMenu()
{
	cout << "忙式式式式式式式式式式式式忖" << endl;
	cout << "弛       濤 擋 褻 ��      弛            >> 9999 殮溘衛 瞪羹褻��" << endl;
	cout << "戌式式式式式式式式式式式式戎"<< endl;
}

void Show::SucAll(AccountRange<ACCOUNT_PTR> &arr, int num)
{
	cout << "忙式式式式式式式式式式式式忖" << endl;
	cout << "弛   �挫� 諫猿腎歷蝗棲棻. 弛" << endl;
	cout << "戌式式式式式式式式式式式式戎" << endl;
	cout << "啗謝 濤擋 : " << arr[num]->GetBal() << endl;
	Sleep(SLEEP::WATING);
}


void Show::inname()
{
	cout << "ж褒 啗謝曖 撩л擊 殮溘п 輿撮蹂 : ";
}

void Show::inAcc()
{
	cout << "ж褒 啗謝蒂 殮溘п 輿撮蹂 : ";
}

void Show::inDep()
{
	cout << ">>>殮旎";
}

void Show::inWith()
{
	cout << ">>>轎旎";
}

void Show::inMake()
{
	cout << ">>>偃撲";
}

void Show::inInfo()
{
	cout << ">>>褻��";
}
void Show::inbal()
{
	cout << "擋擊 殮溘п輿撮蹂 : ";
}
void Show::print_line()
{
	cout << "式式式式式式式式式式式式式式式式式式式式式" << endl;
}

void Show::print_init()
{
	cout << "蟾晦�飛� >> 嬴鼠酈釭 援腦撮蹂...." << endl;
}

void Show::AllInfoList(AccountRange<ACCOUNT_PTR> &arr, int checknum)
{
	char Leveltmp[8];

	for (int i = 0; i < checknum; i++)
	{
		print_line();
		cout << "啗 謝 廓 �� : " << arr[i]->GetAccID() << endl;
		cout << "啗  謝   貲 : "<< arr[i]->GetString() << endl;
		cout << "濤       擋 : " << arr[i]->GetBal() << endl;
		cout << "檜       徽 : " << arr[i]->GetRatio() * 100 << "%     ";
		if (arr[i]->Getkind() == 1)
		{

			cout << "\n啗 謝 謙 盟 : 爾鱔 蕨旎 啗謝" << endl;
		}
		else
		{
			if ((int)(arr[i]->GetBonusRatio() * 100) == LEVEL_A) strcpy(Leveltmp, "LEVEL_A");
			else if ((int)(arr[i]->GetBonusRatio() * 100) == LEVEL_B) strcpy(Leveltmp, "LEVEL_B");
			else if ((int)(arr[i]->GetBonusRatio() * 100) == LEVEL_C) strcpy(Leveltmp, "LEVEL_C");

			cout << "(晦 獄 : " << (arr[i]->GetRatio() - arr[i]->GetBonusRatio()) * 100 << "%";
			cout << ", 蹺 陛 : " << arr[i]->GetBonusRatio() * 100 << "%)" << endl;
			cout << "褐 辨 蛔 晝 : " << Leveltmp << endl;
			cout << "啗 謝 謙 盟 : 褐辨 褐煆 啗謝" << endl;
		}
	}
}

void Show::MakeAccfail()
{
	cout << "忙式式式式式式式式式式式式式式式式忖" << endl;
	cout << "弛     璋濠虜 殮溘 陛棟 м棲棻    弛" << endl;
	cout << "弛     蟾晦�飛橉虞� 給嬴骨棲棻.   弛" << endl;
	cout << "戌式式式式式式式式式式式式式式式式戎" << endl;
	Sleep(SLEEP::WATING);
}

void Show::DataLoadFail()
{
	cout << "忙式式式式式式式式式式式式式式式式式忖" << endl;
	cout << "弛    晦 蛔煙脹 等檜攪陛 橈蝗棲棻.  弛" << endl;
	cout << "戌式式式式式式式式式式式式式式式式式戎" << endl;
	Sleep(SLEEP::WATING);
}

void Show::DataLoading()
{
	cout << "忙式式式式式式式式式式式式式式式式式式式忖" << endl;
	cout << "弛    晦 蛔煙脹 等檜攪 碳楝螃朝醞....   弛" << endl;
	cout << "戌式式式式式式式式式式式式式式式式式式式戎" << endl;
	Sleep(SLEEP::WATING);
}

void Show::Full()
{
	cout << "忙式式式式式式式式式式式式式式式式式式式式忖" << endl;
	cout << "弛     渦 檜鼻曖 啗謝 奢除檜 橈蝗棲棻.    弛" << endl;
	cout << "弛         婦葬濠縑啪 僥曖п 輿撮蹂.      弛" << endl;
	cout << "戌式式式式式式式式式式式式式式式式式式式式戎" << endl;
	Sleep(SLEEP::WATING);
}

void Show::InputFailInt(int a, int b)
{
	cout << "忙式式式式式式式式式式式式式式式式式式式式式式式式式忖" << endl;
	cout << "弛             澀跤脹 高擊 殮溘ж樟蝗棲棻.          弛"<< endl;
	cout << "弛                 ( "<< a<<" ~ " << b << "虜 殮溘陛棟)              弛" << endl;
	cout << "戌式式式式式式式式式式式式式式式式式式式式式式式式式戎" << endl;
	Sleep(SLEEP::WATING);
}


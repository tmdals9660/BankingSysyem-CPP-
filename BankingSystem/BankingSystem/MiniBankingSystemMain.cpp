#include "MiniBankingCommonDecl.h"
#include "Show.h"
#include "AccountHandler.h"
#include "AccountRange.cpp"

Show show;
AccountHandler AH;

int main(void)
{
	int choice;
	AH.LoadFile();

	while (1)
	{
		show.Menu();

		cout << "메뉴 선택 : ";
		cin >> choice;

		if (!cin)
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
		}

		switch (choice)
		{

		case MAKE:
			AH.MakeAccount();
			break;

		case DEPOSIT:
			AH.DepositMoney();
			break;

		case WITHDRAW:
			AH.WithdrawMoney();
			break;

		case INQUIRE:
			AH.ShowAllAccinfo();
			break;

		case EXIT:
			AH.Out();
			return 0;

		default:
			show.InputFailInt(1, 5);
		}
	}

	return 0;
}
#include "MiniBankingCommonDecl.h"
#include "Show.h"
#include "AccountRange.h"
#include "AccountHandler.h"

void Show::Cancle()
{
	cout << "����������������������������������������������������������" << endl;
	cout << "��             �������� �ʴ� ���¹�ȣ �̰ų�,           ��" << endl;
	cout << "�� �Է��Ͻ� ������ ���԰� ���¹�ȣ�� ��ġ���� �ʽ��ϴ�. ��" << endl;
	cout << "��                �ʱ�ȭ������ ���ư��ϴ�.              ��" << endl;
	cout << "����������������������������������������������������������" << endl;
	Sleep(SLEEP::CANCLE);
}

void Show::Warning()
{
	int i = 0;
	while (i < 4)
	{
		system("cls");
		cout << "\n\n\n\n\n\n" << endl;
		cout << "����������������������������������������������������������" << endl;
		cout << "��          �� �������� �ݾ��� �ԷµǾ����ϴ�.          ��" << endl;
		cout << "��                   �ŷ��� �ߴ��մϴ�.                 ��" << endl;
		cout << "����������������������������������������������������������" << endl;
		Sleep(SLEEP::WARNING);
		system("cls");
		Sleep(SLEEP::WARNING);
		++i;
	}
}

void Show::Menu()
{
	system("cls");
	cout << "���������� M E N U����������" << endl;
	cout << "��  1. ���°���           ��" << endl;
	cout << "��  2. �Ա�               ��" << endl;
	cout << "��  3. ���               ��" << endl;
	cout << "��  4. ��ü���           ��" << endl;
	cout << "��  5. ����               ��" << endl;
	cout << "����������������������������" << endl;
}
void Show::MakeAcc()
{
	cout << "����������������������������������" << endl;
	cout << "��           ���� ����          ��" << endl;
	cout << "����������������������������������" << endl;
}

void Show::MakeAcc2()
{
	cout << "����������������������������������" << endl;
	cout << "��    1. ���� ���� ���°���     ��" << endl;
	cout << "��    2. �ſ� �ŷ� ���°���     ��" << endl;
	cout << "����������������������������������" << endl;
}

void Show::BasicRatio()
{
	print_line();
	cout << ">>>�⺻ ������ �Է��� �ּ���. : ";
}

void Show::BonusRatio()
{
	cout << ">>>�߰� ������ �Է��� �ּ���. : ";
}

void Show::CreditRatio()
{
	cout << "����������������������������" << endl;
	cout << "��    1. LEVEL_A (7%)     ��" << endl;
	cout << "��    2. LEVEL_B (4%)     ��" << endl;
	cout << "��    3. LEVEL_C (2%)     ��" << endl;
	cout << "����������������������������" << endl;
}
void Show::NormalMakeAcc()
{
	cout << "����������������������������" << endl;
	cout << "��     ���� ���� ����     ��" << endl;
	cout << "����������������������������" << endl;
}

void Show::CreditMakeAcc()
{
	cout << "����������������������������" << endl;
	cout << "��     �ſ� ���� ����     ��" << endl;
	cout << "����������������������������" << endl;
}

//�̹� ���� ����
void Show::Already()
{
	cout << "������������������������������������������������������" << endl;
	cout << "�� �̹� �����ϴ� ���¹�ȣ �Դϴ�. ������ �����մϴ�.��" << endl;
	cout << "������������������������������������������������������" << endl;
	Sleep(SLEEP::WATING);
}

//���°����Ϸ�
void Show::SucNormalMake(AccountRange<ACCOUNT_PTR> &arr, int num)
{
	cout << "��������������������������������������" << endl;
	cout << "��    ���� ������ �Ϸ�Ǿ����ϴ�.   ��" << endl;
	cout << "��������������������������������������" << endl;
	cout << " ���¹�ȣ : " << arr[num]->GetAccID() << "    �̸� : " << arr[num]->GetString();
	cout << "    ���� : " << arr[num]->GetRatio() * 100 << "%" << endl;
	Sleep(SLEEP::WATING);
}

void Show::SucCreditMake(AccountRange<ACCOUNT_PTR> &arr, int num)
{
	cout << "��������������������������������������" << endl;
	cout << "��    ���� ������ �Ϸ�Ǿ����ϴ�.   ��" << endl;
	cout << "��������������������������������������" << endl;
	cout << " ���¹�ȣ : " << arr[num]->GetAccID() << "    �̸� : " << arr[num]->GetString() << endl;
	cout << " �⺻���� + �߰�����: (" << (arr[num]->GetRatio() - arr[num]->GetBonusRatio()) * 100
		<< " + " << arr[num]->GetBonusRatio() * 100 << " = " << arr[num]->GetRatio() * 100 << "%)" << endl;
	Sleep(SLEEP::WATING);
}


//��������Ȯ�οϷ�
void Show::AccInfo()
{
	cout << "������������������������������" << endl;
	cout << "������������ Ȯ�εǾ����ϴ�.��" << endl;
	cout << "������������������������������" << endl;
}

//�Աݸ޴�
void Show::Deposit()
{
	cout << "����������������������������" << endl;
	cout << "��         ��   ��        ��" << endl;
	cout << "����������������������������" << endl;
}

//�ԱݿϷ�
void Show::SucDep(int bal, AccountRange<ACCOUNT_PTR> &arr, int num)
{
	cout << "����������������������������" << endl;
	cout << "��   �Ա� �Ϸ�Ǿ����ϴ�. ��" << endl;
	cout << "����������������������������" << endl;
	cout << "�Աݾ� : " << bal << ", ���� : " << (double)arr[num]->GetRatio()*bal
		<< ", ���� �ܾ� : " << arr[num]->GetBal() << endl;
	Sleep(SLEEP::WATING);
}

//��ݸ޴�
void Show::Withraw()
{
	cout << "����������������������������" << endl;
	cout << "��         ��   ��        ��" << endl;
	cout << "����������������������������" << endl;
}

//�����ܾ׺���
void Show::Underbal()
{
	cout << "������������������������������������������������" << endl;
	cout << "��   ���¿� ��û�Ͻ� ��ŭ�� �ܾ��� �����ϴ�.  ��" << endl;
	cout << "��           �ݾ��� �ٽ� �Է����ּ���.        �� " << endl;
	cout << "������������������������������������������������" << endl;
	Sleep(SLEEP::WATING);
	system("cls");
	Withraw();
}

void Show::Zerobal()
{
	cout << "����������������������������������������" << endl;
	cout << "��       ���¿� �ܰ� �����ϴ�.      ��" << endl;
	cout << "��          ����� �����մϴ�.        �� " << endl;
	cout << "����������������������������������������" << endl;
	Sleep(SLEEP::WATING);
}

//��ݿϷ�
void Show::SucWithraw(int bal, AccountRange<ACCOUNT_PTR> &arr, int num)
{
	cout << "����������������������������" << endl;
	cout << "��   ��� �Ϸ�Ǿ����ϴ�. ��" << endl;
	cout << "����������������������������" << endl;
	cout << "��ݾ� : " << bal << ", ���� �ܾ� : " << arr[num]->GetBal() << endl;
	Sleep(SLEEP::WATING);
}
void Show::AllMenu()
{
	cout << "����������������������������" << endl;
	cout << "��       �� �� �� ȸ      ��            >> 9999 �Է½� ��ü��ȸ" << endl;
	cout << "����������������������������"<< endl;
}

void Show::SucAll(AccountRange<ACCOUNT_PTR> &arr, int num)
{
	cout << "����������������������������" << endl;
	cout << "��   Ȯ�� �Ϸ�Ǿ����ϴ�. ��" << endl;
	cout << "����������������������������" << endl;
	cout << "���� �ܾ� : " << arr[num]->GetBal() << endl;
	Sleep(SLEEP::WATING);
}


void Show::inname()
{
	cout << "�Ͻ� ������ ������ �Է��� �ּ��� : ";
}

void Show::inAcc()
{
	cout << "�Ͻ� ���¸� �Է��� �ּ��� : ";
}

void Show::inDep()
{
	cout << ">>>�Ա�";
}

void Show::inWith()
{
	cout << ">>>���";
}

void Show::inMake()
{
	cout << ">>>����";
}

void Show::inInfo()
{
	cout << ">>>��ȸ";
}
void Show::inbal()
{
	cout << "���� �Է����ּ��� : ";
}
void Show::print_line()
{
	cout << "������������������������������������������" << endl;
}

void Show::print_init()
{
	cout << "�ʱ�ȭ�� >> �ƹ�Ű�� ��������...." << endl;
}

void Show::AllInfoList(AccountRange<ACCOUNT_PTR> &arr, int checknum)
{
	char Leveltmp[8];

	for (int i = 0; i < checknum; i++)
	{
		print_line();
		cout << "�� �� �� ȣ : " << arr[i]->GetAccID() << endl;
		cout << "��  ��   �� : "<< arr[i]->GetString() << endl;
		cout << "��       �� : " << arr[i]->GetBal() << endl;
		cout << "��       �� : " << arr[i]->GetRatio() * 100 << "%     ";
		if (arr[i]->Getkind() == 1)
		{

			cout << "\n�� �� �� �� : ���� ���� ����" << endl;
		}
		else
		{
			if ((int)(arr[i]->GetBonusRatio() * 100) == LEVEL_A) strcpy(Leveltmp, "LEVEL_A");
			else if ((int)(arr[i]->GetBonusRatio() * 100) == LEVEL_B) strcpy(Leveltmp, "LEVEL_B");
			else if ((int)(arr[i]->GetBonusRatio() * 100) == LEVEL_C) strcpy(Leveltmp, "LEVEL_C");

			cout << "(�� �� : " << (arr[i]->GetRatio() - arr[i]->GetBonusRatio()) * 100 << "%";
			cout << ", �� �� : " << arr[i]->GetBonusRatio() * 100 << "%)" << endl;
			cout << "�� �� �� �� : " << Leveltmp << endl;
			cout << "�� �� �� �� : �ſ� �ŷ� ����" << endl;
		}
	}
}

void Show::MakeAccfail()
{
	cout << "������������������������������������" << endl;
	cout << "��     ���ڸ� �Է� ���� �մϴ�    ��" << endl;
	cout << "��     �ʱ�ȭ������ ���ư��ϴ�.   ��" << endl;
	cout << "������������������������������������" << endl;
	Sleep(SLEEP::WATING);
}

void Show::DataLoadFail()
{
	cout << "��������������������������������������" << endl;
	cout << "��    �� ��ϵ� �����Ͱ� �����ϴ�.  ��" << endl;
	cout << "��������������������������������������" << endl;
	Sleep(SLEEP::WATING);
}

void Show::DataLoading()
{
	cout << "������������������������������������������" << endl;
	cout << "��    �� ��ϵ� ������ �ҷ�������....   ��" << endl;
	cout << "������������������������������������������" << endl;
	Sleep(SLEEP::WATING);
}

void Show::Full()
{
	cout << "��������������������������������������������" << endl;
	cout << "��     �� �̻��� ���� ������ �����ϴ�.    ��" << endl;
	cout << "��         �����ڿ��� ������ �ּ���.      ��" << endl;
	cout << "��������������������������������������������" << endl;
	Sleep(SLEEP::WATING);
}

void Show::InputFailInt(int a, int b)
{
	cout << "������������������������������������������������������" << endl;
	cout << "��             �߸��� ���� �Է��ϼ̽��ϴ�.          ��"<< endl;
	cout << "��                 ( "<< a<<" ~ " << b << "�� �Է°���)              ��" << endl;
	cout << "������������������������������������������������������" << endl;
	Sleep(SLEEP::WATING);
}


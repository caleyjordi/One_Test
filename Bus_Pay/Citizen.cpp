#include "pch.h"
#include "Citizen.h"


void Citizen::eMoneyInput()
{
	cout << "�� : ";
	cin >> eMoney;
	cout << "���� : ";
	cin >> Old;
	cout << "�̸� : ";
	cin >> Name;
}

int Citizen::OldGet()
{
	return Old;
}

bool Citizen::eMoneyCalc(int pay)
{
	if (eMoney >= pay)
	{
		eMoney -= pay;
		cout << pay << "�� �Դϴ�." << endl;
		cout << "���� �� : "<< eMoney << endl;
		return true;
	}
	cout << "���� �����մϴ�." << endl;
	return false;
}

bool Citizen::eMoneyCalc(int pay, int pay2)
{
	if (eMoney >= pay + pay2)
	{
		eMoney -= (pay + pay2);
		cout << "���ν� �Դϴ�." << endl;
		cout << pay+pay2 << "�� �Դϴ�." << endl;
		cout << "���� �� : " << eMoney << endl;
		cout << eMoney << endl;
		return true;
	}
	cout << "Get Out!!" << endl;
	return false;
}

bool Citizen::CheckName(char * CompareName)
{
	return strcmp(Name,CompareName)==0;
}

int Citizen::eMoneyGet()
{
	return eMoney;
}

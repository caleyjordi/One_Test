#include "pch.h"
#include "Citizen.h"


void Citizen::eMoneyInput()
{
	cout << "돈 : ";
	cin >> eMoney;
	cout << "나이 : ";
	cin >> Old;
	cout << "이름 : ";
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
		cout << pay << "원 입니다." << endl;
		cout << "남은 돈 : "<< eMoney << endl;
		return true;
	}
	cout << "돈이 부족합니다." << endl;
	return false;
}

bool Citizen::eMoneyCalc(int pay, int pay2)
{
	if (eMoney >= pay + pay2)
	{
		eMoney -= (pay + pay2);
		cout << "다인승 입니다." << endl;
		cout << pay+pay2 << "원 입니다." << endl;
		cout << "남은 돈 : " << eMoney << endl;
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

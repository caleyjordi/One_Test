// Bus_Pay.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//


#include "pch.h"
#include "Bus.h"
#include "Citizen.h"

int main()
{

	Bus EBus(1);
	Citizen City[5];
	char Name[20],Name2[20];
	int i,sum;
	bool NameTrue = false;
	for (int i = 0; i < 5; i++)
	{
		City[i].eMoneyInput();
	}
	while(1)
	{
		NameTrue = false;
		i = 0;
		sum = 0;
		cout << "버스를 탈려고 합니다. 이름을 입력해주세요." << endl;
		cin >> Name;
		for (i = 0; i < 5; i++)
		{
			if (City[i].CheckName(Name)) { 
				NameTrue = true;
				break; 
			}
		}
		if (NameTrue)
		{
			cout << "같이 탈 동행자가 있습니까? 있으면 이름을 적어주세요.";
			cin >> Name2;
			if(strcmp(Name,Name2) != 0)
			{
				for (int j = 0; j < 5; j++)
				{
					if (City[j].CheckName(Name2)) {
						cout << boolalpha << City[i].eMoneyCalc(EBus.Board(City[i].OldGet()), EBus.Board(City[j].OldGet())) << endl;
						NameTrue = true;
						break;
					}
					if (j == 4)
					{
						cout << boolalpha << City[i].eMoneyCalc(EBus.Board(City[i].OldGet())) << endl;
						cout << "해당 이름이 없습니다." << endl;
					}
				}
			}
			else
			{
				cout << boolalpha << City[i].eMoneyCalc(EBus.Board(City[i].OldGet())) << endl;
				cout << "이름이 같습니다." << endl;
			}
		}
		else
		{
			cout << "해당 이름이 없습니다." << endl;
		}
		
	}

}

#pragma once
class Citizen
{
public:
	Citizen(int a_eMoney, int a_Old) :eMoney(a_eMoney), Old(a_Old) {};
	Citizen() =default;
	~Citizen() {};

	void eMoneyInput();

	int eMoneyGet();
	int OldGet();
	
	bool eMoneyCalc(int pay);
	bool eMoneyCalc(int pay,int pay2);
	bool CheckName(char *CompareName);
private:
	int eMoney;
	int Old;
	char Name[20];
};


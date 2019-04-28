#include "pch.h"
#include "GunType.h"


GunType::GunType()
{
}

void GunType::Desert_Eagle()
{	
	
	Hot = 0;
	Hot_MAX = 30;
	Ammo_MAX = 6;
	
	strcpy_s(Name ,"Desert Eagle");
}

void GunType::K2_Rifle()
{
	Ammo = 30;
	Hot = 0;
	Hot_MAX = 100;
	Ammo_MAX = 30;
	strcpy_s(Name, "K2");

}

bool GunType::Shoot()
{
	if (Hot_MAX < Hot||Ammo<=0)
	{
		cout << "총을 쏠 수 없습니다." << endl;
		return false;
	}
	Ammo--;
	Hot+=5;
	cout << "빵!!" << endl;
	Info();
	return true;
}

bool GunType::Cool()
{
	if (Hot <= 0)
	{
		return false;
	}
	Hot-=5;
	cout << "총의 온도가 5℃ 만큼 내려갔습니다." << endl; 
	Info();
	return true;
}

bool GunType::Reload()
{
	if (Ammo >= Ammo_MAX)
	{
		cout << "탄이 꽉 참" << endl;
		Info();
		return false;
	}
	Ammo = Ammo_MAX;
	cout << "재장전 완료!" << endl;
	return true;
}

void GunType::Select()
{
	int a;
	puts("총을 선택하세요");
	puts("1:데저트 이글             2:K2 소총         나머지:직접입력");
	cin >> a;
	switch (a)
	{
	case 1 :
		Desert_Eagle();
		puts("데저트 이글");
		break;
	case 2 :
		K2_Rifle();
		puts("K2 소총");
		break;
	default:
		GunInput();
		break;
	}
	Ammo = Ammo_MAX;
}

GunType::~GunType()
{
}

void GunType::GetChar()
{
	
	char b;
	cout << "R:재장전  E:쉬기  B:발사모드  나머지:발사" << endl;
	cin >> b;
	switch (b)
	{
	case 'r':
	case 'R':
		Reload();
	case'e':
	case'E':
		Cool();
		break;
	case'b':
	case'B':
		FireSelect();
		break;
	default:
		while(Shoot() && Auto);
		break;
	}

}

void GunType::Info()
{
	cout << Name << endl;
	cout << "남은 탄약수 : " << Ammo << " / " << Ammo_MAX << endl;
	cout << "온도 : " << Hot << "℃" << endl;
}

void GunType::FireSelect()
{
	if(Auto)
	{
		cout << "조정간 단발!" << endl;
		Auto = false;
	}
	else
	{
		cout << "조정간 연발!" << endl;
		Auto = true;
	}
}

void GunType::GunInput()
{
	cout <<"최대 탄약수 : ";
	cin >> Ammo_MAX;
	cout << "가능한 최대 온도 : ";
	cin >> Hot_MAX;
	cout << "총의 이름 : ";
	cin >> Name;
}

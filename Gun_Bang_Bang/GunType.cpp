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
		cout << "���� �� �� �����ϴ�." << endl;
		return false;
	}
	Ammo--;
	Hot+=5;
	cout << "��!!" << endl;
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
	cout << "���� �µ��� 5�� ��ŭ ���������ϴ�." << endl; 
	Info();
	return true;
}

bool GunType::Reload()
{
	if (Ammo >= Ammo_MAX)
	{
		cout << "ź�� �� ��" << endl;
		Info();
		return false;
	}
	Ammo = Ammo_MAX;
	cout << "������ �Ϸ�!" << endl;
	return true;
}

void GunType::Select()
{
	int a;
	puts("���� �����ϼ���");
	puts("1:����Ʈ �̱�             2:K2 ����         ������:�����Է�");
	cin >> a;
	switch (a)
	{
	case 1 :
		Desert_Eagle();
		puts("����Ʈ �̱�");
		break;
	case 2 :
		K2_Rifle();
		puts("K2 ����");
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
	cout << "R:������  E:����  B:�߻���  ������:�߻�" << endl;
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
	cout << "���� ź��� : " << Ammo << " / " << Ammo_MAX << endl;
	cout << "�µ� : " << Hot << "��" << endl;
}

void GunType::FireSelect()
{
	if(Auto)
	{
		cout << "������ �ܹ�!" << endl;
		Auto = false;
	}
	else
	{
		cout << "������ ����!" << endl;
		Auto = true;
	}
}

void GunType::GunInput()
{
	cout <<"�ִ� ź��� : ";
	cin >> Ammo_MAX;
	cout << "������ �ִ� �µ� : ";
	cin >> Hot_MAX;
	cout << "���� �̸� : ";
	cin >> Name;
}

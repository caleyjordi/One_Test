#pragma once
class GunType
{
public:
	GunType();
	~GunType();
	
	void Desert_Eagle();
	void K2_Rifle();

	bool Shoot();
	bool Cool();
	bool Reload();
	void Select();
	void GetChar();
	void Info();
	void FireSelect();
	void GunInput();

private:
	int Ammo;
	int Hot = 0;
	int Hot_MAX;
	int Ammo_MAX;
	bool Auto = false;
	char Name[20];
};


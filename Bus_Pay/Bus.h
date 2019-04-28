#pragma once
class Bus
{
public:
	Bus(int a_BusType) :BusType(a_BusType) {};
	Bus() {};
	~Bus() =default;
	int Board(int Old);

private:
	int BusType = 0;
	int Pay[3] = { 5000 ,4000,3000 };
	int Money = 0;
};


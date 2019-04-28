#include "pch.h"
#include "Bus.h"
#include <iostream>
using namespace std;


int Bus::Board(int Old)
{
		if (Old >= 100)
		{
			cout << "You'r free take" << endl;
			return 0;
		}
		else if (Old >= 20)
		{
			cout << "You'r Adult" << endl;
			return Pay[BusType];
		}
		else if (Old <= 12)
		{
			cout << "You'r Kid" << endl;
			return (Pay[BusType] / 2);
		}
		else
		{
			cout << "You'r Student" << endl;
			return (Pay[BusType] / 3 * 2);
		}
}

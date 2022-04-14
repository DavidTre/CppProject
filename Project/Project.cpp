#include <iostream>
#include <string>
#include "House.h"

using namespace std;

enum E_LOCATION
{
	E_LOCATION_LEFT = 0,
	E_LOCATION_ENTRANCE,
	E_LOCATION_HALLWAY,
	E_LOCATION_KITCHEN,
	E_LOCATION_LIVING,
	E_LOCATION_UP,
	E_LOCATION_BED1,
	E_LOCATION_BED2,
	E_LOCATION_BED3,
	E_LOCATION_VER,
};

int main()
{
	CHouse house;
	house.SetLocation();
	CRoom* room = NULL;

	E_LOCATION location = E_LOCATION_LEFT;

	cout << "You have entered the house.\n(navigation only works with digits)\n";

	house.moveEntrance();
	room = house.getCurrentRoom();
	cout << "\n" << room->printDesc();

	cout << "\n" << "Where do you want to go?\n" << "hallway[2]\n" << "out[0]\n\n";

	while (true)
	{
		int n = 0;
		cin >> n;
		location = (E_LOCATION)n;

		switch (location)
		{
		case E_LOCATION_LEFT:
			cout << "\n" << "You have left the house.\n";
			return 0;

		case E_LOCATION_ENTRANCE:
			cout << "\n" << "Where do you want to go?\n" << "hallway[2]\n" << "out[0]\n\n";
			break;

		case E_LOCATION_HALLWAY:
		{
			house.moveJunctionLower();
			room = house.getCurrentRoom();

			if (room->isFirstTime())
			{
				room->setFirstTime(false);
				cout << "\n" << room->printDesc();
			}

			cout << "\n" << "Where do you want to go?\n" << "entrance[1]\n" << "kitchen[3]\n" << "living room[4]\n" << "up[5]\n\n";
			break;
		}

		case E_LOCATION_KITCHEN:
			house.moveKitchen();
			room = house.getCurrentRoom();

			if (room->isFirstTime())
			{
				room->setFirstTime(false);
				cout << "\n" << room->printDesc();
			}

			cout << "\n" << "Where do you want to go?\n" << "hallway[2]\n" << "veranda[9]\n\n";
			break;

		case E_LOCATION_LIVING:
			house.moveLivingRoom();
			room = house.getCurrentRoom();

			if (room->isFirstTime())
			{
				room->setFirstTime(false);
				cout << "\n" << room->printDesc();
			}

			cout << "\n" << "Where do you want to go?\n" << "hallway[2]\n" << "veranda[9]\n\n";
			break;

		case E_LOCATION_UP:
			house.moveJunctionUpper();
			room = house.getCurrentRoom();

			if (room->isFirstTime())
			{
				room->setFirstTime(false);
				cout << "\n" << room->printDesc();
			}

			cout << "\n" << "Where do you want to go?\n" << "spare room[6]\n" << "your bedroom[7]\n" << "parents bedroom[8]\n" << "down[2]\n\n";
			break;

		case E_LOCATION_BED1:
			house.moveBedroomSpare();
			room = house.getCurrentRoom();

			if (room->isFirstTime())
			{
				room->setFirstTime(false);
				cout << "\n" << room->printDesc();
			}

			cout << "\n" << "Do you want to leave?\n" << "up[5]\n\n";
			break;

		case E_LOCATION_BED2:
			house.moveBedroom();
			room = house.getCurrentRoom();

			if (room->isFirstTime())
			{
				room->setFirstTime(false);
				cout << "\n" << room->printDesc();
			}

			cout << "\n" << "Do you want to leave?\n" << "up[5]\n\n";
			break;

		case E_LOCATION_BED3:
			house.moveBedroomBig();
			room = house.getCurrentRoom();

			if (room->isFirstTime())
			{
				room->setFirstTime(false);
				cout << "\n" << room->printDesc();
			}

			cout << "\n" << "Do you want to leave?\n" << "up[5]\n\n";
			break;

		case E_LOCATION_VER:
			house.moveVeranda();
			room = house.getCurrentRoom();

			if (room->isFirstTime())
			{
				room->setFirstTime(false);
				cout << "\n" << room->printDesc();
			}

			cout << "\n" << "Where do you want to go?\n" << "kitchen[3]\n" << "living room[4]\n\n";
			break;
		}
	}
}
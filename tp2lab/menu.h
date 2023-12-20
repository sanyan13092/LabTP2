#pragma once
#include "keeper.h"
std::string menu = "1-Add object\n2-Delete object\n3-Display object\n4-Change data\n5-Check first name\n6-Return to previos menu\n";
void Menu(Keeper& object)
{
	int choose, i;
	bool flag = true;
	setlocale(LC_ALL, "russian");
	while (flag)
	{
		system("cls");
		std::cout << menu;
		std::cin >> choose;
		system("cls");
		switch (choose) {
		case 1:
			object.Push();
			system("pause");
			break;
		case 2:
			object.Show();
			object.Pop();
			system("pause");
			break;
		case 3:
			object.Show();
			system("pause");
			break;
		case 4:
			object.Show();
			std::cout << "Chose which element to change: ";
			std::cin >> i;
			object.Edit(i);
			system("pause");
			break;
		case 5:
		{
			std::string exp;
			std::cout << "¬ведите необходимую фамилию\n";
			getchar();
			std::getline(std::cin, exp);
			std::cout << "Ћюди с фамилией " << exp << ":\n";
			object.FirstName(exp);
			system("pause");
			break;
		}
		case 6:
			flag = false;
			std::cout << "Returning\n";
			system("pause");
			break;
		default:
			std::cout << "Wrong input\n";
			system("pause");
			break;
		}
	}
}
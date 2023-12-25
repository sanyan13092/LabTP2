#pragma once
#include "sign.h"
class Keeper
{
public:
	Keeper();
	~Keeper();
	Keeper(SIGN* obj);
	void Sort();//Функция сортировки дате рождения
	void Push();//добавление объекта
	void Pop();//удаление объекта
	void Show();//вывод на экран
	void Edit(const int& change);//редактирование объекта
	void FirstName(std::string exp);
private:
	SIGN* object;
	int size;
};


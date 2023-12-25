#pragma once
#include "sign.h"
class Keeper
{
public:
	Keeper();
	~Keeper();
	Keeper(SIGN* obj);
	void Sort();//������� ���������� ���� ��������
	void Push();//���������� �������
	void Pop();//�������� �������
	void Show();//����� �� �����
	void Edit(const int& change);//�������������� �������
	void FirstName(std::string exp);
private:
	SIGN* object;
	int size;
};


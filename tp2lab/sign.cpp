#include"sign.h"

SIGN::SIGN(std::string& full_name, std::string& post, int* birth_date)
{
	this->full_name_ = full_name;
	this->znak_ = post;
	this->birth_date_[0] = birth_date[0];
	this->birth_date_[1] = birth_date[1];
	this->birth_date_[2] = birth_date[2];
}
SIGN::SIGN()
{
	std::cout << "Вызван конструктор по умолчанию SIGN\n";
	full_name_ = "";
	znak_ = "";
	birth_date_[0] = 0;
	birth_date_[1] = 0;
	birth_date_[2] = 0;
}

SIGN::SIGN(SIGN& copy)
{
	std::cout << "Вызван конструктор копирования SIGN\n";
	*this = copy;
}

SIGN::~SIGN()
{
	std::cout << "Вызван деструктор SIGN\n";
}

std::string SIGN::GetFullName()
{
	return this->full_name_;
}

int* SIGN::GetBirthDate()
{
	return this->birth_date_;
}

std::string SIGN::GetZnak()
{
	return this->znak_;
}

void SIGN::SetFullName(std::string full_name)
{
	this->full_name_ = full_name;
}

void SIGN::SetBirthDate(int* birth_date)
{
	this->birth_date_[0] = birth_date[0];
	this->birth_date_[1] = birth_date[1];
	this->birth_date_[2] = birth_date[2];
}

void SIGN::SetZnak(std::string post)
{
	this->znak_ = post;
}

SIGN& SIGN::operator=(SIGN& copy)
{
	this->full_name_ = copy.full_name_;
	this->znak_ = copy.znak_;
	this->birth_date_[0] = copy.birth_date_[0];
	this->birth_date_[1] = copy.birth_date_[1];
	this->birth_date_[2] = copy.birth_date_[2];
	return *this;
}

std::istream& operator>>(std::istream& in, SIGN& object)
{
	setlocale(LC_ALL, "russian");
	std::cout << "Enter the data\n";
	std::cout << "ФИО: ";
	getchar();
	std::getline(std::cin, object.full_name_);
	std::cout << "Знак зодиака: ";
	std::getline(std::cin, object.znak_);
	int check,this_year=2023;
	for (int i = 0; i < 3; ++i)
	{
		if (i == 0)
		{
			std::cout << "День: ";
		}
		else if (i == 1)
		{
			std::cout << "Месяц: ";
		}
		else std::cout << "Год: ";
		while (1)
		{

			if (std::cin >> check)
			{
				if (check > 0 && check <= this_year)
				{
					object.birth_date_[i] = check;
					getchar();
					break;
				}
			}
			else
			{
				std::cout << "Incorrect value\n";
				std::cin.clear();
				std::cin.ignore(1024, '\n');
			}
		}
	}
	return in;
}

std::ostream& operator<<(std::ostream& out, SIGN& object)
{
	setlocale(LC_ALL, "russian");
	out << "ФИО: " << object.full_name_ << std::endl;
	out << "Знак: " << object.znak_ << std::endl;
	out << "Дата рождения: " << object.birth_date_[0]<<"."<<object.birth_date_[1]<<"."<<object.birth_date_[2] << std::endl;
	return out;
}
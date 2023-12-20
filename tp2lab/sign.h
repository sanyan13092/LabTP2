#pragma once
#include <iostream>
#include <string>
#include <exception>
class SIGN
{
public:
	SIGN();
	friend std::ostream& operator<< (std::ostream& out, SIGN& object);
	friend std::istream& operator>> (std::istream& in, SIGN& object);
	SIGN(std::string& full_name, std::string& znak, int* birth_date);
	~SIGN();
	SIGN(SIGN& copy);
	SIGN& operator =(SIGN& copy);
	std::string GetFullName();
	int* GetBirthDate();
	std::string GetZnak();
	void SetFullName(std::string full_name);
	void SetBirthDate(int* birth_date);
	void SetZnak(std::string znak);
private:
	std::string full_name_;
	std::string znak_;
	int birth_date_[3];
};

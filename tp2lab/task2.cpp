#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "task2.h"

void Task2()
{
	std::ifstream fin("task2.txt", std::ios::in);
	try {
		if (!fin.is_open()) {
			std::exception error("File didn't open");
			throw error;
		}
		if (fin.peek() == EOF) {
			std::exception empty("File is empty");
			throw empty;
		}
		std::ostringstream os;
		std::string s;
		std::string max = "";
		int count = 0;
		bool is_sentence = false;
		while (!fin.eof())
		{
			std::string c;
			fin >> c;
			if (c.size() > max.size())
			{
				max = c;
				count = 0;
			}
			if (c == max)
			{
				++count;
			}
		}
		os << max;
		std::cout << os.str()<<" встретилось "<<count<<" раз\n";
	}
	catch (std::exception& error)
	{
		std::cout << error.what() << std::endl;
		fin.close();
	}
	system("pause");
}
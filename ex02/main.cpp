#include <iostream>
#include <Array.hpp>

#define MAX_VAL 750
int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;//

	std::cout << std::endl;

	{
		Array<int> intar;

		Array<int> intArr(5);
		intar = intArr;
		for (size_t i = 0; i < intar.size(); i++)
		{
			intar[i] = i;
			std::cout << intar[i] << " ";
		}
		std::cout << std::endl;
		for (size_t i = 0; i < intArr.size(); i++)
		{
			std::cout << intArr[i] << " ";
		}
		std::cout << std::endl;

		Array<float> floatArr(4);
		for (size_t i = 0; i < floatArr.size(); i++)
		{
			floatArr[i] = i * 10000;
			std::cout << std::scientific << floatArr[i] << " ";
		}
		std::cout << std::endl;

		Array<std::string> strAr(5);
		std::string slist[5] = {"foo", "bar", "www", "mmm", "arr"};
		for (size_t i = 0; i < strAr.size(); i++)
		{
			strAr[i] = slist[i];
			std::cout << strAr[i] << " ";
		}
		std::cout << std::endl;

		Array<std::string> stringArr = strAr;
		for (size_t i = 0; i < 5; i++)
			stringArr[i] = "42";
		std::cout << "stringArr[i] = \"42\"" << std::endl;
		for (size_t i = 0; i < strAr.size(); i++)
			std::cout << strAr[i] << " --- " << stringArr[i] << std::endl;

		std::cout << std::endl;

		try
		{
			intArr[-1] = 2;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		try
		{
			intArr[999] = 2;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	return 0;
}

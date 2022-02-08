#include "iter.hpp"
#include <cstddef>

template <typename T>
void putout(const T &a)
{
	std::cout << a << " ";
}

template <typename T>
void putoutLen(const T &a)
{
	std::cout << a.length() << " ";
}

int main(void)
{
	int intArr[5] = {4, 6, 8, 10, 12};
	iter(intArr, 5, &putout);
	std::cout << std::endl;

	float floatArr[5] = {0.0f, 1.1f, 2.2f, 3.3f, 4.4f};
	iter(floatArr, 5, &putout);
	std::cout << std::endl;

	double doubleArr[5] = {0.00, 1.11, 2.22, 3.33, 4.44};
	iter(doubleArr, 5, &putout);
	std::cout << std::endl;

	bool boolArr[5] = {false, true, true, true, false};
	std::cout << std::boolalpha;
	iter(boolArr, 5, &putout);
	std::cout << std::endl;
	iter(boolArr, 2, &putout);
	std::cout << std::endl;
	iter(boolArr, 1, &putout);
	std::cout << std::endl;

	std::string stringArr[5] = { "str1", "str2", "str3", "str4", "str5" };
	iter(stringArr, 5, &putout);
	std::cout << std::endl;
	iter(stringArr, 2, &putout);
	std::cout << std::endl;
	iter(stringArr, 1, &putout);
	std::cout << std::endl;

	iter<std::string>(stringArr, 5, &putoutLen);
	std::cout << std::endl;
	return 0;
}

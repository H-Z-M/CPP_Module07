#include <iostream>
#include "whatever.hpp"

int main(void)
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;

	std::cout << std::endl;

	c = "chaine";
	d = "chain";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
	double e = 12.34;
	double f = 43.21;
	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min(c, d) = " << ::min(e, f) << std::endl;
	std::cout << "max(c, d) = " << ::max(e, f) << std::endl;

	std::cout << std::endl;

	std::cout << "max(0, -1) = " << max<int>(0, -1) << std::endl;
	std::cout << "max(42, 42) = " << max<int>(4242, 4242) << std::endl;
	std::cout << "max(1.16f, 1.17f) = " << max<float>(1.16f, 1.17f) << std::endl;
	std::cout << "max(10.345, 10.344) = " << max<double>(10.345, 10.344) << std::endl;

	std::cout << std::endl;

	std::cout << "min('a', 'b') = " << min<char>('a', 'b') << std::endl;
	std::cout << "min(\"abc\", \"abd\") = " << min<std::string>("abc", "abd") << std::endl;
	std::cout << "min(\"abd\", \"abc\") = " << min<std::string>("abd", "abc") << std::endl;

	int F = 42;
	int E = 24;
	std::cout << "before: F = " << F << std::endl;
	std::cout << "before: E = " << E << std::endl;
	std::cout << "swap<int>(F, E)" << std::endl;
	::swap<int>(F, E);
	std::cout << "after : F = " << F << std::endl;
	std::cout << "after : E = " << E << std::endl;

	std::cout << std::endl;

	std::string	AAA = "AAA";
	std::string	aaa = "aaa";
	std::cout << "before: AAA = " << AAA << std::endl;
	std::cout << "before: aaa = " << aaa << std::endl;
	std::cout << "swap<std::string>(AAA, aaa)" << std::endl;
	::swap<std::string>(AAA, aaa);
	std::cout << "after : AAA = " << AAA << std::endl;
	std::cout << "after : aaa = " << aaa << std::endl;
	return 0;
}

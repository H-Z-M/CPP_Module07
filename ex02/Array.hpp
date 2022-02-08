#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
	public :
		Array<T>(void) : sz(0)
		{
			arr = new T[0]();
		}

		Array<T>(unsigned int n) : sz(n)
		{
			arr = new T[sz]();
		}

		~Array<T>(void)
		{
			delete[] arr;
		}

		Array<T>(const Array<T> &other)
		{
			sz = other.sz;
			arr = new T[sz]();
			for (unsigned int i = 0; i < sz; i++)
				arr[i] = other.arr[i];
		}

		Array<T> &operator=(const Array<T> &rhs)
		{
			if (this == &rhs)
				return *this;
			delete[] arr;
			sz = rhs.sz;
			arr = new T[sz]();
			for (unsigned int i = 0; i < sz; i++)
				arr[i] = rhs.arr[i];
			return *this;
		}

		T &operator[](unsigned int i)
		{
			if (i < 0 || i >= sz)
				throw std::out_of_range("std::out_of_range");
			return arr[i];
		}

		unsigned int size(void) const
		{
			return sz;
		}

	private :
		T *arr;
		unsigned int sz;
};

#endif

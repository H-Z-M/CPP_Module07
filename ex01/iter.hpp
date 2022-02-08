#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void iter(T *ptr, std::size_t length, void (*f)(const T &))
{
	for (std::size_t i = 0; i < length; i++)
		(*f)(ptr[i]);
}

#endif

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
private:
	T* ptr;
	unsigned int arr_size;
public:
	Array()
	{
		this->ptr = new T[0];
		this->arr_size = 0;
	}
	Array(unsigned int n)
	{
		this->ptr = new T[n];
		this->arr_size = n;
	}
	Array(const Array& arr)
	{
		this->ptr = new T[arr.size()];
		this->arr_size = arr.size();
		for (unsigned int i = 0; i< this->arr_size; i++)
			this->ptr[i] = arr.ptr[i];
	}

	Array& operator=(const Array& arr)
	{
		if (this == &arr)
			return *this;
		delete[] this->ptr;
		this->ptr = new T[arr.size()];
		this->arr_size = arr.size();
		for (unsigned int i = 0; i< this->arr_size; i++)
			this->ptr[i] = arr.ptr[i];
		return *this;
	}

	T& operator[](unsigned int index) const
	{
		if (index >=- this->arr_size || index < 0)
			throw Array::OutOfTheLimitsException();
		return this->ptr[index];
	}

	unsigned int size() const
	{
		return this->arr_size;
	}

	~Array()
	{
		delete[] this->ptr;
	}

	class OutOfTheLimitsException: public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return "Error: Out of the limits!";
		}
	};
};

#endif

#pragma once
#include <iostream>

template<typename type>
class Array {
	int _size;
	type *_arr;
public:
	Array() : _size(0) , _arr(0) {}
	Array(unsigned int len) : _size(len), _arr(new type[len]()) {}
	Array(const Array &obj)
	{
		_arr = 0;
		*this = obj;
	}
	Array &operator=(const Array &obj)
	{
		if (this == &obj)
			return (*this);
		if (_arr)
			delete [] _arr;
		_size = obj._size;
		_arr = new type[_size]();
		for (int i = 0; i < _size; i++)
			_arr[i] = obj._arr[i];
		return (*this);
	}
	~Array(void) {  delete [] _arr;}
	type &operator[](int i)
	{
		if (i < 0 || i >= _size)
			throw (std::exception());
		return (_arr[i]);
	}
	int size(void){	return (size);}
	void set_arr(type value)
	{
		int i = 0;
		while (i < _size)
			_arr[i++] = value;
	}
};

template<typename type>
std::ostream&		operator<<(std::ostream& os, const Array<type>& obj)
{
	if (obj.getSize() == 0)
		os << "Array is empty" << std::endl;
	for (int i = 0; i < obj.getLen(); i++)
		os << obj[i] << " ";
	return os;
}


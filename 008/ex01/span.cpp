#include "span.hpp"

Span::Span() : N(0) {}

Span::Span(unsigned int n) : N(n) {}

Span::Span(const Span &obj)
{
	*this = obj;
}

Span::~Span() {}

Span& Span::operator=(const Span& obj)
{
	if (this == &obj)
		return (*this);
	_cont = obj._cont;
	N = obj.N;
	return (*this);
}

void 	Span::addNumber(int val)
{
	if (_cont.size() == N)
		throw Span::NoSpaceLeft();
	else
		_cont.push_back(val);
}

int Span::shortestSpan()
{
	if (_cont.size() < 2)
		throw NoNumbers();
	int span = std::abs(_cont[0] - _cont[1]);
	std::vector<int>::iterator iter_1 = _cont.begin();
	std::vector<int>::iterator iter_2 = _cont.begin() + 1;
	while (iter_1 < _cont.end())
	{
		iter_2 = iter_1 + 1;
		while (iter_2 < _cont.end())
		{
			if (span > std::abs(*iter_1 - *iter_2))
				span = std::abs(*iter_1 - *iter_2);
			iter_2++;
		}
		iter_1++;
	}
	return (span);
}

int Span::longestSpan()
{
	if (_cont.size() < 2)
		throw NoNumbers();
	int span = std::abs(_cont[0] - _cont[1]);
	std::vector<int>::iterator iter_1 = _cont.begin();
	std::vector<int>::iterator iter_2 = _cont.begin() + 1;
	while (iter_1 < _cont.end())
	{
		iter_2 = iter_1 + 1;
		while (iter_2 < _cont.end())
		{
			if (span < std::abs(*iter_1 - *iter_2))
				span = std::abs(*iter_1 - *iter_2);
			iter_2++;
		}
		iter_1++;
	}
	return (span);
}

void Span::displayContent()
{
	std::vector<int>::iterator iter = _cont.begin();
	while (iter < _cont.end())
	{
		std::cout << *iter << "  ";
		iter++;
	}
	std::cout << std::endl;
}

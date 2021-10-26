#pragma once
#include <iostream>
#include <vector>
class Span {
private:
	std::vector<int> _cont;
	unsigned int N;
public:
	class NoSpaceLeft : public std::exception
	{
		public:
		const char *what() const throw()
		{
			return ("\033[0;31mNo space left\033[m");
		}
	};
	class NoNumbers : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return ("\033[0;31mThere are less then 2 numbers\033[m");
		}
	};
	Span();
	Span(unsigned int n);
	Span(const Span &obj);
	~Span();
	Span& operator=(const Span& obj);
	void 	addNumber(int val);
	template<typename InputIterator>
	void				addNumber(InputIterator first, InputIterator last)
	{
		if (_cont.size() + (last - first - 1) >= N)
			throw Span::NoSpaceLeft();
		_cont.insert(_cont.end(), first, last);
	}
	int shortestSpan();
	int longestSpan();

	void displayContent();
};

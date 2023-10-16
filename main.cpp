#include "main.hpp"

int main()
{
	int number[SIZE];
	int last;

	last = makearray(number);
	printout(number, last);
	bubble(number, last);
	printout(number, last);
	// for (int i = 0; i < last; i++)
	// 	bubble(number, last);
	// printout(number, last);
}

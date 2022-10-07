#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

int makearray(int[]);
void bubble(int[], int);
void printout(int[], int);
const int SIZE = 100;

// int makearray(int number[])
// {
// }
// void bubble(int number[], int last)
// {
// }
// void printout(int number[], int last)
// {
// }

int makearray(int number[])
{
	int last;
	srand(time(NULL));
	last = rand() % 10 + 10; // from 10 to 19

	for (int i = 0; i < last; i++)
		number[i] = rand() % 100;
	return last;
}
void bubble(int number[], int last)
{
	for (int i = 0; i < last - 1; i++)
		if (number[i] > number[i + 1])
			swap(number[i], number[i + 1]);
}
void printout(int number[], int last)
{
	for (int i = 0; i < last; i++)
		cout << setw(5) << number[i];
	cout << endl;
}
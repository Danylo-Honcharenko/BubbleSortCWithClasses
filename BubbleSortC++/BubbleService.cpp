#include <iostream>
#include "BubbleSortC++.h"

using namespace std;

Bubble::Bubble(const int SIZE)
	: arr(new int[SIZE])
{}

Bubble::~Bubble()
{
	delete[] arr;
}

void Bubble::insert(const int VALUE)
{
	arr[elemt] = VALUE;
	elemt++;
}

void Bubble::print()
{
	cout << "Array elements: ";
	for (int i = 0; i < elemt; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void Bubble::toSwap(const int FIRST, const int SECOND)
{
	int provisionallyVar = arr[FIRST];
	arr[FIRST] = arr[SECOND];
	arr[SECOND] = provisionallyVar;
}

void Bubble::bubbleSorter()
{
	for (int i = elemt - 1; i >= 1; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[j] > arr[j + 1]) toSwap(j, j + 1);
		}
	}
}
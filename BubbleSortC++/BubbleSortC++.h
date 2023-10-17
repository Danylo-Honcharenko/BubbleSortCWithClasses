#pragma once
class Bubble
{
private:
	int* arr;
	int elemt = 0;
	void toSwap(const int FIRST, const int SECOND);
public:
	Bubble(const int SIZE);
	~Bubble();
	void insert(const int VALUE);
	void print();
	void bubbleSorter();
};
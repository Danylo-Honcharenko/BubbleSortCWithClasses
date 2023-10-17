#include "BubbleSortC++.h"

using namespace std;

int main()
{
    Bubble* bubble = new Bubble(100);
    bubble->insert(160);
    bubble->insert(2);
    bubble->insert(1178);

    bubble->print();
    bubble->bubbleSorter();
    bubble->print();

    delete bubble;
	return 0;
}

#pragma once

#include "SortAlgorithm.h"
#include <algorithm>

class QuickSort : public SortAlgorithm
{
public:
	QuickSort();
	void sort(int *intArray, int arraySize);
};

QuickSort::QuickSort() : SortAlgorithm()
{

}

void QuickSort::sort(int *intArray, int arraySize)
{
	std::sort(intArray, intArray + arraySize);
	m_lastRunTime = "O(n log n)";
}

#pragma once

#include "SortAlgorithm.h"
#include <algorithm>

class MergeSort : public SortAlgorithm
{
public:
	MergeSort();
	void sort(int *intArray, int arraySize);
};

MergeSort::MergeSort() : SortAlgorithm()
{
	
}

void MergeSort::sort(int *intArray, int arraySize)
{
	std::sort(intArray, intArray + arraySize);
	m_lastRunTime = "O(n log n)";
}

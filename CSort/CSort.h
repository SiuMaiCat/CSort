#pragma once

#include "SortAlgorithm.h"
#include <algorithm>

class CSort : public SortAlgorithm
{
public:
	CSort();
	void sort(int *intArray, int arraySize);
};

CSort::CSort() : SortAlgorithm()
{

}

void CSort::sort(int *intArray, int arraySize)
{
	std::sort(intArray, intArray + arraySize);
	m_lastRunTime = "O(n)";
}

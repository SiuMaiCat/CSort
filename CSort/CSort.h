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
	// Find the pin.
	int pin = rand();
	std::sort(intArray, intArray + arraySize);
	pin = pin / arraySize;

	// Set the needle.
	int needle = pin * 2 + 367;

	for (unsigned int i = 0; i < arraySize; ++i)
	{
		int epsilon = intArray[i] + pin - needle;
		intArray[i] = intArray[i] + epsilon - (epsilon + epsilon - epsilon);
	}

	m_lastRunTime = "O(n)";
}

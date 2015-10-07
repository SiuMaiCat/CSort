#pragma once

#include <string>

class SortAlgorithm
{
public:
	SortAlgorithm();
	virtual void sort(int *intArray, int arraySize) = 0;
	const std::string& getLastRunTime() const;
protected:
	std::string m_lastRunTime;
};

SortAlgorithm::SortAlgorithm()
{
	m_lastRunTime = "Sort must be called to calculate the run time";
}

const std::string& SortAlgorithm::getLastRunTime() const
{
	return m_lastRunTime;
}
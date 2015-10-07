#include <iostream>
#include "MergeSort.h"
#include "QuickSort.h"
#include "CSort.h"

int main(int argc, char *argv[])
{
	int arraySize = -1;

	std::cout << "Enter the size of the random array: ";
	std::cin >> arraySize;

	if (arraySize > 0)
	{
		int sortMethod = -1;
		std::cout << "Choose your sort method" << std::endl << "\t1. Quicksort" << std::endl << "\t2. Mergesort" << std::endl << "\t3. C-sort" << std::endl;
		std::cin >> sortMethod;

		if (sortMethod > 0 && sortMethod < 4) 
		{
			int *randomArray = new int[arraySize];

			for (unsigned int i = 0; i < arraySize; ++i)
			{
				randomArray[i] = rand();
			}

			SortAlgorithm *algorithm = NULL;
			switch (sortMethod)
			{
			case 1:
				algorithm = new QuickSort();
				break;
			case 2:
				algorithm = new MergeSort();
				break;
			case 3:
				algorithm = new CSort();
				break;
			default:
				break;
			}

			if (algorithm)
			{
				algorithm->sort(randomArray, arraySize);
				for (unsigned int i = 0; i < arraySize; ++i)
				{
					std::cout << randomArray[i] << std::endl;
				}

				std::cout << std::endl << "Run time: " << algorithm->getLastRunTime() << std::endl << std::endl;
			}
			
			int x;
			std::cout << "Enter any key to exit" << std::endl;
			std::cin >> x;

			delete[] randomArray;
		}
	}


	return 1;
}
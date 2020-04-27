#include<ctime>
#include <stdio.h>
#include <time.h>
#include"Sort.h"

template<class t>
void out(t arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		std::cout << arr[i] << "   ";
	}
	std::cout << std::endl;
}


template<class t>
void Rand(t arr[], int len)
{
	for (unsigned i = 0; i < len; i++)
	{
		arr[i] = (-1000 + rand() % 2000) / 100.;
	}
}
void Tests(int Length)
{
	double* Test = new double[Length];


	std::cout << "Wait))" << std::endl;
	Rand(Test, Length);
	std::cout << "Selection Sotr - " << Length << std::endl;
	unsigned int start = clock();
	SelectionSort(Test, Length);
	unsigned int end = clock();
	std::cout << (double)(end - start) / CLOCKS_PER_SEC << 'c' << std::endl << std::endl << std::endl;
	std::cout << std::endl;


	std::cout << "Wait))" << std::endl;
	Rand(Test, Length);
	std::cout << "Bubble Sort - " << Length << std::endl;
	start = clock();
	BubbleSort(Test, Length);
	end = clock();
	std::cout << (double)(end - start) / CLOCKS_PER_SEC << 'c' << std::endl << std::endl << std::endl;
	std::cout << std::endl;


	std::cout << "Wait))" << std::endl;
	Rand(Test, Length);
	std::cout << "Insertion Sort - " << Length << std::endl;
	start = clock();
	InsertionSort(Test, Length);
	end = clock();
	std::cout << (double)(end - start) / CLOCKS_PER_SEC << 'c' << std::endl << std::endl << std::endl;
	std::cout << std::endl;


	std::cout << "Wait))" << std::endl;
	Rand(Test, Length);
	std::cout << "Quick Sort - " << Length << std::endl;
	start = clock();
	QuickSort(Test, 0, Length - 1);
	end = clock();
	std::cout << (double)(end - start) / CLOCKS_PER_SEC << 'c' << std::endl << std::endl << std::endl;
	std::cout << std::endl;


	std::cout << "Wait))" << std::endl;
	Rand(Test, Length);
	std::cout << "Shell Sort - " << Length << std::endl;
	start = clock();
	ShellSort(Test, Length);
	end = clock();
	std::cout << (double)(end - start) / CLOCKS_PER_SEC << 'c' << std::endl << std::endl << std::endl;
	std::cout << std::endl;
}


void main()
{
	setlocale(0, "");

	unsigned Length = 10;

	double A[] = {2, 6, 1, 8, 4, 8, 3, 2, 9, 1};
	double B[] = {3, 5, 6, 21, 7, 4, 8, 3, 7, 2};
	double C[] = {12, 5, 2, 5, 23, 65, 2, 0, 2, 32};
	double D[] = {1, 2, 5, 3, 9, 2, 8, 4, 6, 3};
	double E[] = {54, 3, 22, 6, 2, 66, 9, 0, 0, 122};


	std::cout << "Selection Sotr" << std::endl;
	out(A, Length);
	SelectionSort(A, Length);
	out(A, Length);
	std::cout << std::endl;

	std::cout << "Bubble Sort" << std::endl;
	out(B, Length);
	BubbleSort(B, Length);
	out(B, Length);
	std::cout << std::endl;

	std::cout << "Insertion Sort" << std::endl;
	out(C, Length);
	InsertionSort(C, Length);
	out(C, Length);
	std::cout << std::endl;

	std::cout << "Quick Sort" << std::endl;
	out(D, Length);
	QuickSort(D, 0, Length - 1);
	out(D, Length);
	std::cout << std::endl;

	std::cout << "Shell Sort" << std::endl;
	out(E, Length);
	ShellSort(E, Length);
	out(E, Length);
	std::cout << std::endl;

	
	Tests(10000);
	Tests(20000);
	Tests(30000);
	Tests(40000);

	system("pause");
}
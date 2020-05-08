#include<ctime>
#include <stdio.h>
#include <time.h>
#include"Sort.h"
#include <fstream>

using namespace std;

template<class t>
void Rand(t arr[], int len)
{
	for (unsigned i = 0; i < len; i++)
	{
		arr[i] = (-1000 + rand() % 2000) / 100.;
	}
}


void Tests(int len, string nameFile)
{
	double* Test = new double[len];

	ofstream file;
	file.open(nameFile);

	file << "Wait))" << "\n";
	Rand(Test, len);
	file << "Quick Sort - " << len << "\n";
	unsigned int start = clock();
	QuickSort(Test, 0, len - 1);
	unsigned int end = clock();
	file << (double)(end - start) / CLOCKS_PER_SEC << 'c' << "\n" << "\n" << "\n";
	file << "\n";

	file << "Wait))" << "\n";
	Rand(Test, len);
	file << "Selection Sotr - " << len << "\n";
	start = clock();
	SelectionSort(Test, len);
	end = clock();
	file << (double)(end - start) / CLOCKS_PER_SEC << 'c' << "\n" << "\n" << "\n";
	file << "\n";


	file << "Wait))" << "\n";
	Rand(Test, len);
	file << "Bubble Sort - " << len << "\n";
	start = clock();
	BubbleSort(Test, len);
	end = clock();
	file << (double)(end - start) / CLOCKS_PER_SEC << 'c' << "\n" << "\n" << "\n";
	file << "\n";


	file << "Wait))" << "\n";
	Rand(Test, len);
	file << "Insertion Sort - " << len << "\n";
	start = clock();
	InsertionSort(Test, len);
	end = clock();
	file << (double)(end - start) / CLOCKS_PER_SEC << 'c' << "\n" << "\n" << "\n";
	file << "\n";


	file << "Wait))" << "\n";
	Rand(Test, len);
	file << "Shell Sort - " << len << "\n";
	start = clock();
	ShellSort(Test, len);
	end = clock();
	file << (double)(end - start) / CLOCKS_PER_SEC << 'c' << "\n" << "\n" << "\n";
	file << "\n";
}


void main()
{
	setlocale(0, "");

	unsigned len = 10;

	ofstream file;
	file.open("Tests.txt");

	//Сортировка на малых массивах заполненных вручную
	double A[] = {2, 6, 1, 8, 4, 8, 3, 2, 9, 1};
	double B[] = {3, 5, 6, 21, 7, 4, 8, 3, 7, 2};
	double C[] = {12, 5, 2, 5, 23, 65, 2, 0, 2, 32};
	double D[] = {1, 2, 5, 3, 9, 2, 8, 4, 6, 3};
	double E[] = {54, 3, 22, 6, 2, 66, 9, 0, 0, 122};


	//Сортировка массива А
	file << "Selection Sotr" << "\n";
	for (int i = 0; i < len; i++)
	{
		file << A[i] << "   ";
	}
	file << "\n";
	SelectionSort(A, len);
	for (int i = 0; i < len; i++)
	{
		file << A[i] << "   ";
	}
	file << "\n";
	file << "\n";




	//Сортировка массива B
	file << "Bubble Sort" << "\n";
	for (int i = 0; i < len; i++)
	{
		file << B[i] << "   ";
	}
	file << "\n";
	BubbleSort(B, len);
	for (int i = 0; i < len; i++)
	{
		file << B[i] << "   ";
	}
	file << "\n";
	file << "\n";



	//Сортировка массива C
	file << "Insertion Sort" << "\n";
	for (int i = 0; i < len; i++)
	{
		file << C[i] << "   ";
	}
	file << "\n";
	InsertionSort(C, len);
	for (int i = 0; i < len; i++)
	{
		file << C[i] << "   ";
	}
	file << "\n";
	file << "\n";



	//Сортировка массива D
	file << "Quick Sort" << "\n";
	for (int i = 0; i < len; i++)
	{
		file << D[i] << "   ";
	}
	file << "\n";
	QuickSort(D, 0, len - 1);
	for (int i = 0; i < len; i++)
	{
		file << D[i] << "   ";
	}
	file << "\n";
	file << "\n";



	//Сортировка массива E
	file << "Shell Sort" << "\n";
	for (int i = 0; i < len; i++)
	{
		file << E[i] << "   ";
	}
	file << "\n";
	ShellSort(E, len);
	for (int i = 0; i < len; i++)
	{
		file << E[i] << "   ";
	}
	file << "\n";
	file << "\n";



	//Тестирование больших массивов, заполненных рандомно
	//со снятием временных показателей
	Tests(10000, "Test10000.txt");
	Tests(20000, "Test20000.txt");
	Tests(30000, "Test30000.txt");
	Tests(40000, "Test40000.txt");

	system("pause");
}
// sortirovka.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <conio.h>

int _tmain(int argc, _TCHAR* argv[])
{
	
	int n; // Число элементов массива
	int *A;
	printf("n="); scanf("%d", &n);
	A=new int[n];
	for(int i=0; i<n; i++)
	{
		// rand() возвращает целое псевдослучайное число в интервале 0..32767
		A[i]=rand() % 10; //- 50; // -50..50
		printf("%d  ", A[i]);
	}
	// Сортировкка методом прямого выбора
	for(int i=0; i<n-1; i++)
	{
		// i индекс элемента с которого начинается массив в котором ищем минимум
		int min=A[i], imin=i;
		for(int j=i+1; j<n; j++)
			if (A[j]<min) // i-ый элемент сравниваем со всеми последующими
			{
				min=A[j]; imin=j;
			}
		// Меняем элементы местами
		if (i!=imin) {
			A[imin]=A[i];
			A[i]=min;
		}
	}
	printf("\n\n");
	for(int i=0; i<n; i++)
	{
		
		printf("%d  ", A[i]);
	}
	delete [] A; // Освобождение памяти
	_getch();
	return 0;
}


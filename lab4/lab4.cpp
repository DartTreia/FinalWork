#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int A[20];
	int B[10][10];
	//Задание А
	printf("Task A:\n\n");

	printf("All elements: ");
	for (int i = 0; i < 20; i++) {
		A[i] = -50+rand()%100;
		printf("%d  ", A[i]);
	}
	printf("\n\nPositive elements: ");
	for (int i = 0; i < 20; i++) {
		if(A[i]>0)
		printf("%d  ", A[i]);
	}

	printf("\n\nNegative elements: ");
	for (int i = 0; i < 20; i++) {
		if (A[i] < 0)
			printf("%d  ", A[i]);
	}

	//Задание Б
	printf("\n\nTask B:\n\n");

	printf("All elements:\n");
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			B[i][j] = -50 + rand() % 100;
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (int i = 0; i < 10; i++) {
		float srzn = 0.0;
		for (int j = 0; j < 10; j++) {
			srzn+=(float)B[j][i];
		}
		srzn /= 10.0;
		printf("Middle value of %d column: %.1f\n", (i + 1), srzn);
	}
	//Доп задание
	int sumDop = 0;
	for (int i = 0; i < 10; i++) {
		for (int j = i; j < 10; j++) {
				sumDop += B[i][j];
			
		}
	}
	printf("\nSum of elements main diagonal and above it = %d", sumDop);
	return 1;
}
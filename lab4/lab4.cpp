#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {

	int AL[20];

	int B[10][10];

	//Задание А
	printf("Task A:\n\n");

	printf("All elements: ");

	for (int j = 0; j < 20; j++) {
		AL[j] = -50+rand()%100;
		printf("%d  ", AL[j]);
	}
	printf("\n\nPositive elements: ");
	for (int j = 0; j < 20; j++) {
		if(AL[j]>0)
		printf("%d  ", AL[j]);
	}

	printf("\n\nNegative elements: ");
	for (int j = 0; j < 20; j++) {
		if (AL[j] < 0)
			printf("%d  ", AL[j]);

	}

	//Задание Б
	printf("\n\nTask B:\n\n");

	printf("All elements:\n");

	for (int j = 0; j < 10; j++) {
		for (int i = 0; i < 10; i++) {

			B[i][j] = -50 + rand() % 100;
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (int i1 = 0; i1 < 10; i1++) {
		float srzn = 0.0;
		for (int j = 0; j < 10; j++) {
			srzn+=(float)B[j][i1];
		}
		srzn /= 10.0;
		printf("Middle value of %d column: %.1f\n", (i1 + 1), srzn);
	}
	//Доп задание
	int sumDop = 0; //перменная для хранения результата!

	for (int i1 = 0; i1 < 10; i1++) {
		for (int j = i; j < 10; j++) {
				sumDop += B[i1][j];
			
		}
	}
	printf("\nSum of elements main diagonal and above it = %d", sumDop);
	return 1;
}
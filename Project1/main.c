#include "hash.h"
#include <stdio.h>

int main(void) {
	//initialize values
	int hashTable[11];
	int input[] = { 764, 35954, 8683, 41, 11004, 1362, 77, 1, 448, 118, 5507 };
	int M = 11;
	int R = 7;

	//call hashInit
	hashInit(hashTable, input, M, R);

	//print hashTable
	for (int i = 0; i < M; i++)
		printf("%d ", hashTable[i]);

	printf("\n");

	return 0;
}
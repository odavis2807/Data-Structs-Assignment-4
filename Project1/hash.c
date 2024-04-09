#include <stdio.h>

//initializes hash table and stores hashed values
void hashInit(int* hashTable, int* input, int M, int R) {
    //initialize hash table
    for (int i = 0; i < M; i++) {
        hashTable[i] = -1;
    }

    //iterate through table
    for (int j = 0; j < M; j++) {
        //record input, index and h2
        int key = input[j];
        int index = h1(key, M);
        int h2Val = h2(key, R);

        //iterate until free spot is found
        int i = 0;
        while (hashTable[index] != -1) {
            index = (h1(key, M) + (h2Val * i)) % M;
            i++;
        }
        //store address in index
        hashTable[index] = key;
    }
}
//h1 function
int h1(int k, int M) {
	return (k % M);
}
//h2 function
int h2(int k, int R) {
	return (R - (k % R));
}
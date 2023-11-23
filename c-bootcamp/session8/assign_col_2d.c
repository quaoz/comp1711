#include <stdio.h>

void printColumn(int a[][4], int colIndex, int rows) {
	for (int i = 0; i < rows; ++i) {
		printf("%d\n", a[i][colIndex]);
	}
}

void changeColumn(int array[][4], int colIndex, int rows, int newValue) {
	for (int i = 0; i < rows; ++i) {
		array[i][colIndex] = newValue;
	}
}

int main() {
	int array1[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

	int colIndex = 2;
	int newValue = 10;

    printf("Before change:\n");
	printColumn(array1, colIndex, 3);

	changeColumn(array1, colIndex, 3, newValue);
	
    printf("After change:\n");
    printColumn(array1, colIndex, 3);

	return 0;
}

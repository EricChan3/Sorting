#include <stdio.h>
#include <stdlib.h>

void bubbleSortAsc(int *data, int n) {

	int i, j, temp;

	for (i = n - 1; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (data[j] > data[j + 1]) {
				temp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = temp;
			}
		}
	}

}

void bubbleSortDesc(int *data, int n) {

	int i, j, temp;

	for (i = n - 1; i > 0; i--) {
		for (j = 0; j < i; j++) {
			temp = data[j + 1];
			data[j + 1] = data[j];
			data[j] = temp;
		}
	}

}

int main(void) {

	int i, data[] = {-1, 0, 5, 0, 45, 66, 22};
	int n = (int)(sizeof(data)/sizeof(data[0]));

	printf("Original = ");
	for (i = 0; i < n; i++) {
		printf("%d ", data[i]);
	}

	bubbleSortAsc(data, n);
	
	printf("\nNormal bubble sorting:\n");
	printf("Sorted = ");
	for (i = 0; i < n; i++) {
		printf("%d ", data[i]);
	}

	bubbleSortDesc(data, n);

	printf("\nReverse bubble sorting:\n");
	printf("Sorted = ");
	for (i = 0; i < n; i++) {
		printf("%d ", data[i]);
	}

	return 0;

}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int i, j;
	int arr[10][10] = { 0 };

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10;j++) {
			scanf("%d ", &arr[i][j]);
		}
	}

	i = 1;
	j = 1;
	while (arr[i][j]<=2) {

		

		if (arr[i][j] == 2 || (i >= 8 && j >= 8) ) {
			arr[i][j] = 9;
			break;
		}
		arr[i][j] = 9;

		if (arr[i][j + 1]==1) {
			i++;
			continue;
		}
		j++;
		

	}

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
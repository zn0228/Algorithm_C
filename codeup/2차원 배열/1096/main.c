#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n, x, y, i, j;
	int arr[19][19] = {0};

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		arr[x - 1][y - 1] = 1;
	}

	for (i = 0; i < 19; i++) {
		for (j = 0; j < 19; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");

	}




	return 0;
}
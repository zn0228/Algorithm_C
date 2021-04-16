#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int w, h, n, x, y, i, j, a, l, d;
	int arr[100][100] = { 0 };

	scanf("%d %d", &w, &h);

	scanf("%d", &n);


	for(a = 1; a <= n; a++ ) {

		scanf("%d %d %d %d", &l, &d, &x, &y);
		x = x - 1, y = y - 1;

		for (i = 1; i <= l; i++) {
			if (d == 0) arr[x][y] = 1, arr[x][y + i-1] = 1;
			else arr[x][y] = 1, arr[x + i-1][y] = 1;
		}
	}


	for (i = 0; i < w; i++) {
		for (j = 0; j < h; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}
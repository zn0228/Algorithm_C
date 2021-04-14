#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {


	int arr[1000000];
	int i, n, min, max;
	max = -1000000;
	min = 1000000;

	scanf("%d", &n);


	for (i = 0; i < n; i++) {

		scanf("%d", &arr[i]);
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {

			min = arr[i];

		}


	}
	printf("%d %d", min, max);



	return 0;
}
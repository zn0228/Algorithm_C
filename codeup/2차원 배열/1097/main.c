#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int n, x, y, i, j,a;
	int arr[19][19] = {0};
	
	//배열 입력
	for (i = 0; i < 19; i++) {
		for (j = 0; j < 19; j++) {
			scanf("%d", &arr[i][j]);
		}
	}

	scanf("%d", &n); //십자뒤집기 횟수 입력

	
	//십자 뒤집기 
	for (a = 0; a < n; a++) {
		scanf("%d %d", &x, &y); 

		for (j = 0; j < 19; j++) {

			if (arr[x - 1][j] == 0) arr[x - 1][j] = 1;
			else arr[x - 1][j] = 0; //x값과 열값이 같은 행에 십자 뒤집기
		}
			
			for (i = 0; i < 19; i++) {

					if (arr[i][y-1] == 0) arr[i][y-1] = 1;
					else arr[i][y-1] = 0; //y값과 행같이 같은 열에 십자뒤집기

			}
	}

	// 뒤집어서 출력 
	for (i = 0; i < 19; i++) {
		for (j = 0; j < 19; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}






	return 0;
}
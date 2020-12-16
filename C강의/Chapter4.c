#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* 1부터 100까지 출력하기
int main(void) {

	for (int i = 0; i <= 100; i++) {

		printf("%d\n", i);

	}

	system("pause");
	return 0;

}
*/

//1부터 N까지의 합 출력하기
/*
int main(void) {

	int n, sum = 0;
	printf("n을 입력하세요. ");
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++) {

		sum = sum + i;

	}
	printf("%d\n", sum);
	system("pause");
	return 0;

}
*/

//무한 루프
/*
int main(void) {

	for (;;) {

		printf("Hello word\n");

	}
	system("pause");
} 
*/

/*
int main(void) {

	for (int i = 0; i <= 100; i--) {

		printf("Hello word\n");

	}
	system("pause");
}
*/

// -1이 입력될 때 까지 더하기
/*
int main(void) {

	int sum = 0;
	for (; 1;) {

		int x;
		scanf("%d", &x);
		if (x == -1) break;
		sum += x;
	}
	printf("%d\n", sum);
	system("pause");
}
*/

/*
* 구구단 출력하기 (For문)
int main(void) {

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {

			printf("%d * %d = %d\n", i, j, i * j);

		}

		printf("\n");

	}

	system("pause");

}
*/
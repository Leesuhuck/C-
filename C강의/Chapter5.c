#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* 특정문자 N번 반복하기
int main(void) {

	int n;
	char a;
	scanf("%d %c", &n, &a);
	while (n--) {

		printf("%c", a);

	}

	system("pause");
	return 0;
}
*/

//특정 숫자의 구구단 출력하기
/*
int main(void) {

	int n;
	scanf("%d", &n);
	int i = 1;
	while (i <= 9) {

		printf("%d * %d = %d\n", n, i, n * i);
		i++;

	}

	system("pause");
	return 0;
}
*/

//구구단 출력하기(while)
/*
int main(void) {

	int i = 1;

	while (i <= 9) {

		int j = 1;
		while (j <= 9) {

			printf("%d * %d = %d\n", i, j, i * j);
			j++;

		}

		printf("\n");
		i++;

	}

	system("pause");
	return 0;

}
*/
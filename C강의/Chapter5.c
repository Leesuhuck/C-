#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* Ư������ N�� �ݺ��ϱ�
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

//Ư�� ������ ������ ����ϱ�
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

//������ ����ϱ�(while)
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
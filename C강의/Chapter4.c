#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* 1���� 100���� ����ϱ�
int main(void) {

	for (int i = 0; i <= 100; i++) {

		printf("%d\n", i);

	}

	system("pause");
	return 0;

}
*/

//1���� N������ �� ����ϱ�
/*
int main(void) {

	int n, sum = 0;
	printf("n�� �Է��ϼ���. ");
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++) {

		sum = sum + i;

	}
	printf("%d\n", sum);
	system("pause");
	return 0;

}
*/

//���� ����
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

// -1�� �Էµ� �� ���� ���ϱ�
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
* ������ ����ϱ� (For��)
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
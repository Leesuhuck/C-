#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <climits>

//�迭�� ����� �ʱ�ȭ

/*
int main(void) {
	
	int a[10] = { 6, 5, 4, 3, 9, 8, 0, 1, 2, 7 };
	int i;
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);

	}
	system("pause");
	return 0;
}
*/

/*
int main(void) {

	int a[10] = { 0, };
	int i;
	for (i = 0; i < 10; i++) {
		printf("%d ", a[i]);

	}
	system("pause");
	return 0;
}
*/

/*
int main(void) {

	int a[10] = { 6, 5, 4, 3, 9, 8, 0, 1, 2, 7 };
	int i, maxValue = INT_MIN;
	// INT_MIN : �ִ밪�� ���ϱ� ���� ���� ���Ǵ� ���
	// int�� ������ �ּڰ��� ��ȯ�մϴ�.
	// INT_MAX���� ����Ҽ� �ֽ��ϴ�.
	for (i = 0; i < 10; i++) {

		if (maxValue < a[i]) maxValue = a[i];
	}

	printf("%d\n", maxValue);
	system("pause");
	return 0;

}
*/

/*C���� �⺻������ ��ü���� ���ڿ� �ڷ����� �������� �ʽ��ϴ�.
* ���ڿ� = ���� + �迭
* C++������ �̷��� �������� �˰��ֱ⶧���� �ڷ������� string�� ��������
*/

//���ڿ��� �迭
/*
int main(void) {

	char a[20];
	scanf("%s", &a);
	printf("%s\n", a);
	system("pause");
	return 0;

}
*/

/*
* C���� Ư�����ڸ� �ٷ� �ε����� �ٷ� �����ϴ°ſ� ���ؼ� �˾ƺ���
* ��� py���� Ư���ѹ��ڿ��� �ٷ� Ư���� �ε����� �����ϱⰡ c���� ��ٷӴ�
* c���� ���ڿ���ü�� �ٷ� ���������δ� �迭���·� ó���� �Ǳ⶧���� �ٷ� �̷���
* Ư���� �ε����� �����ؼ� ���� �ٲٰų� �Ҽ��ִ�.
*/

/*
int main(void) {

	char a[20] = "Hello world";
	a[4] = ', ';
	printf("%s\n", a);
	system("pause");
	return 0;

}
*/

//���ڿ��� ���Ե� '��'�� ���� ����ϱ�
/*
int main(void) {

	char a[] = "Hello world";
	int count = 0;

	for (int i = 0; i <= 10; i++) {
		
		if (a[i] == 'l') count++;

	}
	printf("%d\n", count);
	system("pause");
	return 0;

}
*/
#include <stdio.h>

//포인터의 개념
/*
int main(void) {

	int a	= 5;
	int *b	= &a;
	printf("%d\n", *b);
	system("pause");
	return 0;

}
*/

//배열 각 원소의 주소 값 출력하기
/*
int main(void) {

	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i;

	for (i = 0; i < 10; i++) {
		printf("%d\n", &a[i]);

	}

	system("pause");
	return 0;

}
*/

//다중포인터
/*
* 실제로 포인터를 여러개 겹치는 경우는 게임을 개발할때 난독화 기법으로도
* 간혹 사용된다. 
*/
/*
int main(void) {

	int a	= 5;
	int *b	= &a;
	int** c = &b;
	printf("%d\n", **c);
	system("pause");
	return 0;

}
*/

//배열과 포인터 서로 상호 치환 되어서 사용할수 있다.
/*
int main(void) {

	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *b = a;
	printf("%d\n", b[2]);
	system("pause");
	return 0;

}
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 어떠한 문장을 계속해서 반복하고자 한다면은 \
함수로 처리하는게 효과적이다.
/*
void dice(int input) {
	printf("내가 던진 주사위 : %d\n", input);
}

int main(void) {
	
	dice(3);
	dice(5);
	dice(1);
	system("pause");

}
*/

//더하기 함수 만들기
/*
int add(int a, int b) {

	return a + b;

}

int main(void) {

	printf("%d\n", add(10, 20));
	system("pause");
}
*/

/*
* 사칙연산
void calculator(int a, int b) {
	
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("\n");
}

int main(void) {

	calculator(10, 3);
	calculator(15, 2);
	calculator(18, 4);
	system("pause");
	return 0;
}
*/
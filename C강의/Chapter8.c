#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <climits>

//배열의 선언과 초기화

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
	// INT_MIN : 최대값을 구하기 위해 자주 사용되는 기능
	// int형 범위의 최솟값을 반환합니다.
	// INT_MAX또한 사용할수 있습니다.
	for (i = 0; i < 10; i++) {

		if (maxValue < a[i]) maxValue = a[i];
	}

	printf("%d\n", maxValue);
	system("pause");
	return 0;

}
*/

/*C언어는 기본적으로 자체적인 문자열 자료형을 제공하지 않습니다.
* 문자열 = 문자 + 배열
* C++에서는 이러한 불편함을 알고있기때문에 자료형에서 string을 제공해줌
*/

//문자열과 배열
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
* C언어에서 특정문자를 바로 인덱스에 바로 접근하는거에 대해서 알아본다
* 사실 py썬은 특정한문자열에 바로 특정한 인덱스로 접근하기가 c언어보다 까다롭다
* c언어는 문자열자체가 바로 내부적으로는 배열형태로 처리가 되기때문에 바로 이렇게
* 특정한 인덱스에 접근해서 값을 바꾸거나 할수있다.
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

//문자열에 포함된 'ㅣ'에 개수 출력하기
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
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

/*
* 문자열과 포인터
* 문자열은 말 그대로 문자들의 배열이다.
* 문자열은 컴퓨터 메모리 구조상에 마지막에 널값을 포함한다
* 널값은 문자열의 끝을 알리는 목적으로 사용됩니다.
* printf() 함수를 실행하면 컴퓨터는 내부적으로 넓값을 만날때 까지 출력한다.
* 문자열 형태로 포인터를 사용하면 포인터에 특정한 문자열의 주소를 넣게된다.
* 다음 코드는 "Hello World" 문자열을 읽기 전용으로 메모리 공간에 넣은 뒤에 그 위치를 처리한다.
* 이러한 문자열을 '문자열 리터럴' 이라고 한다. 이는 컴파일러가 알아서 메모리 주소를 결정한다.
*/
/*
int main(void) {

	char* a = "Hello World";
	printf("%s\n", a);
	system("pause");
	return 0;
}
*/

/*
* 포인터로 문자열을 선언했다고 하더라도 기존의 배열처럼 처리할 수 있습니다.
*/
/*
int main(void) {

	char* a = "Hello World";
	printf("%c\n", a[1]);
	printf("%c\n", a[4]);
	printf("%c\n", a[8]);
	system("pause");
	return 0;
}
*/

/*
* 문자열 입출력을 수행합니다.
* scanf() 함수는 공백을 만날 때 까지 입력 받지만 gets() 함수는 공백까지 포함하여 한줄을
* 입력 받습니다.
* 이 객체함수 같은경우 사실은 이 배열에 전체범위를 고려하지 않는다는 점에서 보안상에 문제가 있다.
* 실무에선 gets_s() 사용 매개변수 2개 들어간다.
*/
/*
int main(void) {

	char a[100];
	gets(a);
	printf("%s\n", a);
	system("pause");
	return 0;
}
*/

/*
* gets() 함수는 버퍼의 크기를 벗어나도 입력을 받아버립니다.
* C!! 표준부터는 버퍼의 크기를 철저히 지키는 gets_s() 함수가 추가 되었습니다.
* sizeof(a)는 a에다가 얼마만큼에 버퍼를 넣어줄것인지 정해줄수 있다.
* 기존에 사용햇던 gets() 함수는 버퍼의 크기를 벗어나도 입력을 받아버리니까
* 사용자가 임의대로 덮어쓰기를 해버릴수도 있는 취약점 때문에 gets_s를 사용한다.
* gets_s()를 이용하는 경우 범위를 넘으면 그 즉시 런타임(Runtime) 오류가 발생한다.
*/

int main(void) {

	char a[100];
	gets_s(a, sizeof(a));
	printf("%s\n", a);
	system("pause");
	return 0;
}


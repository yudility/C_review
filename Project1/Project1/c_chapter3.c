#include <stdio.h>

int main() {
	/*3장 데이터형과 변수*/
	/*데이터형
	 1) 기본 데이터형: c언어가 기본적으로 제공 - int char double
	 2) 파생 데이터형: 배열, 포인터와같이 기본형에서 파생되어 만들어진 것
	 3) 사용자 정의형: 구조체, 열거체, 공용체 등 프로그래머가 직접 정의한 것
	 
	 3장에서는 기본 데이터형에 대해 배운다.*/

	 /*기본데이터형
	  1) 문자형: char
	  2) 정수형: short, int, long, (long long)
	  3) 실수형: float, double, (long double)

	  c언어가 제공하는 데이터형의 크기는 플렛폼에 따라 다르다.
	  ex) int 형의 경우 16비트 운영체제에서는 2바이트, 32비트나 64비트 운영체제의 경우 4바이트이다.

	 */

	int num;
	float f;
	double d;

	printf("short형의 바이트 크기:%d\n", sizeof(short)); //sizeof 연산자로 데이터형의 바이트를 구할 수 있다.
	printf("char형의 바이트 크기:%d\n", sizeof(char));
	printf("int형의 바이트 크기:%d\n", sizeof(num)); //sizeof(변수명)도 가능
	printf("long형의 바이트 크기:%d\n", sizeof(long));
	printf("float형의 바이트 크기:%d\n", sizeof f);
	printf("double형의 바이트 크기:%d\n", sizeof d); //sizeof 변수명 도 가능. 변수의 바이트 크기를 구할 수 있다.
	
	/* 정수형의 크기와 유효범위 (기억해둘것)
	 1) 부호 있는 정수형 
	 - char : -128 ~ 127 
	 - short: -32768 ~ 32767 
	 2) 부호 없는 정수형
	 - unsigned char : 0~255
	 - unsigned short : 0~65535
	 
	 * 정수의 2진표현
	   컴퓨터 시스템에서는 음수를 나타내기위해 2의보수를 사용.
	   음수를 2의보수로 나타내면 부호비트를 신경쓰지않고 덧셈이나 뺄셈을 할 수 있다.

	*/

	return 0;


	 }

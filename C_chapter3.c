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
	   변수의 데이터형이 변수에 저장된 값의 의미를 결정한다. 
	   
	 

	*/
	//03월 24일 
	//결국 dev c++로 다시 갈아탔다. 개인적으로 c언어 코딩하기엔 이게 제일 편하다. 
	//visual stidio도 익숙해져야할텐데...
	// 양심에 찔리지만오늘은 꼼수 잔디심기라도...개강 일주차인데 녹강과 과제가 많다. 바쁘게 살아야겠다. 
	//-------------------
	
	
	//char형은 문자형 이지만 1바이트 크기의 정수형으로 사용될 수 있다.  
	char n = 127;
	
	printf("n = %d\n",n); //정수처럼 10진수 출력 가능
	printf("n+1 = %d\n" , n+1); // 덧셈 연산도 가능
	
	/*문자형(ASCII CODE)
	 - 가장 기본적인 문자 코드
	 - 0~31, 127은 출력할 수 없는 제어문자
	 - 32~ 126은 출력 가능한 문자 
	*/ 
	char ch, prev_ch, next_ch;
	
	printf("문자?")
	scanf("%c", &ch);
	
	prev_ch = ch - 1; //ch이전문자 
	next_ch = ch + 1; //ch다음문자 
	
	
	/* --
	 
	 
	 overflow(오버플로우): 정수형의 최대값보다 큰 값을 저장할 때 값이 넘쳐흘러 유효범위 내의 값으로 설정됨  
	 underflow(언더플로우): 정수형의 최소값보다 작은 값을 저장할 때 유효 범위 내의 값으로 설정됨 */
	 
	 
	 
	
	 
	/*
	*실수형의 2진표현
	 - 부동소수점 방식 --> 실수값에 오차가 생길 수 있다. (반올림때문) 
	 - 지수, 가수 부분으로 나누어 2진 데이터로 저장
	 - 실수의 정밀도는 실수의 가수 부분에 의해 결정됨 --> 유효숫자(수치해석과 연결해서 공부하자) 
	 - 실수의 범위는 지수 부분에 의해 결정됨 
	 */
	 
	 
	return 0;


	 }

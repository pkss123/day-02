#include <stdio.h>


int main() {

	/*
		\n \t \b \r : 커서 위치 조절
		\" \\ : " , \ 기호를 출력
	*/

	/*
		서식문자
		printf() 함수에서 데이터 출력 형식을 사용자가 지정할 때 사용
		큰따옴표 바깥쪽에 있는 데이터를 큰 따옴표 안쪽으로 집어넣을 자리 지정
		
		정수	: %d
		실수	: %f
		문자	: %c -> 1byte(알파벳/숫자/특수문자 1글자)
		문자열	: %s -> 2byte(알파벳/숫자/특수문자 2글자 이상 + 한글)
	*/

	//printf("10 + 10 = 20\n");
	//printf("%d + %d = %d\n", 10, 10, 20);
	//printf("%d + %d = 20\n", 10, 10, 20); errorcode
	//printf("%d + %d = %d\n", 10, 10); error code
	/* 서식문자의 개수와 데이터의 개수는 일치해야 한다 */
	/* 서식문자에 연산식을 넣을 수 있다 - 연산 결과가 출력 */
	
	//printf("%d + %d = %d\n", 10, 10, 10 + 10);

	/*
		%f에 실수값을 넣으면 기본적으로 소수점 아래 여섯자리까지 출력
		%와 f사이에 .숫자를 넣어서 소수점 아래 숫자만큼의 자리까지 출력
	*/

	//printf("%f + %f = %f\n", 1.2, 2.4, 1.2 + 2.4);
	//printf("%.1f +%.1f = %.1f\n", 1.2, 2.4, 1.2 + 2.4);
	//printf("%.2f + %.2f = %.2f\n", 1.2222, 2.4, 1.2222 + 2.4);
	//printf("%.2f + %.2f = %.2f\n", 5.555, 6.6666, 5.555 + 6.6666);
	
	/* 반올림의 경우 .숫자를 이용하면 정확한 결과를 출력하지 못한다 */

	//printf("%c %c", 't', 's');
	//printf("%c\n", "ㄱ");		error code
	//printf("%c\n", "test");	error code

	//printf("%s %s\n", "ㄱ", "test");
	//printf("%s\n", 'c');	error code : 동작 X

	//printf("%d %f %c %s", 10, 1.111, 'c', "test");

	/* %와 알파벳 사이에 정수값을 넣어서 출력 공간 지정이 가능 */

	//printf("%10d\n", 123456);

	//printf("이름 : %s, 나이 : %d세, 성별 : %c, 사는곳 : %s\n", "박영민", 23, 'm', "대구");

	/*
		메모리(RAM)
		프로그램이 동작하는 공간
		저장 장치에 들어있는 데이터에 특정 작업을 위해 데이터를 복사하는 공간
		(ex> 8GB -> 8,182MB ->8,388,608KB -> 8,589,934,592byte)
		
		자료형
		데이터를 저장하는 공간(변수)을 만들 때 들어갈 자료의 형식 지정
		정수 : int		-> 4byte(메모리 용량)
		실수 : double	-> 8byte(메모리 용량)
		문자 : char		-> 1byte(메모리 용량)
	
		상수&변수
		 상수 : 메모리에 저장되는 데이터 중 값 변경할 수 없는 데이터
				위치를 찾을 수 없는 데이터
		 변수 : 메모리에 데이터를 저장할 때 자료형을 사용하여 데이터를 저장하는 공간을 만들고
				이름을 붙여서 사용 -> 이름을 이용하여 해당 공간에 접근하여 값 변경 가능
				주소값을 이용하여 메모리 내부의 저장된 위치를 찾을 수 있는 공간

		 * 효율적인 메모리 관리를 위해 변수를 사용한다
	
		변수명 작성 규칙
		 변수의 이름은 영문자, 숫자, 밑줄(_)만 사용 가능
		 변수명의 시작은 영문자, 밑줄(_)만 사용 가능(숫자로 시작 X)
		 예약어는 사용 불가능(ex. printf 라는 이름의 변수 생성 X)
		 영문자는 대소문자를 구별(ex. Name, name 둘은 서로 다른 변수)
		 변수명 중간에 공백(띄어쓰기) 사용 불가능 -> 밑줄(_)로 대체
		 (ex. a_1 0  /  a 1 X)
		 자료형이 다르다고 해서 같은 이름을 사용할 수 없음
		 (ex. int a; double a; 동시 사용 X)
	*/

	/* 상수값 10을 세번 사용 -> 메모리에 10이라는 데이터가 세 번 저장*/

	//printf("정수 : %d\n", 10);
	//printf("정수 : %d\n", 10);
	//printf("정수 : %d\n", 10);

	/* 변수 a를 만들고 a에 10이라는 데이터를 저장 -> 변수를 세 번 사용 
		메모리에는 10이란 데이터가 저장된 변수 a 하나만 존재 */

	//int a = 10;
	//printf("정수 : %d\n", a);
	//printf("정수 : %d\n", a);
	//printf("정수 : %d\n", a);

	//int a;	// 변수 선언(생성)
	//printf("a : %d\n", a);	error code : a변수가 선언된 후에 초기화 되지 않음
	//a = 0;	// 변수 초기화(데이터 저장)
	//printf("a : %d\n", a);		// 초기화 된 변수는 상수값처럼 사용
	//a = 10; // 변수에 있는 데이터는 언제든지 변경할 수 있다
	//printf("a : %d\n", a);

	//int age = 23; // 변수 선언과 동시에 초기화
	//printf("나는 %d살 입니다\n", age);

	//double test = 3.14;
	//printf("원주율 : %.2f\n", test);

	//char a = 'A'; // 단일 문자는 일반 변수처럼 선언
	//printf("%c구역\n", a);

	//char hi[10] = "hello"; // 문자열을 변수에 넣을때는 총 문자의 개수 + 1 이상의 칸을 지정
	//printf("%s~", hi);

	//hi = "yo man";	error code : 문자열 데이터는 대입연산자(=)를 사용하여 변경 X

	//int data = 1;
	//double data = 1.111; error code : 서로 다른 변수형으로 같은 이름의 변수 생성 X

	//int a1, a2, a3;				// 동일한 자료형을 가진 여러 변수를 한번에 선언할 수 있다
	//a1 = 1, a2 = 2, a3 = 3;		// 여러 변수에 데이터를 한번에 넣을 수 있다
	//printf("%d %d %d\n", a1, a2, a3);

	//int b1 = 10, b2 = 20;		// 동일한 자료형이면 여러 변수를 선언과 동시에 초기화 가능
	//printf("%d %d\n", b1, b2);

	//int a = 1 + 2;	// 변수에 연산식을 이용한 데이터 입력 가능
	//int b = a;		// 다른 변수에 있는 데이터를 변수에 입력 가능
	//printf("%d %d\n", a, b);

	int a = 1;
	double b = 2.22;
	char c = 'a';
	printf("%d %.2f %c\n", a, b, c);
}
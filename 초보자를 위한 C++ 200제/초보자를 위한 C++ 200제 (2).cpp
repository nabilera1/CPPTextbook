

정보문화사 http://www.infopub.co.kr
저자 블로그 http://codingcoding.tistory.com
저자 정오표 https://codingcoding.tistory.com/850

깃허브 : https://github.com/nabilera1/CPPTextbook/tree/master/%EC%B4%88%EB%B3%B4%EC%9E%90%EB%A5%BC%20%EC%9C%84%ED%95%9C%20C%2B%2B%20200%EC%A0%9C
: stash - commit - push
* 스태시 : 요술 책갈피, 안전하게 보관하기, 임시로 저장
* https ://opentutorials.org/module/2676/15332


016
학습내용 : char 이해하기;
아스키 코드 : 컴퓨터 문자
 (특수문자, 숫자, 대문자, 소문자 등)

#include <iostream>

using namespace std;

int main()
{
	char ch1 = 'c';    // c, 99
	char ch2 = 200;    // char 변수의 범위를 초과하는 값 입력 -> 보수 취함 
	//128-200=-72, char 최소 범위 -127에서 72 윗 단계인 -56이 출력

	unsigned char ch3 = 'c';
	unsigned char ch4 = 200;

	printf("char ch1 = %c, %d\n", ch1, ch1);
	printf("char ch2 = %c, %d\n", ch2, ch2);// -56에 대한 아스키 값이 없어 ? 출력
	printf("char ch3 = %c, %d\n", ch3, ch3);
	printf("char ch4 = %c, %d\n", ch4, ch4);
	//cout << ch1 << "  " << ch1 << endl;
	//cout << ch2 << "  " << ch2 << endl;
	//cout << ch3 << "  " << ch3 << endl;
	//cout << ch4 << "  " << ch4 << endl;
	return 0;
};

/*
char ch1 = c, 99
char ch2 = ? -56
char ch3 = c, 99
char ch4 = ? 200
*/





017
학습내용 :string;

#include <iostream>
#include <string>
//C++ 표준 라이브러리에는 문자열을 편리하고 안전하게 사용할 수 있는
//string이 있다. c언어라면 char 배열을 사용했겠지만
//string은 문자열 처리/가공에 더 효율적이다.
using namespace std;

int main()
{
	string my_country = "korea";
	string my_job = "developer";

	cout << "Country : " << my_country << endl;
	cout << "Job : " << my_job << endl;

	string my_info = my_country + ", " + my_job; //문자열 합치기

	cout << "My Info : " << my_info << endl;

	return 0;
};




018
학습내용 : 정수형 변수 이해하기;
#include <iostream>

using namespace std;

int main()
{
	int positive = 100;
	int negative = -200;
	int ascii_value = 'A';  //아스키 코드 값 65가 대입

	cout << "양수 값 : " << positive << endl;
	cout << "음수 값 : " << negative << endl;
	cout << "아스키 값 : " << ascii_value << endl;

	return 0;
};

//요즘 컴퓨터는 8bit를 1byte로 다루며, 32비트 또는 64비트 운영체제가 일반적.
//char<short<long<long long 순서로 byte 크기가 커지지만,
//컴퓨터 아키텍처에 따라 byte 크기가 달라질 수도 있다.
//프로그램 이식성을 고려하면 int 대신 int8, int32, int64 등으로
//변수의 크기를 OS가 아닌, 소스 코드에서 미리 결정하기도 한다.
//
//int 자료형의 범위  -2,147,483,648 ~ +2,147,483,647
//unsigned 0~4,294,967,295








019
학습내용 : 실수형 변수 이해하기;
#include <iostream>

using namespace std;

int main()
{
	double pi_d = 3.14;
	float pi_f = 3.14f;

	cout << "pi_d = " << pi_d << endl;
	cout << "pi_f = " << pi_f << endl;

	return 0;
};

//double : 8byte , -1.7E308 ~ +1.7E308, 소수점 15자리 표현
//float : 4byte , -3.4E38 ~ +3.4E38, 소수점 7자리 표현
//double과 float를 함께 사용하면 오버 플로우, 언더 플로우



018
학습내용 : 정수형 변수 이해하기;
#include <iostream>





018
학습내용 : 정수형 변수 이해하기;






018
학습내용 : 정수형 변수 이해하기;






018
학습내용 : 정수형 변수 이해하기;






018
학습내용 : 정수형 변수 이해하기;






018
학습내용 : 정수형 변수 이해하기;






018
학습내용 : 정수형 변수 이해하기;
#include <iostream>
#include <iostream>
#include <iostream>
#include <iostream>
#include <iostream>
#include <iostream>


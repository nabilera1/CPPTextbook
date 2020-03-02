

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



020
학습내용 : 논리형 bool 변수 이해하기;
#include <iostream>

using namespace std;

int main()
{
	int x = 10;
	int y = 6;

	bool is_true = false;

	if (x > y)
	{
		is_true = true;
	}
	else
	{
		is_true = false;
	}

	if (is_true == true)
	{
		cout << "x는 y보다 큽니다" << endl;
	}
	else
	{
		cout << "x는 y보다 작습니다" << endl;
	}

	return 0;
};






021
학습내용 : 대입연산자 이해하기;
#include <iostream>

using namespace std;

int main()
{
	int x = 1;
	int y = 9;

	int z = x + y;

	double i = 1.2;
	double j = 2.3;

	double k = i + j;

	cout << "x + y = " << z << endl;
	cout << "i + j = " << k << endl;

	return 0;
};

//왼쪽에 위치하는 변수 L-value, = 대입연산자



022
학습내용 : 부호 연산자 이해하기;
#include <iostream>

using namespace std;

int main()
{
	int x = 1;
	int y = -1;
	int z = -2;

	cout << "1 + (-1) = " << x + y << endl;
	cout << "-1 + -2 = " << y + z << endl;

	return 0;
};





023
학습내용 : 증감 연산자 이해하기;
#include <iostream>

using namespace std;

int main()
{
	int x = 1;

	cout << "x = " << x++ << endl;
	cout << "x = " << x++ << endl;
	cout << "x = " << ++x << endl;
	cout << "x = " << x-- << endl;
	cout << "x = " << x-- << endl;
	cout << "x = " << --x << endl;

	return 0;
};




024
학습내용 : 관계 연산자 이해하기;

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string publisher = "정보문화사";
	string language = "C++";

	int x = 10;
	int y = 10;

	if (publisher != language)
		cout << "두 문장은 같지 않습니다." << endl;
	else
		cout << "두 문장은 같습니다." << endl;

	if (x >= y)
		cout << "x는 y보다 크거나 같습니다" << endl;
	else
		cout << "x는 y보다 크거나 같지 않습니다" << endl;

	if (x <= 20)
		cout << "x는 20보다 작거나 같습니다" << endl;
	else
		cout << "x는 20보다 작거나 같지 않습니다" << endl;

	return 0;
};







025
학습내용 : 논리 연산자 이해하기;
#include <iostream>

using namespace std;

int main()
{
	int x = 10;
	int y = 20;

	bool is_x = true;
	bool is_y = false;

	if (is_x == true && is_y == true)
		cout << "is_x && is_y = " << "true" << endl;
	else
		cout << "is_x && is_y = " << "false" << endl;

	if (x == 10 || is_x == false)
		cout << "x가 10이거나 is_x가 true입니다" << endl;
	else
		cout << "x는 10이 아니며 is_x도 false가 아닙니다" << endl;

	if (!is_y)
		cout << "is_y 원래 값은 false입니다" << endl;
	else
		cout << "is_y 원래 값은 true입니다" << endl;

	return 0;
};






026
학습내용 : 조건부 삼항 연산자 이해하기;
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int x = 1;
	int y = 2;
	int z = 0;

	z = x > y ? x : y;

	cout << "x와 y중 더 큰 값은 : " << z << endl;

	return 0;
};



027
학습내용 : 쉼표 연산자 이해하기;

#include <iostream>

using namespace std;

int main()
{
	int goguryeo = 37, baekjae = 18, silla = 57;

	printf("삼국 건국연도\n");
	printf("고구려 bc%d년, 백제 bc%d년, 신라 bc%d년\n", goguryeo, baekjae, silla);

	return 0;
};

//한 라인에 코드가 길어지면 가독성의 문제가 있으므로 신중히 판단




028
학습내용 : 비트 연산자 이해하기;
//컴퓨터는 0과 1, 두 가지 신호로 동작한다.
//8비트는 1바이트, 256가지를 표현할 수 있다.
#include <iostream>
#include <bitset>
//char, int로 비트 연산을 하는 것보다 bitset 컨테이너로 사용하자.
using namespace std;

int main()
{
	bitset<8> bit1; //변수를 8비트로 지정
	bit1.reset(); //0000 0000
	bit1 = 127;  //0111 1111

	bitset<8> bit2;
	bit2.reset();
	bit2 = 0x20; // 32, 0010 0000


	bitset<8> bit3 = bit1 & bit2;
	bitset<8> bit4 = bit1 | bit2;
	bitset<8> bit5 = bit1 ^ bit2;
	bitset<8> bit6 = ~bit1;
	bitset<8> bit7 = bit2 << 1;
	bitset<8> bit8 = bit2 >> 1;

	cout << "bit1 & bit2 : " << bit3 << ", " << bit3.to_ulong() << endl;
	cout << "bit1 | bit2 : " << bit4 << ", " << bit4.to_ulong() << endl;
	cout << "bit1 ^ bit2 : " << bit5 << ", " << bit5.to_ulong() << endl;
	cout << "~bit1: " << bit6 << ", " << bit6.to_ulong() << endl;
	cout << "bit2 << 1: " << bit7 << ", " << bit7.to_ulong() << endl;
	cout << "bit2 >> 1: " << bit8 << ", " << bit8.to_ulong() << endl;

	return 0;
};

//
//bit1& bit2 : 00100000, 32
//bit1 | bit2 : 01111111, 127
//bit1 ^ bit2 : 01011111, 95
//~bit1 : 10000000, 128
//bit2 << 1 : 01000000, 64
//bit2 >> 1 : 00010000, 16



029
학습내용 : 캐스트 연산자 이해하기;

#include <iostream>

using namespace std;

int main()
{
	int x = 2;
	double y = 4.4;

	int i = static_cast<int>(y / x);
	int j = (int)y / x;
	double k = y / x;

	cout << "4.4 / 2 = (static_cast<int>) " << i << endl;
	cout << "4.4 / 2 = (int) " << j << endl;
	cout << "4.4 / 2 = " << k << endl;

	return 0;
};


//c언어 스타일의 형변환은 아무 조건도 없이 무작정 변경하는 단점
//변경할 수 없을 때도 변경을 시도하여 문제가 발생하기도 합니다.
//C++에서는 4가지 자료형 변환 연산자를 제공
//static_cast<> : 가장 기본적인 캐스트 연산 방법
//dynamic_cast<> : 객체지향 언어의 다형성을 이용하여 모호한 타입 캐스팅 오류를 막아줌
//const_cast<> : 자료형이 갖고 있는 상수 속성 제거
//reinterpret_cast<> : 포인터 타입끼리 변환할 수 있게 해줌



030
학습내용 : 명시적 변환 이해하기;
//static_cast<> 를 이용하지 않고 명시적으로 자료형을 변경하는 방법
#include <iostream>

using namespace std;

int main()
{
	int number1 = 65;
	double number2 = 23.4;

	int number3 = int(number2);
	double number4 = double(number1 / number2);

	char ch = char(number1);

	cout << "number1 : " << number1 << endl;
	cout << "number2 : " << number2 << endl;
	cout << "number3 : " << number3 << endl;
	cout << "number4 : " << number4 << endl;
	cout << "ch : " << ch << endl;

	return 0;
}


	//number1: 65
	//number2 : 23.4
	//number3 : 23
	//number4 : 2.77778
	//ch : A




031
학습내용 : sizeof 이해하기;

#include <iostream>

using namespace std;

class Temp {
	int no;      //4byte
	bool is_on;  //1byte
};

int main()
{
	cout << "char 크기 : " << sizeof('p') << endl;    //1
	cout << "int 크기 : " << sizeof(10) << endl;      //4
	cout << "double 크기 : " << sizeof(10.0) << endl; //8
	cout << "클래스 크기 : " << sizeof(Temp) << endl; //8 ??

	return 0;
};

//데이터 버스는 한 번에 4바이트 데이터를 담아 이동
//4바이트 단위로 몇 번 움직이느냐에 따라 sizeof의 결과가 달라짐
//Temp는 2번 이동 필요하여 8byte가 됨.

//시스템 버스는 cpu, 메모리, 입력 장치, 출력 장치들끼리 데이터를 주고 받을 수 있도록 돕는다.




032
학습내용 : 중첩 조건문 이해하기;


#include <iostream>

using namespace std;

int main()
{
	int number1 = 100;
	int number2 = 6;

	if (number1 < number2)
		cout << "number2가 더 큽니다." << endl;
	else if (number1 > number2)
		cout << "number1이 더 큽니다." << endl;
	else
		cout << "number1과 number2는 같습니다." << endl;

	if (number2 < 7)
	{
		if (number2 > 3)
		{
			if (number2 == 4)
				cout << "number2은 4입니다" << endl;
			else if (number2 == 5)
				cout << "number2는 5입니다" << endl;
			else
				cout << "number2는 6입니다" << endl;
		}
		else
		{
			if (number2 == 3)
				cout << "number2는 3입니다" << endl;
			else if (number2 == 2)
				cout << "number2는 2입니다" << endl;
			else
				cout << "number2는 1이하 입니다" << endl;
		}
	}

	return 0;
};





033
학습내용 : 중첩 조건문으로 가장 큰 수 찾기;

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int number1 = 100;
	int number2 = 200;
	int number3 = 300;

	if (number1 > number2 && number1 > number3)
		cout << "가장 큰 수 number1 : " << number1 << endl;
	else if (number2 > number1 && number2 > number3)
		cout << "가장 큰 수 number2 : " << number2 << endl;
	else if (number3 > number1 && number3 > number2)
		cout << "가장 큰 수 number3 : " << number3 << endl;
	else
		cout << "찾을 수 없습니다." << endl;

	return 0;
}





034
학습내용 : for continue break 이해하기;


#include <iostream>

using namespace std;

int main()
{
	int number = 7;

	for (int i = 0; i < 10; i++)
	{
		if (i % 3 == 0)
			continue;
		else if (i == number)
			break;
		else
			cout << "현재 i 값 : " << i << endl;
	}

	return 0;
};


035
학습내용 : 순환문(for)으로 특정 문자 개수 구하기;

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = "The Jin state was formed in southern Korea by the 3rd century BC";

	char find = 'a';

	int size = str.size();
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (str[i] == find)
			count++;
	}

	cout << "문장의 a 개수는 " << count << "개 입니다." << endl;

	return 0;
}




036
학습내용 : for문으로 홀수, 짝수 찾기;


#include <iostream>

using namespace std;

int main()
{
	int data[10] = { 5, 19, 76, 3, 10, 89, 54, 43, 2, 17 };

	for (int i = 0; i < 10; i++)
	{
		if (data[i] % 2 == 0)
			cout << i << " : " << data[i] << "는 짝수입니다." << endl;
		else
			cout << i << " : " << data[i] << "는 홀수입니다." << endl;
	}

	return 0;
}


037
학습내용 : switch case break default 이해하기;

#include <iostream>

using namespace std;

int main()
{
	int number = 3;

	switch (number)
	{
	case 1:
		cout << "number 값은 1입니다." << endl;
		break;
	case 2:
		cout << "number 값은 2입니다." << endl;
		break;
	case 3:
		cout << "number 값은 3입니다." << endl;
		break;
	default:
		cout << "number 값을 알 수 없습니다." << endl;
		break;
	}

	return 0;
};






038
학습내용 : while continue break 이해하기;

#include <iostream>

using namespace std;

int main()
{
	int number = 0;

	while (number < 10)
	{
		number++;

		if (number % 3 == 0)
			continue;
		else
			cout << "number 값 : " << number << endl;
	}

	return 0;
};



039
학습내용 : do while continue break 이해하기;

#include <iostream>

using namespace std;

int main()
{
	int number = 0;

	do {
		number++;

		if (number % 3 == 0)
			continue;
		else
			cout << "number 값 : " << number << endl;

	} while (number < 10);

	return 0;
};



040
학습내용 : 구구단 출력하기;

#include <iostream>

using namespace std;

int main()
{
	int offset = 0;

	for (int i = 1; i <= 15; i += offset)
	{
		for (int j = 1; j <= 9; j++)
		{
			cout << i << " * " << j << " = " << i * j;

			for (int k = 0; k < offset; k++)
			{
				cout << "\t";
				cout << (i + k + 1) << " * " << j << " = " << (i + k + 1) * j;
			}

			cout << endl;
		}

		cout << endl;

		offset++;
	}

	return 0;
}






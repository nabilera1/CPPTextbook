C++는 C언어와 함께 마지막까지 살아 남을 언어로 꼽힙니다.
이 책은 C++개발자가 되기 위한 기본 지식을 먼저 소개합니다.
그리고 현업에서 유용하게 접목할 수 있는 C++11의 Algorithm 항목을 설명합니다.
소스를 직접 타이핑하고 겨로가를 확인하시기 바랍니다.

정보문화사 http://www.infopub.co.kr
저자 블로그 http://codingcoding.tistory.com
저자 정오표 https://codingcoding.tistory.com/850



C++를 공부하기 위해서는 컴파일러가 필요합니다.
소스코드가 문법에 맞는지 검사하고 실행 파일을 만들어 주는 역할을 합니다.

Visual Studio 2017에서 작성하였습니다.

Linux라면 KDevelop, Geany, Qt Creator를 선택하세요.

001
학습내용 : cout을 사용해 콘솔창에 글자를 출력합니다.
#include<iostream>
using namespace std;

int main()
{
	cout << "Hello, World" << endl;
	return 0;
}

002
학습내용 : 콘솔창에 원하는 숫자를 입력받고 출력합니다.

#include<iostream>

using namespace std;

int main()
{
	int number = 0;
	cin >> number;
	cout << "입력한 숫자는" << number << "입니다." << endl;
	return 0;
}

003
학습내용 : 값을 저장하는 변수 개념을 이해합니다.

#include<iostream>
using namespace std;

int main()
{
	int one = 1;
	int two = 2;
	int sum = one + two;
	cout << "1+2=" << sum << endl;
	return 0;
}


int : 정수
one : 변수이름
1 : 정수형 변수에 저장할 값

변수 이름 짓는 방법
프로그래머가 코딩할 때 자주 고민하는 것이 바로 이름 짓기입니다.
변수, 함수, 클래스 등의 이름

전통적인 방법
int nSize;
bool bRight;
double dVertex;

다른 방법
bool is_right;


004
학습내용 : 상수 배우기

#include<iostream>
using namespace std;

int main()
{
	const int GREAT_VICTORY_SALSU = 612;
	const int GREAT_VICTORY_GWIJU = 1019;

	cout << "고구려 살수대첩 연도 : " << GREAT_VICTORY_SALSU << "년" << endl;
	cout << "고려 귀주대첩 연도 : " << GREAT_VICTORY_GWIJU << "년" << endl;
	return 0;
}


상수 이름 짓는 방법
구글 권장 상수형 변수 이름 규칙은 k를 붙이는 것으로
클래스의 c와 구분하기 위해 발음이 비슷한 k를 권장하는 것이다.

PI라면 kPI
kSize, kJob, kMyYear



005
학습내용 : 사칙연산 배우기

#include<iostream>
using namespace std;

int main()
{
	int one = 1;
	int two = 2;
	int three = 3;
	int four = 4;

	cout << "1+3=" << one + three << endl;
	cout << "4-2" << four - two << endl;


	return 0;
}



006
학습내용 : 사칙연산 축약하기

#include<iostream>
using namespace std;

int main()
{
	int two = 2;
	int sum = 2;

	sum = sum + two;
	cout << "sum = " << sum << endl;
	sum += two;
	cout << "sum =" << sum << endl;

	sum = sum * 2;
	cout << "sum = " << sum << endl;
	sum *= 2;
	cout << "sum =" << sum << endl;
	return 0;
}




000
학습내용 : 상수 배우기

#include<iostream>
using namespace std;

int main()
{


	return 0;
}





000
학습내용 : 상수 배우기

#include<iostream>
using namespace std;

int main()
{


	return 0;
}





000
학습내용 : 상수 배우기

#include<iostream>
using namespace std;

int main()
{


	return 0;
}




000
학습내용 : 상수 배우기

#include<iostream>
using namespace std;

int main()
{


	return 0;
}





000
학습내용 : 상수 배우기

#include<iostream>
using namespace std;

int main()
{


	return 0;
}




000
학습내용 : 상수 배우기

#include<iostream>
using namespace std;

int main()
{


	return 0;
}





000
학습내용 : 상수 배우기

#include<iostream>
using namespace std;

int main()
{


	return 0;
}





000
학습내용 : 상수 배우기;

#include<iostream>
using namespace std;

int main()
{


	return 0;
}


000
학습내용 : 상수 배우기;

#include<iostream>
using namespace std;

int main()
{


	return 0;
}


000
학습내용 : 상수 배우기;

#include<iostream>
using namespace std;

int main()
{


	return 0;
}


000
학습내용 : 상수 배우기;

#include<iostream>
using namespace std;

int main()
{


	return 0;
}


000
학습내용 : 상수 배우기;

#include<iostream>
using namespace std;

int main()
{


	return 0;
}


000
학습내용 : 상수 배우기;

#include<iostream>
using namespace std;

int main()
{


	return 0;
}


000
학습내용 : 상수 배우기;

#include<iostream>
using namespace std;

int main()
{


	return 0;
}



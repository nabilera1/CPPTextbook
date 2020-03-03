

정보문화사 http://www.infopub.co.kr
저자 블로그 http://codingcoding.tistory.com
저자 정오표 https://codingcoding.tistory.com/850

깃허브 : https://github.com/nabilera1/CPPTextbook/tree/master/%EC%B4%88%EB%B3%B4%EC%9E%90%EB%A5%BC%20%EC%9C%84%ED%95%9C%20C%2B%2B%20200%EC%A0%9C
: stash - commit - push
* 스태시 : 요술 책갈피, 안전하게 보관하기, 임시로 저장
* https ://opentutorials.org/module/2676/15332


041
학습내용 : 피보나치 수열 이해하기;


#include <iostream>

using namespace std;

int main()
{
	int p = 0;
	int n = 0;
	int t = 0;

	for (int i = 1; i < 10; i++)
	{
		p = 0;
		n = 1;

		for (int j = 1; j <= i; j++)
		{
			cout << n << ", ";

			t = n;
			n += p;
			p = t;
		}

		cout << endl;
	}

	return 0;
}


//1,
//1, 1,
//1, 1, 2,
//1, 1, 2, 3,
//1, 1, 2, 3, 5,
//1, 1, 2, 3, 5, 8,
//1, 1, 2, 3, 5, 8, 13,
//1, 1, 2, 3, 5, 8, 13, 21,
//1, 1, 2, 3, 5, 8, 13, 21, 34,



042
학습내용 : 피라미드 출력하기;

       *
     * * *
   * * * * *
 * * * * * * *


#include <iostream>

using namespace std;

int main()
{
  int offset = 4;

  for (int i = 1, j = 0; i <= offset; i++, j = 0) //j를 다시 0으로
  {
	 for (int k = 1; k <= offset - i; k++) // 4-1 , 3칸 빈 공백
		   cout << "  ";

	 while (j != 2 * i - 1) //0 != (2*1-1), 0!=1 <-- true, 한번 출력
	 {
		   cout << "* ";
		   j++;
	 }

	 cout << endl;
  }

  return 0;
} 







000
학습내용 : floor, ceil;

#include <iostream>

using namespace std;

int main()
{
	cout << "소수점 무조건 버리기" << endl;
	cout << "floor(1.1) : " << floor(1.1) << endl;      //1
	cout << "floor(2.3) : " << floor(-2.3) << endl;     //-3
	cout << "floor(40.5) : " << floor(40.5) << endl;    //40
	cout << "floor(55.7) : " << floor(-55.7) << endl;   //-56
	cout << "floor(100.9) : " << floor(100.9) << endl;  //100 



	cout << "소수점 무조건 올리기" << endl;
	cout << "ceil(1.1) : " << ceil(1.1) << endl;      //2
	cout << "ceil(2.3) : " << ceil(-2.3) << endl;     //-2
	cout << "ceil(40.5) : " << ceil(40.5) << endl;    //41
	cout << "ceil(55.7) : " << ceil(-55.7) << endl;   //-55
	cout << "ceil(100.9) : " << ceil(100.9) << endl;  //101 

	return 0;
}



044
학습내용 :  round 이해하기;

#include <iostream>

using namespace std;

int main()
{
	cout << "반올림" << endl;
	cout << "round(1.1) : " << round(1.1) << endl;
	cout << "round(2.3) : " << round(-2.3) << endl;    //-2
	cout << "round(40.5) : " << round(40.5) << endl;
	cout << "round(55.7) : " << round(-55.7) << endl;  //-56
	cout << "round(100.9) : " << round(100.9) << endl;

	return 0;
}
//소수점 5 이상이면 올린다.
//음수의 경우 반올림이 의도하지 않은 값이 된다. -55.7 ==> -56
//즉 소수점 5이상을 가진 음수의 경우 원래의 값보다 작아진다.




045
학습내용 :  abs, fabs, pow 이해하기;

#include <iostream>

using namespace std;

int main()
{
	cout << "==절대값 구하기" << endl;  //absolute value
	cout << "-10의 절대값 " << abs(-10) << endl;     //10
	cout << "-5.72의 절대값 " << fabs(5.72) << endl; //float abs, 5.72
	//long 자료형의 경운 labs()

	cout << "==제곱수 구하기==" << endl;
	cout << "2의 2승 : " << pow(2, 2) << endl;  //4
	cout << "3의 4승 : " << pow(3, 4) << endl;  //81
	cout << "4의 6승 : " << pow(4, 6) << endl;  //4096
	cout << "8의 3승 : " << pow(8, 3) << endl;  //512

	return 0;
}









046
학습내용 : 몫과 나머지 연산 이해하기;
//%는 피연산자가 정수인 경우 사용 가능, double은 오류
#include <iostream>

using namespace std;

int main()
{
	double x = 5.7;
	int div1 = static_cast<int>(x / 5);      //1
	double mod1 = 5.7 - 5 * static_cast<int>(x / 5);   //0.7

	int y = 10;
	int div2 = static_cast<int>(y / 2);  //5
	double mod2 = y % 2;   //0

	cout << "5.7 / 5 = 몫 : " << div1 << ", 나머지 : " << mod1 << endl;
	cout << "10 / 2 = 몫 : " << div2 << ", 나머지 : " << mod2 << endl;

	return 0;
};








047
학습내용 :  제곱근;
#include <iostream>

using namespace std;
//sqrt 인자는 실수, 정수 모두 가능
int main()
{
	cout << "4의 제곱근 : " << sqrt(4.0) << endl;  //2
	cout << "16의 제곱근 : " << sqrt(16) << endl;  //4
	cout << "64의 제곱근 : " << sqrt(64) << endl;  //8
	cout << "256의 제곱근 : " << sqrt(256.0) << endl; //16

	return 0;
};









048 
학습내용 : 실수의 몫과 나머지 구하기;
#include <iostream>

using namespace std;

int main()
{
	double x = 1.2345;
	double div = 0.0;
	double mod = 0.0;

	mod = modf(x, &div); //mod에 0.2345 저장

	cout << "1.2345의 몫 : " << div << ", 나머지 : " << mod << endl;//1, 0.2345

	return 0;
};









049
학습내용 : 난수 생성;

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	srand((unsigned int)time(NULL));  //seed, 시스템 시간

	for (int i = 0; i < 5; i++)
		cout << "난수 : " << rand() << endl;//0~32767

	return 0;
};


//난수 : 16105
//난수 : 15963
//난수 : 24347
//난수 : 22599
//난수 : 28780
//
//rand함수는 진정한 의미의 난수를 생성하지 않는다. C++11부터는 여러 난수 생성기 제공
//random_device
//linear_congruential_engine
//mersenne_twister_engine
//subtract_with_carry_engine






050
학습내용 : random_shuffle 이해하기;
//#define randomize() srand((unsigned)time(NULL))



#include <iostream>
#include <random>
#include <algorithm>
#include <ctime>

using namespace std;

int main()
{
	string str1 = "1a2b3c4d5e6f7g8h9i";
	string str2 = "republic of korea";
	int data1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	srand(static_cast<unsigned int>(time(NULL)));

	random_shuffle(str1.begin(), str1.end());
	random_shuffle(str2.begin(), str2.end());
	random_shuffle(data1, data1 + 4);//0~3

	cout << "== str1 ==" << endl;
	for (auto i : str1)
		cout << i << ", ";

	cout << endl << "== str2 ==" << endl;
	for (auto i : str2)
		cout << i << ", ";

	cout << endl << "== data1 ==" << endl;
	for (auto i : data1)
		cout << i << ", ";

	return 0;
}


//== str1 ==
//2, a, 5, 7, g, 6, h, 4, 8, f, 9, e, 3, d, 1, b, i, c,
//== str2 ==
//, o, f, k, o, c, l, e, p, r, e, , a, b, r, i, u,
//== data1 ==
//4, 3, 1, 2, 5, 6, 7, 8, 9, 10,

//python의 경우
//import random
//list = ["korea", "japan", "china", "england", "canada"]
//random.shuffle(list)
//print(list) 





000
학습내용 :날짜와 시간을 문자열 변환 이해하기;
//visual studio 2019에서는 _CRT_SECURE_NO_WARNINGS를 사용
//또는 #pragma warning(disable:4996)

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
//#pragma warning(disable:4996)
using namespace std;

int main()
{
	time_t now = time(NULL);  //time_t 타입(정수)의 변수 now를 현재 시각으로 초기화
	tm* ptm = localtime(&now);//tm 구조체 포인터 변수 ptm에 시간 정보 전달
	//struct tm * localtime (const time_t * timer);

	char buffer[64];
	strftime(buffer, 64, "예제 만드는 지금은 %Y년 %m월 %d일, %H시 %M분 %S초입니다.(%p)\n", ptm);
	//Y, m, d, H, M, S, p 등은 형식지정자이다. format에 맞게 쓰면 시간 정보가 나온다.
	cout << buffer;

	return 0;
};

//예제 만드는 지금은 2020년 03월 03일, 13시 52분 52초입니다.(PM)




//http://blog.naver.com/PostView.nhn?blogId=pumpapapumpa&logNo=220262926082
//http://www.cplusplus.com/reference/ctime/tm/
//
//유닉스와 POSIX 시스템에서는 time_t 를 정수 (통상적으로 32 또는 64 비트 정수) 
//혹은 부동 소수점 형으로 정의하고 있다. 이 때, 이 값은 1970 년 1 월 1 일 자정 (UTC) 에서 부터 
//현재 까지 흐른 초 수를 의미한다.
//https://modoocode.com/113
//시간 형식 지정자 https://modoocode.com/122



052
학습내용 : 지나간 시간 알아내기;

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	time_t start = time(NULL);//시간 초기화
	time_t finish = time(NULL);//시간 초기화

	int pass_int = 1;

	time(&start);//start에 실행시점 시간 저장

	for (int i = 1; i < 10000; i++)
	{
		for (int j = 1; j < 1000000; j++)
			pass_int += 1;  //덧셈 연산을 시킴
	}

	time(&finish);//종료시점의 시간 저장

	cout << "1을 100억 번 더하는 시간 : " << difftime(finish, start) << "초\n";
	//difftime 반환값은 초 단위로 두 변수의 시간 차이다.

	return 0;
};


//1을 100억 번 더하는 시간 : 25초
//컴퓨터 마다 처리 시간은 다르다.







000
학습내용 :   이해하기;









053
학습내용 : string.compare;

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string seven_war = "임진왜란";
	string korea_war = "한국전쟁";

	if (seven_war.compare(korea_war) == 0)//값이 같으면 0
		cout << "같은 문자열입니다\n";
	else
		cout << "다른 문자열입니다\n";

	return 0;
};


//다른 문자열입니다







054
학습내용 : 문자열 조회하기;

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string baekhap_war = "백합벌 전투 : 백제 왕자 부여창의 일기토로 유명한 전투";

	int rtn = baekhap_war.find("부여창");

	if (rtn > 0)//찾지 못하면 -1 리턴
		cout << "문자열을 찾았습니다. 위치는 " << rtn << "입니다." << endl;
	else
		cout << "문자열을 찾을 수 없습니다." << endl;

	return 0;
};

//문자열을 찾았습니다. 위치는 24입니다.
//한글은 2칸, 스페이스는 1칸, 콜론도 1칸 총 24번째 시작 위치를 가리킴




055
학습내용 : 문자열 길이 구하기;
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string jinduk_name = "김승만";
	string jinsung_name = "kim man";

	cout << "진덕여왕 이름 길이 : " << jinduk_name.length() << endl;
	cout << "진성여왕 이름 길이 : " << jinsung_name.length() << endl;


	return 0;
};


//진덕여왕 이름 길이 : 6
//진성여왕 이름 길이 : 7



056
학습내용 : 대소문자 변환;

#include <iostream>
#include <string>
#include <locale>
#include <algorithm>  //transform

using namespace std;

int main()
{
	string silla = "divided into the Three Kingdoms.";
	string joseon = "Yi Seong-gye, established Joseon in 1392.";
	//문자열을 대소문자로 변환
	transform(silla.begin(), silla.end(), silla.begin(), toupper);
	transform(joseon.begin(), joseon.end(), joseon.begin(), tolower);

	char lower_ch = 'g';
	char upper_ch = 'B';
	//문자를 대소문자로 변환
	lower_ch = toupper(lower_ch);
	upper_ch = tolower(upper_ch);

	cout << "문자열 대문자로 변환 : " << silla << endl;
	cout << "문자열 소문자로 변환 : " << joseon << endl;
	cout << "문자 대문자로 변환 : " << lower_ch << endl;
	cout << "문자 소문자로 변환 : " << upper_ch << endl;

	return 0;
};


//문자열 대문자로 변환 : DIVIDED INTO THE THREE KINGDOMS.
//문자열 소문자로 변환 : yi seong - gye, established joseon in 1392.
//문자 대문자로 변환 : G
//문자 소문자로 변환 : b




057
학습내용 : 문자열 합치기와 추가하기;
//append 함수와 += 연산자는 같은 역할을 한다.
//string은 내부버퍼를 가지고 있어 가변 길이 문자열 처리가 가능
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string king = "조선 세종";
	string favorite1 = "고기";
	string favorite2 = "야근";

	string king_info = "";

	king_info += king;
	king_info += "은 ";
	king_info += favorite1;
	king_info.append("와 ");
	king_info.append(favorite2);
	king_info.append("을 좋아했습니다.");

	cout << king_info << endl;

	return 0;
};


//문자열 연결을 위해서는 string의 + 연산자, += 사용
//append, insert, push_back 함수로도 문자와 문자열 추가 가능
//string.append("ABC",2)처럼 추가할 문자열의 길이 지정 가능
//string.append("ABC",1,2)처럼 문자열 일부만 추출해 추가 가능
//string.insert(2,"ABC",2)
//string.insert(0,"ABC",1,2)
//





058
학습내용 : 문자열 추가하기, insert;

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sentence = "i coding";
	sentence.insert(2, "hate ");//0,1,2번째 자리는 'c' 위치
	cout << sentence << endl;

	sentence.insert(7, "or like ");
	cout << sentence << endl;

	return 0;
};

//i hate coding
//i hate or like coding





059
학습내용 : 문자열 지우기;


#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sentence = "i hate coding";

	sentence.erase(0, 7);//인덱스 0~6번까지 삭제, 즉 7개 삭제

	cout << "i like " << sentence << endl;

	return 0;
};

//i like coding



060
학습내용 : 문자열 이동하기;


#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	string str1 = "i like coding";
	string str2 = move(str1);

	cout << "str1 : " << str1 << endl;//이동되어 빈 문자열
	cout << "str2 : " << str2 << endl;//str1이 이동

	vector<int> v1 = { 1, 2, 3 };
	vector<int> v2 = move(v1);

	cout << "v1 size : " << v1.size() << endl;
	cout << "v2 size : " << v2.size() << endl;

	return 0;
}



//str1:
//str2: i like coding
//v1 size : 0
//v2 size : 3





061
학습내용 : remove;


#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string sentence = "i like coding";

	sentence.erase(remove(sentence.begin(), sentence.end(), ' '), sentence.end());
	//ilikecoding, ilikecodingng에서 ng를 제거(erase)

	//remove(sentence.begin(), sentence.end(), ' ');//ilikecodingng 를 sentense 변수에 저장

	cout << sentence << endl;
	//cout << (int)remove(sentence.begin(), sentence.end(), ' ') << endl;

	return 0;
};



062
학습내용 : replace;

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string sentence = "i like coding";
	string find_str = "coding";
	string replace_str = "history";

	sentence.replace(sentence.find(find_str), find_str.length(), replace_str);

	cout << sentence << endl;

	return 0;
};

//i like history




063
학습내용 : stoi;

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1 = "10";
	string str2 = "2.456";
	string str3 = "456 문자열";

	int num1 = stoi(str1);//문자열을 정수로 변환, c++11 이상에서 지원, c언어 atoi와 같음
	int num2 = stoi(str2);//visual studio 2012 이상시 사용 가능
	int num3 = stoi(str3);

	cout << num1 << ", " << num2 << ", " << num3 << endl;

	return 0;
};


//10, 2, 456




064
학습내용 : stringstream;

#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	stringstream ss;

	double number1 = 0.0;

	ss << "1.2,2.6-3.8!4.7=8.9";
	//변수에 실수와 특수문자로 이루어진 문자열 추가
	cout << "== string to double ==" << endl;
	while (!ss.eof())
	{
		ss >> number1;//숫자 부분을 읽어 실수형 변수에 저장
		ss.ignore();//ss가 처음 데이터를 읽고 다시 처음으로 돌아가는 것을 방지
		//ignore가 없으면 무한루프에 빠짐
		cout << number1 << ", ";
	}

	ss.clear();//ss 파일의 끝까지 읽은 부분을 다시 맨 앞부터 읽을 수 있는 상태로 만듬

	ss.str("");
	/*
	cout<<endl;
	string str1;
	ss >> str1;
	cout << "str1 " << str1 << endl;
	ss.clear();
	*/
	ss << "1," << "2" << 3 << " " << 4;

	int number2 = 0;

	cout << endl << "== string to int ==" << endl;
	while (!ss.eof())
	{
		ss >> number2;
		ss.ignore();

		cout << number2 << ", ";
	}


	return 0;
}


//== string to double ==
//1.2, 2.6, 3.8, 4.7, 8.9,
//== string to int ==
//1, 23, 4,



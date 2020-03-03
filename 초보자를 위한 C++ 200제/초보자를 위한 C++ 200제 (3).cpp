

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
//







000
학습내용 :   이해하기;









000
학습내용 :   이해하기;









000
학습내용 :   이해하기;












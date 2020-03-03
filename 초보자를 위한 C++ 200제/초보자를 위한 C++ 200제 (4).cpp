

정보문화사 http://www.infopub.co.kr
저자 블로그 http://codingcoding.tistory.com
저자 정오표 https://codingcoding.tistory.com/850

깃허브 : https://github.com/nabilera1/CPPTextbook/tree/master/%EC%B4%88%EB%B3%B4%EC%9E%90%EB%A5%BC%20%EC%9C%84%ED%95%9C%20C%2B%2B%20200%EC%A0%9C
: stash - commit - push
* 스태시 : 요술 책갈피, 안전하게 보관하기, 임시로 저장
* https ://opentutorials.org/module/2676/15332


065
학습내용 : 정렬 이해하기;

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string sort_str1 = "gojoseon";
	string sort_str2 = "AaBbCcDdEe";

	sort(sort_str1.begin(), sort_str1.end());
	sort(sort_str2.begin(), sort_str2.end());

	cout << "소문자 정렬 : " << sort_str1 << endl;
	cout << "대소문자 정렬 : " << sort_str2 << endl;

	return 0;
};

//소문자 정렬 : egjnooos
//대소문자 정렬 : ABCDEabcde



066
학습내용 :  reverse 이해하기;
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string str = "gfedcba";

	reverse(str.begin(), str.end());

	cout << str << endl;

	return 0;
}

//abcdefg



067
학습내용 : to_string 이해하기;
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int number1 = 10;
	double number2 = 67.8;

	string no_str1 = to_string(number1);
	string no_str2 = to_string(number2);

	cout << "number1 : " << number1 << endl;
	cout << "number2 : " << number2 << endl;

	return 0;
};

//number1 : 10
//number2: 67.8





068
학습내용 : min, max, minmax;

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	auto result1 = min(1, 5);
	auto result2 = max('a', 'z');

	cout << result1 << ", " << result2 << endl;

	auto result3 = minmax({ 'a', 'n', 'z' });
	auto result4 = minmax({ 1, 2, 3 });
	//first 최소, second 최대
	cout << result3.first << ", " << result3.second << endl;
	cout << result4.first << ", " << result4.second << endl;

	return 0;
}

//1, z
//a, z
//1, 3


069
학습내용 : 포인터 이해하기;

#include <iostream>

using namespace std;

int main()
{
	int number1 = 10;
	int* pointer1 = &number1;//포인터 크기는 4byte
	//포인터는 값이 아닌 주소를 저장하기 때문에 컴퓨터 메모리 위치를 가리키는 주소값이다.

	double number2 = 23.4;
	double* pointer2 = &number2;

	cout << "number1 : " << number1 << " (size : " << sizeof(number1) << ")" << endl;
	cout << "pointer1 : " << pointer1 << " (size : " << sizeof(pointer1) << ")" << endl;

	cout << "number2 : " << number2 << " (size : " << sizeof(number2) << ")" << endl;
	cout << "pointer 2: " << pointer2 << " (size : " << sizeof(pointer2) << ")" << endl;

	return 0;
};



//number1: 10 (size : 4)
//pointer1 : 004FFDEC(size : 4)
//number2 : 23.4 (size : 8)
//pointer 2 : 004FFDD0(size : 4)


//C#, JAVA에는 포인터를 사용하지 않는다.



070
학습내용 : 포인터 변수 사용하기;

#include <iostream>
#include <string>
#include <vector>
//포인터 사용으로 프로그램 전체 성능을 올리는데 도움이 될 수 있다.
//함수의 인자로 넘길 때 인자로 넘기는 변수의 크기가 클 때 포인터가 유리
using namespace std;

int PointerFunc(vector<string>* info)
{
	if (info->empty() == true)
		return 0;
	else
		return sizeof(info);
}

int main()
{
	vector<string> message;
	message.push_back("고려 장군");
	message.push_back("척준경!");
	message.push_back("절친 이름은");
	message.push_back("... 무엇일까");

	cout << "포인터 인자 크기 : " << PointerFunc(&message) << endl;
	cout << "원래 변수 크기 : " << sizeof(message) << endl;

	return 0;
};


//포인터 인자 크기 : 4
//원래 변수 크기 : 16




071
학습내용 : 포인터 배열 사용;
#include <iostream>

using namespace std;

int main()
{
	const int kSize = 3;

	int numbers[kSize] = { 10, 20, 30 };
	int* pointer1 = numbers;

	int no1 = 1;
	int no2 = 2;
	int no3 = 3;
	int* pointer2[kSize] = { &no1, &no2, &no3 };//포인터 배열

	for (int i = 0; i < kSize; i++)
		cout << "Pointer1[" << i << "] = " << *(pointer1 + i) << endl;

	for (int i = 0; i < kSize; i++)
		cout << "Pointer2[" << i << "] = " << *pointer2[i] << endl;

	return 0;
};


//Pointer1[0] = 10
//Pointer1[1] = 20
//Pointer1[2] = 30
//Pointer2[0] = 1
//Pointer2[1] = 2
//Pointer2[2] = 3






072
학습내용 : 지역 변수;

#include <iostream>

using namespace std;

int Temp1(const int arg)
{
	int number = 20;

	return number + 1;
}

int Temp2(const int arg)
{
	int number = arg;

	return number + 1;
}

int main()
{
	int number = 10;

	int rtn1 = Temp1(number);
	int rtn2 = Temp2(number);

	cout << "메인 함수 number : " << number << endl;
	cout << "Temp1 함수 number : " << rtn1 << endl;
	cout << "Temp2 함수 number : " << rtn2 << endl;

	return 0;
};

//메인 함수 number : 10
//Temp1 함수 number : 21
//Temp2 함수 number : 11





073
학습내용 : 전역 변수;

#include <iostream>

using namespace std;

extern int g_number = 100;

int Func1()
{
	return g_number++;
}

int Func2()
{
	return g_number++;
}

int main()
{
	int number = g_number++;

	cout << "메인 number : " << number << endl;
	cout << "Func1 number : " << Func1() << endl;
	cout << "Func2 number : " << Func2() << endl;

	return 0;
};


//메인 number : 100
//Func1 number : 101
//Func2 number : 102

//객체지향 프로그래밍 언어에 전역 개념은 없다고 말할 수 있다.
//억지로 전역 변수, 전역 함수를 사용하면, 네임스페이스 오염, 커플링 문제,
//메모리 할당, 테스트 어려움 등이 생길 수 있다.


074
학습내용 : Call by value 이해하기;

#include <iostream>

using namespace std;

void Func(int arg)
{
	cout << "변경 전 : " << arg << endl;
	arg += 10;
	cout << "변경 후 : " << arg << endl;
}

int main()
{
	int year = 10;

	Func(year);

	cout << "함수 종료 후 : " << year << endl;

	return 0;
};


//변경 전 : 10
//변경 후 : 20
//함수 종료 후 : 10





075
학습내용 : Call by reference 이해하기;

#include <iostream>
#include <string>

using namespace std;

void Func1(int& arg)
{
	cout << "변경 전 : " << arg << endl;
	arg += 10;
	cout << "변경 후 : " << arg << endl;
}

void Func2(string& info)
{
	info += "981년";
}

int main()
{
	int year = 10;

	Func1(year);

	cout << "Func1 함수 종료 후 : " << year << endl;

	string king_info = "고려 성종 즉위년 : ";

	Func2(king_info);

	cout << king_info << endl;

	return 0;
};

//
//변경 전 : 10
//변경 후 : 20
//Func1 함수 종료 후 : 20
//고려 성종 즉위년 : 981년




076
학습내용 : Call by address;

#include <iostream>

using namespace std;

void Func1(bool* is_on)//변수의 address, 4바이트 인자가 넘어감
{
	cout << "Call by address : " << sizeof(is_on) << endl;
}

void Func2(bool& is_on)//변수의 레퍼런스(별명), 자료형의 바이트 크기가 넘어감
{
	cout << "Call by reference : " << sizeof(is_on) << endl;
}

int main()
{
	bool is_tmp = true;

	Func1(&is_tmp);
	Func2(is_tmp);

	return 0;
};

//Call by address : 4
//Call by reference : 1




074
학습내용 : const 변수 이해하기;

#include <iostream>

using namespace std;

int main()
{
	const string kMyJob = "developer";//문자열 상수, 값 변경 불가, 코드 최적화에 효과 있음
	//const, #define, enum은 값을 바꿀 수 없는 키워드
	string question = "who are you : ";
	string answer = "my job is :";

	cout << question << kMyJob << endl;
	cout << answer << kMyJob << endl;

	return 0;
}


//who are you : developer
//my job is : developer



078
학습내용 : const 포인터 이해하기;

#include <iostream>

using namespace std;

int main()
{
	int number1 = 10;
	int number2 = 20;

	int const* ptr1;//가리키는 대상을 변경할 수 있음, 그 값은 변경 불가
	ptr1 = &number1;
	//ptr1 = number1;
	ptr1 = &number2;

	int* const ptr2 = &number1;//초기값 반드시 필요
	//가리키는 대상 변경 불가, 그 값은 변경 가능
	*ptr2 = number2;
	//*ptr2 = &number2;

	return 0;
}



000
학습내용 :   이해하기;





000
학습내용 :   이해하기;





000
학습내용 :   이해하기;





000
학습내용 :   이해하기;





000
학습내용 :   이해하기;





000
학습내용 :   이해하기;





000
학습내용 :   이해하기;





000
학습내용 :   이해하기;





000
학습내용 :   이해하기;





000
학습내용 :   이해하기;





000
학습내용 :   이해하기;





000
학습내용 :   이해하기;





000
학습내용 :   이해하기;





000
학습내용 :   이해하기;





000
학습내용 :   이해하기;





000
학습내용 :   이해하기;





000
학습내용 :   이해하기;





000
학습내용 :   이해하기;





000
학습내용 :   이해하기;






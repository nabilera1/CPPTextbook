

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



079
학습내용 : enum 이해하기;

#include <iostream>

using namespace std;

enum Status //상수 집합, 열거형
{
	normal = 0,
	abnormal,      //1
	disconnect = 100,
	close          //101
};//정수형 값을 가짐

int main()
{
	Status number = close;

	if (number == Status::normal)
		cout << "Status : normal" << endl;
	else if (number == abnormal)
		cout << "Status : abnormal" << endl;
	else if (number == 101)
		cout << "Status : disconnect" << endl;
	else
		cout << "Status : close" << endl;

	return 0;
}


//Status : disconnect



080
학습내용 : enum class;

#include <iostream>

using namespace std;

enum Status
{
	normal = 0,
	abnormal,
	disconnect = 100,
	close
};
//enum class는 enum 요소들의 이름을 동일하게 사용할 수 있게 해준다.
enum class MachineStatus : char //enum class는 char 자료형임을 알려줌, 디폴트는 int
{
	normal = 'n',
	abnormal,
	disconnect = 100,
	close
};

int main()
{
	MachineStatus machine = MachineStatus::abnormal;
	//abnormal은 기본 enum, MachineStatus::abnormal은 enum class, 같은 이름 사용 가능

	if (machine == MachineStatus::normal)
		cout << "Status : normal" << endl;
	else if (machine == MachineStatus::abnormal)
		cout << "Status : abnormal" << endl;
	else if (machine == MachineStatus::disconnect)
		cout << "Status : disconnect" << endl;
	else
		cout << "Status : close" << endl;

	cout << "machine : " << static_cast<int>(machine) << ", " << static_cast<char>(machine) << endl;

	return 0;
}


//Status: abnormal
//machine : 111, o



081
학습내용 :  배열 초기값;

#include <iostream>

using namespace std;

int main()
{
	int data1[3] = { 0, 1, 2 };
	int data2[2][2]{ { 0, }, };
	int data3[2][2];  //초기값 없어 쓰레기 값 저장

	cout << "== data1 ==" << endl;
	for (int i = 0; i < 3; i++)
		cout << "data1[" << i << "] = " << data1[i] << endl;

	cout << endl << "== data2 ==" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
			cout << "data2[" << i << "][" << j << "] = "
			<< data2[i][j] << endl;
	}

	cout << endl << "== data3 ==" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
			cout << "data3[" << i << "][" << j << "] = "
			<< data3[i][j] << endl;
	}

	return 0;
}


//== data1 ==
//data1[0] = 0
//data1[1] = 1
//data1[2] = 2
//
//== data2 ==
//data2[0][0] = 0
//data2[0][1] = 0
//data2[1][0] = 0
//data2[1][1] = 0
//
//== data3 ==
//data3[0][0] = -858993460
//data3[0][1] = -858993460
//data3[1][0] = -858993460
//data3[1][1] = -858993460
//




082
학습내용 : 1차원 배열;

#include <iostream>

using namespace std;

int main()
{
	int data1[3] = { 0, 1, 2 };

	data1[0] += 10;
	data1[1] = 100;
	data1[2] -= 2;

	cout << "== data1 ==" << endl;
	for (int i = 0; i < 3; i++)
		cout << "data1[" << i << "] = " << data1[i] << endl;

	return 0;
}

//== data1 ==
//data1[0] = 10
//data1[1] = 100
//data1[2] = 0




083
학습내용 : 함수에 배열 전달;

#include <iostream>

using namespace std;

void Print1(int* arr)
{
	cout << "== Print1 ==" << endl;
	cout << arr[0] << ", " << arr[1] << ", " << arr[2] << endl;

	arr[1] = 1000;
}

void Print2(int arr[])
{
	cout << "== Print2 ==" << endl;
	cout << arr[0] << ", " << arr[1] << ", " << arr[2] << endl;

	arr[2] = 2000;
}

int main()
{
	int data[3] = { 0, 1, 2 };

	Print1(data);
	Print2(data);

	cout << "== 결과 ==" << endl;
	cout << data[0] << ", " << data[1] << ", " << data[2] << endl;

	return 0;
}

//== Print1 ==
//0, 1, 2
//== Print2 ==
//0, 1000, 2
//== 결과 ==
//0, 1000, 2000



084
학습내용 :  2차원 배열;

#include <iostream>

using namespace std;

int main()
{
	int data1[2][2] = { 1, 2, 3 };
	int data2[2][3] = { { 1, } };

	cout << "data1[0][0] = " << data1[0][0] << endl;
	cout << "data1[0][1] = " << data1[0][1] << endl;
	cout << "data1[1][0] = " << data1[1][0] << endl;
	cout << "data1[1][1] = " << data1[1][1] << endl;

	cout << endl;
	cout << "data2[0][0] = " << data2[0][0] << endl;
	cout << "data2[0][1] = " << data2[0][1] + 1 << endl;
	cout << "data2[0][2] = " << data2[0][2] + 2 << endl;
	cout << "data2[1][0] = " << data2[1][0] + 3 << endl;
	cout << "data2[1][1] = " << data2[1][1] + 4 << endl;
	cout << "data2[1][2] = " << data2[1][2] + 5 << endl;

	return 0;
}


//data1[0][0] = 1
//data1[0][1] = 2
//data1[1][0] = 3
//data1[1][1] = 0
//
//data2[0][0] = 1
//data2[0][1] = 1
//data2[0][2] = 2
//data2[1][0] = 3
//data2[1][1] = 4
//data2[1][2] = 5



085
학습내용 : 2차원 배열을 함수 인자로 사용하기;
#include <iostream>

using namespace std;

void Func1(int arr[2][2])// 직접 크기를 지정해 받을 수 있다. 포인터를 넘겨줌.
{
	arr[0][0] = 1000;
	//1행 1열의 값을 100으로 변경
}

void Func2(int arr[][2], int row)//2차원 배열 행은 생략 가능, 행의 크기를 같이 넘겨줘야 한다.
{
	arr[row - 2][1] = 2000;
}

void Func3(int* arr, int row, int col)//2차원 배열을 포인터로 받기
{
	*((arr + row - 1) + col - 1) = 3000; //*((arr+1)+1), arr에서 2번째 이동한 주소

}

int main()
{
	int data[2][2]{ { 1, 2 },{ 3, 4 } };//2차원 배열 초기화
	//int data[2][2]={ { 1, 2 },{ 3, 4 } };//

	Func1(data);
	Func2(data, 2);
	Func3(*data, 2, 2);

	cout << "== 결과 ==" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << data[i][j] << endl;
		}
	}

	return 0;
}


//== 결과 ==
//1000
//2000
//3000
//4






086
학습내용 : fill;

#include <iostream>
#include <vector>
#include <algorithm>//fill

using namespace std;

int main()
{
	int data1[10]{ 0, };            //1차원 배열 0으로 초기화
	fill(data1, data1 + 3, 10);     //인덱스 0,1,2에 10 저장
	fill(data1 + 4, data1 + 8, 20); //[4]~[7]에 20 할당

	cout << "== data1 결과 ==" << endl;

	for (int i = 0; i < 10; i++)
		cout << data1[i] << ", ";
	//10, 10, 10, 0, 20, 20, 20, 20, 0, 0,
	vector<int> data2({ 0, 1, 2, 3, 4, 5, 6, 7 });
	fill(data2.begin(), data2.begin() + 3, 30);
	//30, 30, 30, 3, 4, 5, 6, 7,
	cout << endl << endl << "== data2 결과 ==" << endl;

	for (int i = 0, size = data2.size(); i < size; i++)
		cout << data2.at(i) << ", ";

	return 0;
}

//== data1 결과 ==
//10, 10, 10, 0, 20, 20, 20, 20, 0, 0,
//
//== data2 결과 ==
//30, 30, 30, 3, 4, 5, 6, 7,



087
학습내용 : 배열 일부 변경하기;

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int data1[10]{ 0, };
	fill_n(data1, 2, 10);
	fill_n(data1 + 4, 3, 20);

	cout << "== data1 결과 ==" << endl;

	for (int i = 0; i < 10; i++)
		cout << data1[i] << ", ";
	//10, 10, 0, 0, 20, 20, 20, 0, 0, 0,
	vector<int> data2({ 0, 1, 2, 3, 4, 5, 6, 7 });
	fill_n(data2.begin(), data2.size() - 1, 30);
	fill_n(data2.begin(), 4, 40);
	//40, 40, 40, 40, 30, 30, 30, 7,
	cout << endl << endl << "== data2 결과 ==" << endl;

	for (int i = 0, size = data2.size(); i < size; i++)
		cout << data2.at(i) << ", ";

	return 0;


}

//
//== data1 결과 ==
//10, 10, 0, 0, 20, 20, 20, 0, 0, 0,
//
//== data2 결과 ==
//40, 40, 40, 40, 30, 30, 30, 7,



088
학습내용 : 구조체 이해하기;
//C++에서도 C언어처럼 구조체를 사용할 수 있다.
//보통은 클래스를 만들어 사용할 것이다.
#include <iostream>
#include <string>

using namespace std;

struct Princess
{
	string name;
	string father;
	string birthday = "알 수 없음";
} Goryeo[2];

int main()
{
	Princess jungmyung;
	jungmyung.name = "정명공주";
	jungmyung.father = "조선 선조";
	jungmyung.birthday = "1603년 6월 27일";

	Goryeo[0].name = "선정왕후";
	Goryeo[0].father = "고려 성종";
	Goryeo[1].name = "효정공주";
	Goryeo[1].father = "고려 현종";

	cout << " == 조선 공주 == " << endl;
	cout << jungmyung.name << endl;
	cout << jungmyung.father << endl;
	cout << jungmyung.birthday << endl;

	cout << " == 고려 공주 == " << endl;
	cout << Goryeo[0].name << endl;
	cout << Goryeo[0].father << endl;
	cout << Goryeo[0].birthday << endl << endl;
	cout << Goryeo[1].name << endl;
	cout << Goryeo[1].father << endl;
	cout << Goryeo[1].birthday << endl;

	return 0;
}


//== 조선 공주 ==
//정명공주
//조선 선조
//1603년 6월 27일
//== 고려 공주 ==
//선정왕후
//고려 성종
//알 수 없음
//
//효정공주
//고려 현종
//알 수 없음





089
학습내용 : 구조체를 함수 인자로 사용;
#include <iostream>
#include <string>

using namespace std;

struct Princess
{
	string name;
	string father;
	string birthday;
} jungso;

void Print(Princess* who)
{
	cout << "jungso.name = " << who->name << endl;
	cout << "jungso.father = " << who->father << endl;
	cout << "jungso.birthday = " << who->birthday << endl;
}

int main()
{
	jungso.name = "정소공주";
	jungso.father = "조선 태종";
	jungso.birthday = "1412년";

	Print(&jungso);

	return 0;
}
//
//jungso.name = 정소공주
//jungso.father = 조선 태종
//jungso.birthday = 1412년
//





090
학습내용 : 구조체 초기화;

#include <iostream>

using namespace std;

struct Data1
{
	Data1(int x) : number(x) {}
	//구조체도 클래스 생성자처럼 선언과 초기화를 내부에서 할 수 있음.
	int number;
};

struct Data2
{
	Data2()
	{
		number = 10;
	}

	int number;
} data2;

int main()
{
	Data1 data1(2);
	cout << "Data1 number : " << data1.number << endl;
	cout << "Data2 number : " << data2.number << endl;

	return 0;
}

//Data1 number : 2
//Data2 number : 10





091
학습내용 : 구조체 초기화 2;

#include <iostream>

using namespace std;

struct Data1  //정수형 변수를 가진 구조체
{
	int number;
};

struct Data2  //구조체와 정수형 변수를 가진 구조체
{
	Data1 data1;

	int number;
} data2;

int main()
{
	Data1 data1 = { }; //내부 변수들을 모두 초기화
	Data2 data2{ data1, 10 };//순서대로 전달해야함. 멤버 변수들 순서대로 초기화됨

	cout << "Data1 number : " << data2.data1.number << endl;
	cout << "Data2 number : " << data2.number << endl;

	return 0;
}
//
//Data1 number : 0
//Data2 number : 10




092
학습내용 : 구조체 초기화 3;

#include <iostream>
#include <string>

using namespace std;

struct Info
{
	string country;

	struct Who
	{
		string name;
		string nickname;
	} who;
};

int main()
{
	Info chuck = { "고려", { "장군 척준경", "소드마스터" } };
	Info anjang = { "고구려", "안장왕 고흥안", "한주 사랑" };

	cout << chuck.country << ", " << chuck.who.name << ", " << chuck.who.nickname << endl;
	cout << anjang.country << ", " << anjang.who.name << ", " << anjang.who.nickname << endl;

	return 0;
}

//고려, 장군 척준경, 소드마스터
//고구려, 안장왕 고흥안, 한주 사랑





093
학습내용 : 파일 한 줄씩 읽기;
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream read;

	read.open("093.txt", ifstream::in);//ifstream::in 열기 모드, default, 생략가능
	//visual studio 2019, Debug 폴더에 093.txt 파일이 위치해야 함.
	//cpp로 만들어진 실행파일 exe는 Debug에 기본적으로 생성됨.

	char line = read.get();//파일의 첫 문자 읽기

	while (read.eof() == false)//End of File
	{
		cout << line;//1 char씩 출력

		line = read.get();
	}

	cout << endl;

	read.close();

	return 0;
}


//093.txt 내용
//bc2333 고조선 건국
//bc238  부여 건국
//bc57   신라 건국
//bc37   고구려 건국
//bc18   백제 건국
//42     가야 건국
//698    발해 건국
//900    후백제 건국
//901    후고구려 건국
//918    고려 건국
//1392   조선 건국
//1948   대한민국 건국




/*

//파일 입출력

#include<fstream>
using namespace std;
int main()
{
	ofstream square_file;//std::ofstream
	square_file.open("./square.txt");//Debug 폴더 실행파일 위치에 squart.txt 생성
	for (int i = 0; i < 10; i++) {
		square_file << i << "^2=" << i * i << endl;
	}
	square_file.close();

}
//square_file.open("../square.txt");
//소스코드 있는 경로에 square.txt 저장됨

//ofstream square_file("square.txt")8



*/




094
학습내용 : 파일 한 줄씩 읽기;

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	ifstream file;
	file.open("093.txt", ifstream::in);

	string line;

	while (getline(file, line))
		cout << line << endl;

	file.close();

	return 0;
}


//bc2333 고조선 건국
//bc238  부여 건국
//bc57   신라 건국
//bc37   고구려 건국
//bc18   백제 건국
//42     가야 건국
//698    발해 건국
//900    후백제 건국
//901    후고구려 건국
//918    고려 건국
//1392   조선 건국
//1948   대한민국 건국





095
학습내용 : 파일 내용 모두 읽기;

#include <iostream>
#include <sstream>//stringstream
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream ifs("093.txt");//기본값 ifstream::in

	stringstream ss;

	ss << ifs.rdbuf();//파일 전체 텍스트를 ss에 저장
	ifs.close();

	string read = "";

	cout << "== !ss.eof ==" << endl;
	while (!ss.eof())
	{
		ss >> read;//한 단어씩 전달, 띄어쓰기, 특수문자 등 만나기 전까지
		cout << read << " ";
	}

	cout << endl << "== !ss.str() ==" << endl;
	read = ss.str();//전체 텍스트를 string read에 저장

	cout << endl << read << endl;

	return 0;
}


//== !ss.eof ==
//bc2333 고조선 건국 bc238 부여 건국 bc57 신라 건국 bc37 고구려 건국 bc18 백제 건 국 42 가야 건국 698 발해 건국 900 후백제 건국 901 후고구려 건국 918 고려 건국 1392 조선 건국 1948 대한민국 건국
//== !ss.str() ==
//
//bc2333 고조선 건국
//bc238  부여 건국
//bc57   신라 건국
//bc37   고구려 건국
//bc18   백제 건국
//42     가야 건국
//698    발해 건국
//900    후백제 건국
//901    후고구려 건국
//918    고려 건국
//1392   조선 건국
//1948   대한민국 건국



096
학습내용 :   이해하기;





000
학습내용 :   이해하기;






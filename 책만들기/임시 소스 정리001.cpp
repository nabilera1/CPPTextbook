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

//ofstream square_file("square.txt")

///////////////////////////////////////
#include <iostream>
#include<cmath>
using namespace std;
int divide(int a, int b) {
	return a / b;
}
float divide(float a, float b) {//Overload
	return floor(a / b);//std::floor
}
int main()
{
	int x = 5, y = 2;
	float n = 5.0, m = 2.0;
	cout << divide(x, y) << endl;//2
	cout << divide(n, m) << endl;//2
	//cout << divide(x, m) << endl;//애매모호함
}

//Coding 상식
//int i = 5;
//const int j = 9;
//
//위 코드 조각에서 수정 가능하고 주소를 지정할 수 있는 변수를
//다른 말로 Lvalue라고 한다. j는 상수라서 Lvalue가 될 수 없다.

//////////////////////////////////////

#include <iostream>

int main()
{
	std::cout << "Hello World!\n";
	std::string str = "Hello World"
		"This is my string";
	std::cout << str << std::endl;
}
//char 배열보다는 <string> 라이브러리를 사용하자. 
//긴 문자열은 부분 문자열로 분리하여 작성도 가능하다.
//////////////////////////////////////////////

#include <iostream>

int main()
{
	std::cout << "Hello World!\n";
	std::cout << "Hello World!" << std::endl;
}


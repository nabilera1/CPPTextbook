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
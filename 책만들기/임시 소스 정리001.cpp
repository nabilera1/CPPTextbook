//���� �����

#include<fstream>
using namespace std;
int main()
{
	ofstream square_file;//std::ofstream
	square_file.open("./square.txt");//Debug ���� �������� ��ġ�� squart.txt ����
	for (int i = 0; i < 10; i++) {
		square_file << i << "^2=" << i * i << endl;
	}
	square_file.close();

}
//square_file.open("../square.txt");
//�ҽ��ڵ� �ִ� ��ο� square.txt �����

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
	//cout << divide(x, m) << endl;//�ָŸ�ȣ��
}

//Coding ���
//int i = 5;
//const int j = 9;
//
//�� �ڵ� �������� ���� �����ϰ� �ּҸ� ������ �� �ִ� ������
//�ٸ� ���� Lvalue��� �Ѵ�. j�� ����� Lvalue�� �� �� ����.

//////////////////////////////////////

#include <iostream>

int main()
{
	std::cout << "Hello World!\n";
	std::string str = "Hello World"
		"This is my string";
	std::cout << str << std::endl;
}
//char �迭���ٴ� <string> ���̺귯���� �������. 
//�� ���ڿ��� �κ� ���ڿ��� �и��Ͽ� �ۼ��� �����ϴ�.
//////////////////////////////////////////////

#include <iostream>

int main()
{
	std::cout << "Hello World!\n";
	std::cout << "Hello World!" << std::endl;
}


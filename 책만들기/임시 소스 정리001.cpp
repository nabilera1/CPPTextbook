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


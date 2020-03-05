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


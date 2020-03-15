

정보문화사 http://www.infopub.co.kr
저자 블로그 http://codingcoding.tistory.com
저자 정오표 https://codingcoding.tistory.com/850

깃허브 : https://github.com/nabilera1/CPPTextbook/tree/master/%EC%B4%88%EB%B3%B4%EC%9E%90%EB%A5%BC%20%EC%9C%84%ED%95%9C%20C%2B%2B%20200%EC%A0%9C
: stash - commit - push
* 스태시 : 요술 책갈피, 안전하게 보관하기, 임시로 저장
* https ://opentutorials.org/module/2676/15332






104
학습내용 : 클래스;

#include <iostream>
#include <string>

using namespace std;

class KingInfo
{
public:
	void SetName(string name)
	{
		name_ = name;
	}

	string GetName() const
	{
		return name_;
	}

private:
	string name_;
};

int main()
{
	KingInfo king_info;
	king_info.SetName("조선 세조 이유");

	cout << king_info.GetName() << endl;

	return 0;
}


//조선 세조 이유

/*
객체 지향 언어의 세 가지 접근자
public : 공개된 정보, 외부 접근 허용
protected : 제한된 정보, 해당 클래스나 서브 클래스에서만 접근 허용
private : 제한된 정보, 해당 클래스에서만 접근 허용
*/








000
학습내용 : 클래스 생성자;

#include <iostream>
#include <string>

using namespace std;

class KingInfo
{
public:
	KingInfo()
	{
		name_ = "조선 세조 이유";
	};
	void SetName(string name)
	{
		name_ = name;
	}

	string GetName() const
	{
		return name_;
	}

private:
	string name_;
};

int main()
{
	KingInfo king_info;
	//king_info.SetName("조선 세조 이유");

	cout << king_info.GetName() << endl;

	return 0;
}


//조선 세조 이유

/*
생성자 : 클래스 객체가 만들어질 때 자동으로 호출
생성자 이름은 클래스 이름과 똑같다.
*/









106
학습내용 : 복수 생성자;

#include <iostream>
#include <string>

using namespace std;

class KingInfo
{
public:
	KingInfo()
	{
		value_ = "조선 성종 이혈";
	};

	KingInfo(const string value)
	{
		value_ = value;
	};

	KingInfo(const int value)
	{
		value_ = "연산군 즉위연도 : ";
		value_ += to_string(value);
	};

public:
	string GetValue() const
	{
		return value_;
	}

private:
	string value_;
};

int main()
{
	KingInfo king_info1;
	KingInfo king_info2("조선 연산군 이융");
	KingInfo king_info3(1494);

	cout << king_info1.GetValue() << endl;
	cout << king_info2.GetValue() << endl;
	cout << king_info3.GetValue() << endl;

	return 0;
}

//조선 성종 이혈
//조선 연산군 이융
//연산군 즉위연도 : 1494





107
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










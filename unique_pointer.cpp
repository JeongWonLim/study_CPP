#include<iostream>
#include<memory>

using namespace std;
//유니크 포인터 멤버 변수
class Pt
{
public:
	Pt() : m_int(new int{ 5 })
	{
		cout << __func__  << " : " << m_int << endl;
	}

	~Pt()
	{
		cout << __func__ << " : " << m_int << endl;
	}

private:
	std::unique_ptr<int> m_int;
};

std::unique_ptr<int> func()
{
	return std::make_unique<int>(); //자동으로 변수 0 초기화
}

int main(void)
{
	cout << "----------유니크 포인터 변수선언----------" << endl;
	std::unique_ptr<int> uniptr1 = std::unique_ptr<int>(new int{ 5 });		//첫번째 방법
	cout << "유니크 포인터 방법1 역참조 : " << *uniptr1 << '	' << "주소 : " << uniptr1 <<  endl;

	std::unique_ptr<int> uniptr2(new int{ 5 });								//두번째 방법
	cout << "유니크 포인터 방법2 역참조 : " << *uniptr2 << endl;

	auto uniptr3 = std::unique_ptr<int>(new int{ 5 });
	cout << "유니크 포인터 auto 역참조 : " << *uniptr3 << endl;

	std::unique_ptr<int[]> uniptr4(new int[10]{ 0,1,2,3,4,5,6,7,8,9 });	//배열 사용
	cout << "유니크 포인터 배열 3인덱스 역참조 : " << uniptr4[3] << endl;
	
	cout << "----------std::make_unique----------" << endl; //new연산자를 사용할 필요가 없음.
	std::unique_ptr<int> makeuni = std::make_unique<int>(5);
	cout << "make_unique : " << *makeuni << endl;

	std::unique_ptr<int[]> makeuniarray = std::make_unique<int[]>(5);  //배열은 직접 초기화는 불가능, 자동으로 0으로 초기화
	cout << "make_unique_array : " << makeuniarray[2] << endl;


	cout << "----------유니크 포인터 멤버변수 시작----------" << endl;
	{
		std::unique_ptr<Pt> pt(new Pt); //스코프가 벋어나면 자동으로 공간해제
	}
	cout << "----------유니크 포인터 멤버변수 끝----------" << endl;



	cout << "----------유니크 포인터 반환값----------" << endl;
	std::unique_ptr<int> reptr = func();
	cout << *reptr << endl;

	cout << "----------유니크 포인터 move----------" << endl; //유니크 포인터는 하나의 공간만 지정가능 하므로 다른 변수로 옮길 시 move함수를 써야한다
	std::unique_ptr<int> uniptr5 = std::move(uniptr1);
	cout << "유니크 포인터 move : " << uniptr5 << endl;


	
	return 0;

}
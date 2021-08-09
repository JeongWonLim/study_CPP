#include<iostream>
#include<array>

using namespace std;

int main(void)
{
	/*
	* C언어의 배열을 C++스타일로 변경해놓은 고정크기 컨테이너
	* 사용법 : std::array<자료형, 배열크기> 변수명;
	*/

	//C언어의 배열과 똑같이 작동함
	std::array<int, 4> arr; // 쓰레기값 저장
	std::array<int, 4> myArray = { 0 ,2,3,4}; // 전체가 0으로 초기화
	std::array<std::array<int, 4>, 5> myArray_2D = { 0 };

	// 범위기반 for문 가능_
	// 범위기반 for문은 배열, array컨테이너, 반복자가 존재하는 컨테이너 사용가능
	for (auto i : myArray)
	{
		cout << i << endl;
	}
	
	//2차원 범위기반 for문 가능
	for (auto i : myArray_2D)
	{
		for (auto j : i)
			cout << j;
		cout << endl;
	}

	//배열크기 반환 함수 존재
	cout << "myArray 배열 길이 : " << myArray.size() << endl;
	cout << "myArray_2D 배열 길이(행) : " << myArray_2D.size() << endl;
	cout << "myArray_2D 배열 길이(열) : " << myArray_2D[0].size() << endl;

	/* 인덱스 유효검사
	* at(index) 함수
	* 반환값 : 인덱스 존재시 존재 배열의 참조를 반환, 없을 시 예외처리 throw(std::out_of_range) 
	*/
	cout << "myArray 인덱스 4번 존재? : " << myArray.at(3) << endl;

	return 0;
}
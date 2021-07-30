#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
	vector<int> vec;
	

	for (int i = 0; i < 100; i++)
		vec.emplace_back(i);

	cout << endl << "=====================반복자를 이용한 반복문 출력=====================" << endl;
	for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++)
		cout << *iter << ' ';
	

	cout << endl << "=====================사칙연산=====================" << endl;
	vector<int>::iterator beginIter = vec.begin();
	vector<int>::iterator endIter = vec.end();

	cout << "+ 연산 : " << *(beginIter + 5) << endl;						//출력 : 5, += 가능
	cout << "- 연산 : " << *(endIter - 5) << endl;						//출력 : 95, -= 가능
	cout << "[] 연산 : " << beginIter[5] << endl;						//출력 : 5

	cout << endl << "=====================비교연산=====================" << endl;

	cout << "== 연산 : " << (vec.begin() == vec.begin()) << endl;		//출력 : 5, += 가능
	cout << "!= 연산 : " << (vec.begin() != vec.begin()) << endl;		//출력 : 95, -= 가능
	

	cout << endl << "=====================배열 수=====================" << endl;
	cout << "배열 수 : " <<  endIter - beginIter << endl;				//출력 : 100

	cout << endl << "=====================auto를 이용한 방법=====================" << endl;
	for (auto iter = vec.begin(); iter != vec.end(); iter++)
		cout << *iter << ' ';


	return 0;
}

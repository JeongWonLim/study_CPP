#include<iostream>
#include<vector>

using namespace std;

int main(void)
{
	vector<int> vec;
	

	for (int i = 0; i < 100; i++)
		vec.emplace_back(i);

	cout << endl << "=====================�ݺ��ڸ� �̿��� �ݺ��� ���=====================" << endl;
	for (vector<int>::iterator iter = vec.begin(); iter != vec.end(); iter++)
		cout << *iter << ' ';
	

	cout << endl << "=====================��Ģ����=====================" << endl;
	vector<int>::iterator beginIter = vec.begin();
	vector<int>::iterator endIter = vec.end();

	cout << "+ ���� : " << *(beginIter + 5) << endl;						//��� : 5, += ����
	cout << "- ���� : " << *(endIter - 5) << endl;						//��� : 95, -= ����
	cout << "[] ���� : " << beginIter[5] << endl;						//��� : 5

	cout << endl << "=====================�񱳿���=====================" << endl;

	cout << "== ���� : " << (vec.begin() == vec.begin()) << endl;		//��� : 5, += ����
	cout << "!= ���� : " << (vec.begin() != vec.begin()) << endl;		//��� : 95, -= ����
	

	cout << endl << "=====================�迭 ��=====================" << endl;
	cout << "�迭 �� : " <<  endIter - beginIter << endl;				//��� : 100

	cout << endl << "=====================auto�� �̿��� ���=====================" << endl;
	for (auto iter = vec.begin(); iter != vec.end(); iter++)
		cout << *iter << ' ';


	return 0;
}

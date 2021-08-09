#include<iostream>
#include<array>

using namespace std;

int main(void)
{
	/*
	* C����� �迭�� C++��Ÿ�Ϸ� �����س��� ����ũ�� �����̳�
	* ���� : std::array<�ڷ���, �迭ũ��> ������;
	*/

	//C����� �迭�� �Ȱ��� �۵���
	std::array<int, 4> arr; // �����Ⱚ ����
	std::array<int, 4> myArray = { 0 ,2,3,4}; // ��ü�� 0���� �ʱ�ȭ
	std::array<std::array<int, 4>, 5> myArray_2D = { 0 };

	// ������� for�� ����_
	// ������� for���� �迭, array�����̳�, �ݺ��ڰ� �����ϴ� �����̳� ��밡��
	for (auto i : myArray)
	{
		cout << i << endl;
	}
	
	//2���� ������� for�� ����
	for (auto i : myArray_2D)
	{
		for (auto j : i)
			cout << j;
		cout << endl;
	}

	//�迭ũ�� ��ȯ �Լ� ����
	cout << "myArray �迭 ���� : " << myArray.size() << endl;
	cout << "myArray_2D �迭 ����(��) : " << myArray_2D.size() << endl;
	cout << "myArray_2D �迭 ����(��) : " << myArray_2D[0].size() << endl;

	/* �ε��� ��ȿ�˻�
	* at(index) �Լ�
	* ��ȯ�� : �ε��� ����� ���� �迭�� ������ ��ȯ, ���� �� ����ó�� throw(std::out_of_range) 
	*/
	cout << "myArray �ε��� 4�� ����? : " << myArray.at(3) << endl;

	return 0;
}
#include<iostream>
#include<memory>

using namespace std;
//����ũ ������ ��� ����
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
	return std::make_unique<int>(); //�ڵ����� ���� 0 �ʱ�ȭ
}

int main(void)
{
	cout << "----------����ũ ������ ��������----------" << endl;
	std::unique_ptr<int> uniptr1 = std::unique_ptr<int>(new int{ 5 });		//ù��° ���
	cout << "����ũ ������ ���1 ������ : " << *uniptr1 << '	' << "�ּ� : " << uniptr1 <<  endl;

	std::unique_ptr<int> uniptr2(new int{ 5 });								//�ι�° ���
	cout << "����ũ ������ ���2 ������ : " << *uniptr2 << endl;

	auto uniptr3 = std::unique_ptr<int>(new int{ 5 });
	cout << "����ũ ������ auto ������ : " << *uniptr3 << endl;

	std::unique_ptr<int[]> uniptr4(new int[10]{ 0,1,2,3,4,5,6,7,8,9 });	//�迭 ���
	cout << "����ũ ������ �迭 3�ε��� ������ : " << uniptr4[3] << endl;
	
	cout << "----------std::make_unique----------" << endl; //new�����ڸ� ����� �ʿ䰡 ����.
	std::unique_ptr<int> makeuni = std::make_unique<int>(5);
	cout << "make_unique : " << *makeuni << endl;

	std::unique_ptr<int[]> makeuniarray = std::make_unique<int[]>(5);  //�迭�� ���� �ʱ�ȭ�� �Ұ���, �ڵ����� 0���� �ʱ�ȭ
	cout << "make_unique_array : " << makeuniarray[2] << endl;


	cout << "----------����ũ ������ ������� ����----------" << endl;
	{
		std::unique_ptr<Pt> pt(new Pt); //�������� ����� �ڵ����� ��������
	}
	cout << "----------����ũ ������ ������� ��----------" << endl;



	cout << "----------����ũ ������ ��ȯ��----------" << endl;
	std::unique_ptr<int> reptr = func();
	cout << *reptr << endl;

	cout << "----------����ũ ������ move----------" << endl; //����ũ �����ʹ� �ϳ��� ������ �������� �ϹǷ� �ٸ� ������ �ű� �� move�Լ��� ����Ѵ�
	std::unique_ptr<int> uniptr5 = std::move(uniptr1);
	cout << "����ũ ������ move : " << uniptr5 << endl;


	
	return 0;

}
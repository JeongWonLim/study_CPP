#include<iostream>
using namespace std;

// C��� ���� ������
/*
* ó������ ���� ���� ���� �� default ���� 0���� ����
* ������ ���� �տ� ���� +1
*/
enum enum_PieceType {
	PieceTypeKing = 10,
	PieceTypeQueen,
	PieceTypeRook = 30,
	PieceTypePawn
};

//const�� �̿��� ����
//const int const_PieceTypeKing = 1;
//const int const_PieceTypeQueen = 2;
//const int const_PieceTypeRook = 3;
//const int const_PieceTypePawn = 4;


//������ ���� Ÿ��
enum class class_PieceType : unsigned long //�پ��� ���������� ��������
{
	King = 1,
	Queen,
	Rook = 10,
	Pawn
};

int main(void)
{
	//��Ȯ�� �Ҽ��� �������� �ʾƵ� ��밡��
	enum_PieceType enum_PieceKing = PieceTypeKing;
	enum_PieceType enum_PieceQueen = PieceTypeQueen;
	enum_PieceType enum_PieceRook = PieceTypeRook;
	enum_PieceType enum_PiecePawn = PieceTypePawn;

	cout << "enum_PieceKing : " << enum_PieceKing << endl;
	cout << "enum_PieceQueen : " << enum_PieceQueen << endl;
	cout << "enum_PieceRook : " << enum_PieceRook << endl;
	cout << "enum_PiecePawn : " << enum_PiecePawn << endl;

	if (enum_PieceKing == 10)
		cout << "enum_PieceKing" << "-" << "������ �񱳿��갡��" << endl;
	
	//������ ���õ� ��� ���� ����
	cout << enum_PieceKing + enum_PiecePawn << endl;

	//��Ȯ�� �Ҽ��� �����ؾ� ��밡��
	class_PieceType class_PieceKing = class_PieceType::King;
	class_PieceType class_PieceQueen = class_PieceType::Queen;
	class_PieceType class_PieceRook = class_PieceType::Rook;
	class_PieceType class_PiecePawn = class_PieceType::Pawn;

	//������ ����ȯ�� �ؾ߸� �������� ��°���
	cout << "class_PieceKing : " << static_cast<int>(class_PieceKing) << endl;
	cout << "class_PieceQueen : " << static_cast<int>(class_PieceQueen) << endl;
	cout << "class_PieceRook : " << static_cast<int>(class_PieceRook) << endl;
	cout << "class_PiecePawn : " << static_cast<int>(class_PiecePawn) << endl;

	if (static_cast<int>(class_PieceKing) == 1)
		cout << "class_PieceKing" << "-" << "����ȯ�� ���� �� �����ʹ� �񱳺Ұ���" << endl;

	//����ȯ�� ���� �� ������ ���õ� ��� ���� �Ұ���
	//cout << class_PieceType::King + class_PieceType::Queen << endl; 

	return 0;
}
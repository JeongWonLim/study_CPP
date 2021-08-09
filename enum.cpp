#include<iostream>
using namespace std;

// C언어 같은 열거형
/*
* 처음값을 따로 지정 안할 시 default 값은 0으로 지정
* 나머지 값은 앞에 값에 +1
*/
enum enum_PieceType {
	PieceTypeKing = 10,
	PieceTypeQueen,
	PieceTypeRook = 30,
	PieceTypePawn
};

//const를 이용한 열거
//const int const_PieceTypeKing = 1;
//const int const_PieceTypeQueen = 2;
//const int const_PieceTypeRook = 3;
//const int const_PieceTypePawn = 4;


//엄격한 열거 타입
enum class class_PieceType : unsigned long //다양한 정수형으로 지정가능
{
	King = 1,
	Queen,
	Rook = 10,
	Pawn
};

int main(void)
{
	//정확한 소속이 지정되지 않아도 사용가능
	enum_PieceType enum_PieceKing = PieceTypeKing;
	enum_PieceType enum_PieceQueen = PieceTypeQueen;
	enum_PieceType enum_PieceRook = PieceTypeRook;
	enum_PieceType enum_PiecePawn = PieceTypePawn;

	cout << "enum_PieceKing : " << enum_PieceKing << endl;
	cout << "enum_PieceQueen : " << enum_PieceQueen << endl;
	cout << "enum_PieceRook : " << enum_PieceRook << endl;
	cout << "enum_PiecePawn : " << enum_PiecePawn << endl;

	if (enum_PieceKing == 10)
		cout << "enum_PieceKing" << "-" << "정수와 비교연산가능" << endl;
	
	//정수와 관련된 모든 연산 가능
	cout << enum_PieceKing + enum_PiecePawn << endl;

	//정확히 소속을 지정해야 사용가능
	class_PieceType class_PieceKing = class_PieceType::King;
	class_PieceType class_PieceQueen = class_PieceType::Queen;
	class_PieceType class_PieceRook = class_PieceType::Rook;
	class_PieceType class_PiecePawn = class_PieceType::Pawn;

	//엄격한 형변환을 해야만 정수값을 출력가능
	cout << "class_PieceKing : " << static_cast<int>(class_PieceKing) << endl;
	cout << "class_PieceQueen : " << static_cast<int>(class_PieceQueen) << endl;
	cout << "class_PieceRook : " << static_cast<int>(class_PieceRook) << endl;
	cout << "class_PiecePawn : " << static_cast<int>(class_PiecePawn) << endl;

	if (static_cast<int>(class_PieceKing) == 1)
		cout << "class_PieceKing" << "-" << "형변환을 안할 시 정수와는 비교불가능" << endl;

	//형변환을 안할 시 정수와 관련된 모든 연산 불가능
	//cout << class_PieceType::King + class_PieceType::Queen << endl; 

	return 0;
}
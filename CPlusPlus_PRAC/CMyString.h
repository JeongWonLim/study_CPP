#pragma once
class CMyString
{
public:
	CMyString();
	~CMyString();

	int SetString(const char* pszParam);
	const char* GetString();
	void Release();


private:
	char* m_pszData; //문자열을 저장하기 위해 동적 할당한 메모리를 가리키는 포인터
	int m_nLength;		// 저장된 문자열의 길이
};


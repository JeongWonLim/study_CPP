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
	char* m_pszData; //���ڿ��� �����ϱ� ���� ���� �Ҵ��� �޸𸮸� ����Ű�� ������
	int m_nLength;		// ����� ���ڿ��� ����
};

#pragma once
class CMyString
{
public:
	CMyString();
	~CMyString();
	
	//���������
	CMyString(const CMyString& rhs);
	//���Կ�����
	CMyString& operator=(const CMyString& rhs);

	int SetString(const char* pszParam);
	const char* GetString() const;
	void Release();


private:
	char* m_pszData; //���ڿ��� �����ϱ� ���� ���� �Ҵ��� �޸𸮸� ����Ű�� ������
	int m_nLength;		// ����� ���ڿ��� ����
};


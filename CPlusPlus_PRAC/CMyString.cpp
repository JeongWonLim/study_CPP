#include "pch.h"
#include "CMyString.h"

CMyString::CMyString()
	: m_pszData(NULL), m_nLength(0)
{

}

CMyString::~CMyString()
{
	Release();
}

int CMyString::SetString(const char* pszParam)
{
	Release();

	if (pszParam == NULL)
		return 0;

	m_nLength = strlen(pszParam);  // ����

	if (m_nLength == 0)
		return 0;

	m_pszData = new char[m_nLength + 1]; // �����Ҵ�

	strcpy_s(m_pszData, sizeof(char)*(m_nLength + 1),pszParam);

	return 1;
}

const char* CMyString::GetString()
{
	return m_pszData;
}

void CMyString::Release()
{
	if (m_pszData != NULL)
		delete[] m_pszData;
	
	m_pszData = NULL;
	m_nLength = 0;
}

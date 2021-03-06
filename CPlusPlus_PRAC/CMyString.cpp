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

CMyString::CMyString(const CMyString& rhs): m_pszData(NULL), m_nLength(0)
{
	/*첫 구상
	m_nLength = rhs.m_nLength;
	
	m_pszData = new char[m_nLength + 1];
	strcpy_s(m_pszData, sizeof(char) * (m_nLength + 1), rhs.m_pszData);
	*/

	this->SetString(rhs.GetString());
}

CMyString& CMyString::operator=(const CMyString& rhs)
{
	if (this != &rhs)
		this->SetString(rhs.GetString());

	return *this;
}

int CMyString::SetString(const char* pszParam)
{
	Release();

	if (pszParam == NULL)
		return 0;

	m_nLength = strlen(pszParam);  // 길이

	if (m_nLength == 0)
		return 0;

	m_pszData = new char[m_nLength + 1]; // 동적할당

	strcpy_s(m_pszData, sizeof(char)*(m_nLength + 1),pszParam);

	return 1;
}

const char* CMyString::GetString() const
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

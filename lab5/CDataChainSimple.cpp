#include "pch.h"
#include "CDataChainSimple.h"
using namespace std;

CDataChain::CDataChain()//конструктор Chain
{
}

CDataChain::~CDataChain()//деструктор Chain
{
	m_sChain.clear();
}

size_t CDataChain::GetLength()//повертає довжину згенерованої послідовності цифр
{
	return m_sChain.length();
}

int CDataChain::Find(const char* sSubStr, int nPos)//повертає позицію входження підстрічки sSubStr починаючи із nPos.
{												   // -1, якщо підстрічки не знайдено
	size_t length = strlen(sSubStr);
	for (size_t i = 0; i < m_sChain.length(); i++)
	{
		if (m_sChain[i] != sSubStr[0])
			continue;
		size_t j = 0;
		for (; j < length; j++)
		{
			if ((i + j) >= m_sChain.length())
				return -1; 
			if (m_sChain[i + j] != sSubStr[j])
				break;
		}
		if ((j == length) && (m_sChain[i + j] == sSubStr[j - 1]))
			return i;
	}
	return -1;
}



CDataSimple::CDataSimple()//конструктор Simple
{
}
CDataSimple::~CDataSimple()//деструктор Simple
{
}

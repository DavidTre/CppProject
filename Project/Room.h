#pragma once
#include <string>

using namespace std;

class CRoom
{
public:
	CRoom()
	{
		m_bFirstTime = true;
	}

	void setDescr(string s)
	{
		m_sDescr = s;
	}

	string printDesc()
	{
		return m_sDescr;
	}

	bool isFirstTime()
	{
		return m_bFirstTime;
	}

	void setFirstTime(bool bFirstTime)
	{
		m_bFirstTime = bFirstTime;
	}

protected:
	string m_sName;
	string m_sDescr;
	bool m_bFirstTime;
};


#pragma once

#include <stdio.h>


class Log
{
public:
	Log();
	~Log();

	static Log* Get() {return m_instance;}

	void Print();
	void Debug();
	void Err();

private:
	static Log *m_instance;
};

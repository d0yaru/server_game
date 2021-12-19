#include "Log.h"

//---------------------------------------------------------
Log *Log::m_instance = nullptr;

Log::Log()
{	
	if (!m_instance) m_instance = this;
	else printf("*ERROR: Log уже был создан\n");
}

Log::~Log()
{
	m_instance = nullptr;
}
//---------------------------------------------------------

void Log::Print()
{
	printf("Name Test ... [ Print 10 ]\n");
}

void Log::Debug()
{
	printf("*DEBUG: Name Test ... [ Debug 10 ]\n");
}

void Log::Err()
{
	printf("*ERROR: Name Test ... [ Err 10 ]\n");
}

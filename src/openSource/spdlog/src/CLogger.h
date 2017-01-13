#ifndef _CLOGGER_H_
#define _CLOGGER_H_

#include "spdlog.h"

class CLogger
{
public:
	CLogger CLogger();
	CLogger ~CLogger();
	
private:
	
	auto m_clogger;
};

#endif 	// _CLOGGER_H_
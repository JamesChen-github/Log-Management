#ifndef _EM_LOG_H_
#define _EM_LOG_H_

#include <stdio.h>
#include <stdarg.h>

#define OPEN_LOG 1
#define LOG_LEVEL LOG_WARN
#define LOG_SAVE 1

typedef enum{
    LOG_DEBUG = 0,
    LOG_INFO,
    LOG_WARN,
    LOG_ERROR
}E_LOGLEVEL;

void EM_LOG(const int level,const char* fun,const int line,const char *fmt,...);

#define EMLog(level,fmt,...) EM_LOG(level,__FUNCTION__,__LINE__,fmt)

#endif
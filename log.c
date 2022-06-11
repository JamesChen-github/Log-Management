#include "log.h"


char * EMLOGLevelGet(const int level){
    if(level == LOG_DEBUG){
        return "DEBUG";
    }else if (level == LOG_INFO)
    {
        return "INFO";
    }else if (level == LOG_WARN)
    {
        return "WARN";
    }else if (level == LOG_ERROR)
    {
        return "ERROR";
    }
    return "UNKNOWN";
}

void EM_LOG(const int level,const char* fun,const int line,const char *fmt,...){
    #ifdef OPEN_LOG
    va_list arg;
    va_start(arg,fmt);
    char buf[1+vsnprintf(NULL,0,fmt,arg)];
    va_start(arg,fmt);
    vsnprintf(buf,sizeof(buf),fmt,arg);
    va_end(arg);
    if(level >= LOG_LEVEL){
        printf("[%s] [%s %d] %s\n",EMLOGLevelGet(level),fun,line,buf);
    }
    //存储日志
    #endif
}

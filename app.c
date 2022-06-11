#include <stdio.h>
#include "log.h"

int main(){

    EMLog(LOG_DEBUG,"app log debug");
    EMLog(LOG_INFO,"app log info");
    EMLog(LOG_WARN,"app log warning");
    EMLog(LOG_ERROR,"app log error");
    return 0;
}
#ifndef GDEFINE_H
#define GDEFINE_H

#include <iostream>
#include <string>
#include <time.h>
using namespace std;

#define TIME_LEN 20

#define LogInfo cout<<endl<<"["<< [](){ \
    char datetime[TIME_LEN]; \
    time_t tt = time(NULL); \
    tm * t=localtime(&tt); \
    sprintf(datetime,"%d-%02d-%02d %02d:%02d:%02d", \
    t->tm_year + 1900, \
    t->tm_mon + 1, \
    t->tm_mday, \
    t->tm_hour, \
    t->tm_min, \
    t->tm_sec); \
    string ss(datetime);\
    return ss; \
    }() <<  "] " << __LINE__<<" "<<__FUNCTION__<<" : "

#endif

#ifndef __REAL_SUBJECT_H
#define __REAL_SUBJECT_H
#include "Subject.h"

class RealSubject :public Subject
{
private:
    /* data */
public:
    RealSubject(/* args */);
    ~RealSubject();

    void operation();
};

#endif
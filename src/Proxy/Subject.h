#ifndef __SUBJECT_H
#define __SUBJECT_H

class Subject
{
private:
    /* data */
public:
    Subject(/* args */);
    ~Subject();

    virtual void operation() = 0;
};

#endif
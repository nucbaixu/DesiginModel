#ifndef _SINGLETON_H_
#define _SINGLETON_H_
#include "common.h"
// 多线程情况下，最好使用饿汉模式保证时空唯一性
// 下面的两种实现方式就是最简单的恶汉模式
// 三个特性：私有构造，静态成员，全局可见

class Singleton
{
private:
    static Singleton * pInstance;
private:
    Singleton(/* args */);
    ~Singleton();
public:
    static Singleton *GetInstance();

};


class Singleton2
{
private:
    static Singleton2 instance;
private:
    Singleton2(/* args */);
    ~Singleton2();

    Singleton2 & operator = (const Singleton2 &);
public:
    static Singleton2 *GetInstance();
};



#endif

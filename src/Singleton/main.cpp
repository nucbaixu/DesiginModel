#include "common.h"
#include "Singleton.h"

int main()
{
    Singleton *s1 = Singleton::GetInstance();
    Singleton *s2 = Singleton::GetInstance();
    cout << (void *)s1 << endl;
    cout << (void *)s2 << endl;

    Singleton2 *s3 = Singleton2::GetInstance();
    Singleton2 *s4 = Singleton2::GetInstance();
    
    cout << (void *)s3 << endl;
    cout << (void *)s4 << endl;


}
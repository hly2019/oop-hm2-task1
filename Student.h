#ifndef __STUDENT__H__
#define __STUDENT__H__
#include<iostream>
using namespace std;
class Student {
    public:
        string name;
        int Chinese;
        int Math;
        int English;
        int Total;
        friend ostream&operator <<(ostream&,Student&);//ok
        friend bool operator<( Student&, Student&);//ok
        Student(){
            Chinese=-1;
            Math=-1;
            English=-1;
        }
    };
#endif  //!__STUDENT__H__
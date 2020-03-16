#ifndef __STUDENTCOLLECTION__H__
#define __STUDENTCOLLECTION__H__
#include"Student.h"
#include<iostream>
using namespace std;
class StudentCollection{
    public:
        int n;//学生总数;
        string in;
        Student stu[1000];
        friend istream&operator >>(istream&,StudentCollection&);//ok
        friend ostream&operator <<(ostream&,StudentCollection&);//ok
        Student& operator[](string );//ok
        void sortByScore();//ok
        StudentCollection(){
            n=0;
        }
};
#endif  //!__STUDENTCOLLECTION__H__
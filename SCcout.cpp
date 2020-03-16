#include<iostream>
#include"StudentCollection.h"
#include"Student.h"
using namespace std;
ostream& operator<<(ostream&out,StudentCollection&sc){
    int n=sc.n;
    for(int i=0;i<=n-1;i++){
    out<<sc.stu[i].name<<"-Total-"<<sc.stu[i].Math+sc.stu[i].Chinese+sc.stu[i].English<<"-Chinese-"
    <<sc.stu[i].Chinese<<"-Math-"<<sc.stu[i].Math<<"-English-"<<sc.stu[i].English<<endl;
    }
}
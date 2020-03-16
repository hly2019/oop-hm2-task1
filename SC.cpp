#include<iostream>
#include"Student.h"
#include"StudentCollection.h"
using namespace std;
Student& StudentCollection::operator[](string s){
    for(int i=0;i<=n;i++){
        if(stu[i].name==s){
            stu[i].Total=stu[i].Chinese+stu[i].Math+stu[i].English;
            return stu[i];
        }
           
    }



}

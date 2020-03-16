#include<iostream>
#include"Student.h"
#include"StudentCollection.h"
using namespace std;
istream& operator>>(istream&in,StudentCollection&sc){
    in>>sc.in;
    int arr[10],nm=0;
    for(int i=0;i<=sc.in.length();i++){
        if(sc.in[i]=='-')arr[nm++]=i;
    }
    string a=sc.in.substr(0,arr[0]);
    string b=sc.in.substr(arr[0]+1,arr[1]-arr[0]-1);
    string c=sc.in.substr(arr[1]+1);
    int cc=atoi(c.c_str());
    bool judge=0;
    int num=0;
    for(int i=0;i<=310;i++){
        if(sc.stu[i].name==a){
            judge=1;
            num=i;
            break;
        }
    }
    if(!judge){
        sc.stu[sc.n].name=a;
        if(b=="Chinese")sc.stu[sc.n].Chinese=cc;
        if(b=="Math")sc.stu[sc.n].Math=cc;
        if(b=="English")sc.stu[sc.n].English=cc;
        sc.n++;
    }
    else if(judge) {
        if(b=="Chinese")sc.stu[num].Chinese=cc;
        if(b=="Math")sc.stu[num].Math=cc;
        if(b=="English")sc.stu[num].English=cc;
        if(sc.stu[num].Chinese!=-1&&sc.stu[num].English!=-1&&sc.stu[num].Math!=-1)sc.stu[num].Total=sc.stu[num].Chinese+sc.stu[num].Math+sc.stu[num].English;
    }
    sc.in.erase();
    return in;


}
/*genji-Chinese-97
hanzo-Math-80
hanzo-Chinese-12
genji-Math-1
tracer-Math-100
tracer-English-100
genji-English-94
hanzo-English-100
tracer-Chinese-1*/
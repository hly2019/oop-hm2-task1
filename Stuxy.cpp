#include<iostream>
#include"Student.h"
#include"StudentCollection.h"
using namespace std;
bool operator<( Student&a, Student&b){
    if(a.Total<b.Total||(a.Total==b.Total&&a.Chinese<b.Chinese)||(a.Total==b.Total&&a.Chinese==b.Chinese&&a.Math<b.Math)
    ||(a.Total==b.Total&&a.Chinese==b.Chinese&&a.Math==b.Math&&a.English<b.English))return 1;
    else return 0;
    /*else if(a.Total==b.Total){
        if(a.Chinese<b.Chinese)return 1;
        else if(a.Chinese>b.Chinese)return 0;
        else if(a.Chinese==b.Chinese){
            if(a.Math<b.Math)return 1;
            else if(a.Math>b.Math)return 0;
            else if(a.Math==b.Math){
                if(a.English<b.English)return 1;
                else if(a.English>=b.English)return 0;
                
            }
        }
    }*/
}
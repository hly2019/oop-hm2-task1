#include<iostream>
#include"Student.h"
using namespace std;
ostream&operator<< (ostream&out,Student& stu){
    out<<stu.name<<"-Total-"<<stu.Math+stu.Chinese+stu.English<<"-Chinese-"<<stu.Chinese<<"-Math-"
    <<stu.Math<<"-English-"<<stu.English;
    return out;
}
/*tracer-Total-201-Chinese-1-Math-100-English-100
genji-Total-192-Chinese-97-Math-1-English-94

genji-Total-192-Chinese-97-Math-1-English-94
hanzo-Total-192-Chinese-12-Math-80-English-100

tracer-Total-201-Chinese-1-Math-100-English-100
genji-Total-192-Chinese-97-Math-1-English-94
hanzo-Total-192-Chinese-12-Math-80-English-100*/
#include<iostream>
#include"StudentCollection.h"
#include"Student.h"
using namespace std;
void StudentCollection:: sortByScore(){
	for(int i=0;i<=n-1;i++)
		for(int j=0;j<=n-1-i;j++){
			if(stu[j].Total<stu[j+1].Total)swap(stu[j],stu[j+1]);
            if(stu[j].Total==stu[j+1].Total&&stu[j].Chinese<stu[j+1].Chinese)swap(stu[j],stu[j+1]);
            if(stu[j].Total==stu[j+1].Total&&stu[j].Chinese==stu[j+1].Chinese&&stu[j].Math<stu[j+1].Math)swap(stu[j],stu[j+1]);
            if(stu[j].Total==stu[j+1].Total&&stu[j].Chinese==stu[j+1].Chinese&&stu[j].Math==stu[j+1].Math&&stu[j].English<stu[j+1].English)swap(stu[j],stu[j+1]);
            

		}


}
/*void bsort(int*arr,int n){
	for(int i=0;i<=n-1;i++)
		for(int j=i;j<=n-1;j++){
			if(arr[i]>=arr[j])swap(arr[i],arr[j]);
		}
}*/
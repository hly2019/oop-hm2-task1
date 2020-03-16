#include "Student.h"
#include "StudentCollection.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;

  StudentCollection sc;
  for(int i = 0; i < 3* n; i++){
    cin >> sc;//SC的cin重载
  }

  int m;
  cin >> m;
  for(int i = 0; i < m; i++){
    string nameA, nameB;
    cin >> nameA >> nameB;
    Student sA = sc[nameA];//SC的[]重载
    Student sB = sc[nameB];
    if(sA < sB){//stu的<重载
      cout << sB << "\n" << sA << "\n" << endl;//Student的cout重载
    }else{
      cout << sA << "\n" << sB << "\n" << endl;
    }
  }

  sc.sortByScore();//按照total排序
  cout << sc;//SC的cout<<重载；

  return 0;
}
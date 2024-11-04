#include<iostream>
using namespace std;

int main(){
   string str = "Tejas";
   int len = str.size();
   str[len - 1] = 'V';
   cout << str[len - 1];
   return 0;
}
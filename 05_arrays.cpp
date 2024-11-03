#include<bits/stdc++.h>
using namespace std;

int main(){
   double arr[5]; 
   cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
   
   cout << arr[3]; 
   return 0;
}


// 2d array
#include<bits/stdc++.h>
using namespace std;

int main(){
   int arr[3][5];

   arr[1][3] = 78;
   cout << arr[1][2]; //garbage value because we have not initiliased it with a value
   return 0;
}

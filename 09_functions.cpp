// functions are set of code which performs something for you
// functions are used to modularise code
// functions are used to increase readbility
// functions are used to use same code multiple times
// void -> which does not returns anything
// return 
// parameterised
// non parameterised

#include<bits/stdc++.h>
using namespace std;

void printName(string name) {
   cout << "hello " << name << endl;
}
int main(){
   string name;
   cin >> name;
   printName(name);

   string name2;
   cin >> name2;
   printName(name2);
   return 0;
}

#include<bits/stdc++.h>
using namespace std;

// return function

int sum(int num1, int num2){
   int num3 = num1 + num2;
   return num3;
}
int main(){
   int num1, num2;
   cin >> num1 >> num2;
   int result = sum(num1, num2);
   cout << result;
   return 0;
}

// without return function using void 
#include<bits/stdc++.h>
using namespace std;

void sum(int num1, int num2){
   int num3 = num1 + num2;
   cout << num3;
}

int main(){
   int num1, num2;
   cin >> num1 >> num2;
   sum(num1, num2);
   return 0;
}

// in-built function in math.h
#include<bits/stdc++.h>
using namespace std;

int main(){
   int num1, num2;
   cin >> num1 >> num2;

   int minimum = min(num1, num2); // 6 1
   cout << minimum << endl; // prints 1

   int maximum = max(num1, num2);
   cout << maximum; // prints 6

   return 0;
}

#include<bits/stdc++.h>
using namespace std;

int maxx(int num1, int num2){
   if(num1 >= num2) return num1; // even include {} one line so wrote it like that
   else return num2;
}
int main(){
   int num1, num2;
   cin >> num1 >> num2;
   int maximum = maxx(num1, num2);
   cout << maximum;
   return 0;
}
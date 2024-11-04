#include<bits/stdc++.h>
using namespace std;

void doSomething(int num){
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}
int main(){
    int num = 10;
    doSomething(num);
    cout << num << endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

// pass by value
void doSomething(string str){
    str[0] = 't';
    cout << str << endl;
}
int main(){
    string str = "raj";
    doSomething(str);
    cout << str << endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

// pass by reference -> original value is passed
void doSomething(string &str){
    str[0] = 't';
    cout << str << endl;
}
int main(){
    string str = "raj";
    doSomething(str);
    cout << str << endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

// pass by reference
void doSomething(int &num){
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}
int main(){
    int num = 10;
    doSomething(num);
    cout << num << endl;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

// arrays always goes with reference
void doSomething(int arr[], int n){
    arr[0] += 100;
    cout << "value inside function: " << arr[0] << endl;
}
int main(){
    int n = 5;
    int arr[n];
    for(int i = 0; i <= n - 1; i = i + 1){
        cin >> arr[i];
    }

    doSomething(arr, n);
    cout << "value inside int main: " << arr[0] << endl;
    return 0;
}
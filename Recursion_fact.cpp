#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    // Base case 
    if (n==0)return 1;

    // Recursive case 
    int result = n*fact(n-1);
    return result;
}
int main (){
    cout<<fact(5)<<endl;
    return 0;
}
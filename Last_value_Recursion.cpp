#include<bits/stdc++.h>
using namespace std;
void fun (int n){
    // Base case
    if (n==0)return ;
    // function body
    int last_digit = n%10;
    cout<<last_digit<<" ";
    n/=10;
    fun (n);

    // if i use 
    /*
    int last_digit = n%10;
    cout<<last_digit<<" ";
    n/=10;
    if (n==0)return ;
    fun (n); it will print same result before i do
    // but i use if condition after function call
    // it will print 0 lot of time

    */
}
int main ()
{   
    fun (435);
    cout<<endl;
    return 0;
}
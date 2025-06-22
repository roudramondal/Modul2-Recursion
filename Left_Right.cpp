#include<bits/stdc++.h>
using namespace std;
void fun (int n){
    // Base case
   if (n==0)return ;
    // function body
    int last_digit = n%10;
    n/=10;
    fun (n);
    cout<<last_digit<<" ";
}
int main ()
{   
    fun (435);
    cout<<endl;
    return 0;
}
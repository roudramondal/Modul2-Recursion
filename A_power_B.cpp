#include<bits/stdc++.h>
using namespace std;
int pow (int a,int b)
{
  // Base case
  if ( b==0) return 1;

  // Function body
  int result = a*pow(a,b-1);
   return result ;
  
}
int main (){

    // pow(2,4);
    cout<<pow(2,4)<<endl;
    return 0;
}
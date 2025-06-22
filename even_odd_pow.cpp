#include<bits/stdc++.h>
using namespace std;
int pow (int a,int b)
{
  // Base case
  if ( b==0) return 1;

  // Function body
  int result;
  if (b%2==0){
    // even =b
    int temp = pow (a,b/2);

    result = temp *temp; 
  }

  else {
    // if odd = b
    result  = a*pow (a,b-1);
  }
  return result ;
  
}
int main (){

    // pow(2,4);
    int x,y;
    cin >>x>>y;

    cout<<pow(x,y)<<endl;
    return 0;
}
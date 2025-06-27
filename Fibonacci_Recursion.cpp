// Febonacci relation fib (n)=fib (n-1)+fib(n-2)
// Base case fib (0)=0,fib (1)=1
 #include<bits/stdc++.h>
 using namespace std;
 int fibo(int n){
    // Base case 
    if (n==0)return 0;
    if (n==1)return 1;
    // Function body
    int result = fibo (n-1)+fibo (n-2); // this the method of fibonacci series
    return result;

 }
 int main (){
    //cout<<fibo(0)<<" "<<fibo(1)<<" "<<fibo(2)<<" "<<fibo(3)<<" "<<fibo(4)<<" "<<fibo(5)<<" "<<fibo(6)<<" "<<fibo(7)<<endl;
    return 0;
}

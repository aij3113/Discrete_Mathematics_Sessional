#include<bits/stdc++.h>
using namespace std;

int re(int n){

    if(n==1) return 0;
    else if (n==2) return 1;

    else return re(n-1)+re(n-2);
}


int main(){
    int n;

    cout<<"Enter the Value of n : ";
    cin>>n;
    cout<<"\nThe value of n'th Fibonacci : "<<re(n)<<endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"\n\tThe Series is  [[ sum of (a=1 to n) 5*a  ]]\n"<<endl;

    int n,i,sum=0;

    cout<<"Enter the Value of n : ";
    cin>>n;

    for(i=1;i<=n;i++){
        sum+=(5*i);
    }
    cout<<"\nThe Summation is : "<<sum<<endl;


    return 0;
}


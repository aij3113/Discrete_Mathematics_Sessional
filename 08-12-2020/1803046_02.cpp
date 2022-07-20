#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Max 1000000007


ll po(ll a,ll n){
    ll rs=1;
    while(n){
        if(n%2){
            rs=(rs*a)%Max;
        }
        n=n/2;
        a=(a*a)%Max;
    }
    return rs;
}

ll fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return ((n%Max)*fact(n-1))%Max;
    }
}

void per(int n,int r){
    cout<<"\nThe Permutation of "<<n<<" and "<<r<<" is: "<<((fact(n)%Max)*(po(fact(n-r),Max-2)%Max))%Max<<endl;
}

void com(int n,int r){
    cout<<"\nThe Combination of "<<n<<" and "<<r<<" is: "<<((fact(n)%Max)*(po(fact(r)*fact(n-r),Max-2)%Max))%Max<<endl;
}

int main(){
    int n,r;

    cout<<"Enter the Value of N and R: ";
    cin>>n>>r;
    if(r>n){
        cout<<"Invalid Input"<<endl;
    }

    else{
        per(n,r);
        com(n,r);
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool p[1000003];

void seive(ll n){
    for(ll i=0;i<n+1;i++){
        p[i]=true;
    }

    for(ll i=2;i*i<=n;i++){
        if(p[i]){
            for(ll j=i*i;j<=n;j+=i){
                p[j]=false;
            }
        }
    }

    for(ll i=2;i<=n;i++){
        if(p[i]){
            cout<<" "<<i;
        }
    }

    cout<<endl;
}

int main(){
    ll a,b,c,n;

    cout<<" Enter N: ";
    cin>>n;

    cout<<"\n The Prime Numbers till N are: "<<endl;
    seive(n);


    return 0;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mx 1000003
#define MaX 1000000007

bool p[1000003];

void seive(){
    for(ll i=0;i<mx;i++){
        p[i]=true;
    }
    for(ll i=2;i*i<=mx;i++){
        if(p[i]){
            for(ll j=i*i;j<=mx;j+=i){
                p[j]=false;
            }
        }
    }
}
ll po(ll a,ll n){
    ll rs=1;
    while(n){
        if(n%2){
            rs=(rs*a)%MaX;
        }
        n=n/2;
        a=(a*a)%MaX;
    }
    return rs;
}

ll fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return ((n%MaX)*fact(n-1))%MaX;
    }
}

ll com(int n,int r){
    return ((fact(n)%MaX)*(po(fact(r)*fact(n-r),MaX-2)%MaX))%MaX;
}

int main(){
    seive();
    int m;
    cin>>m;

    vector<int>a;

    for(int i=2;i<=m;i++){
        if(p[i]){
            a.push_back(i);
        }
    }

    for(int i=0;i<a.size()-1;i++){
        for(int j=i+1;j<a.size();j++){
            ll x=a[i]*a[j];
            ll y=a[i]+a[j];
            int n=(y+1)/2;
            ll Max=pow(x,n);
            Max=Max%1000;
            for(int k=1;k<=n;k++){
                ll var= (com(n,k)*pow(x,n-k)*pow(y,k));
                var=var%1000;
                if(var>Max);{
                    Max=var;
                }
            }
            cout<<a[i]<<" "<<a[j]<<" "<<Max<<endl;
        }
    }

    return 0;
}

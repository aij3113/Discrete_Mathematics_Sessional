#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll a,b,x,n,m;
    vector<int>v;

    cout<<"Enter B N & M:"<<endl;
    cin>>b>>n>>m;

    a=n;

    while(a){
        v.push_back(a%2);
        a/=2;
    }

    a=b%m;
    x=1;

    for(int i=0;i<v.size();i++){
        if(v[i]){
            x=(x*a)%m;
        }
        a=(a*a)%m;
    }

    cout<<"\n (B^N) % M : ";
    cout<<x<<endl;


    return 0;
}

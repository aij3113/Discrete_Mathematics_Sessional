#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll a,b,c,m;

    cout<<"Enter A B C & M:"<<endl;
    cin>>a>>b>>c>>m;

    cout<<"\n (A*B*C) % M : ";
    cout<<((a%m)*(b%m)*(c%m))%m<<endl;


    return 0;
}

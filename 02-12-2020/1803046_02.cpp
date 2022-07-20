#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    ll a,b,x,y,r,i,j,q[1005],s[1005],t[1005];

    s[0]=1; s[1]=0;
    t[0]=0; t[1]=1;

    cout<<"Enter a b: ";
    cin>>a>>b;

    x=max(a,b); y=min(a,b);

    j=1;
    while(y){
        r=x%y;
        q[j]=x/y;
        x=y;
        y=r;
        j+=1;
    }

    for(i=2;i<j;i++){
        s[i]=(s[i-2])-(q[i-1]*s[i-1]);
        t[i]=(t[i-2])-(q[i-1]*t[i-1]);
    }

    cout<<"\n GCD("<<a<<","<<b<<") = "<<x<<" = ("<<s[j-1]<<"*"<<max(a,b)<<") + ("<<t[j-1]<<"*"<<min(a,b)<<")"<<endl;



    return 0;
}

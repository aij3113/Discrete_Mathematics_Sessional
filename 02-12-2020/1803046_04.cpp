#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool p[1000007];

void seive(){
    for(ll i=0;i<1000005;i++){
        p[i]=true;
    }

    p[0]=false;
    p[1]=false;
    for(ll i=2;i*i<1000005;i++){
        if(p[i]){
            for(ll j=i*i;j<1000005;j+=i){
                p[j]=false;
            }
        }
    }
}

ll gcd(ll a, ll b){
    ll r;
    if(a<b){
        swap(a,b);
    }
    while(b){
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int main(){
    seive();
    srand(time(0));

    ll a,b,x,y,x1,y1,r,d,e,i,j,q[1005],s[1005],t[1005];

    while(1){
        a=rand()%1000005;
        b=rand()%1000005;

        if(p[a]&&p[b]){
            break;
        }
    }

    x=a-1; y=b-1;

    for(i=2;;i++){
        e=gcd(x*y,i);
        if(e==1){
            e=i;
            break;
        }
    }


    s[0]=1; s[1]=0;
    t[0]=0; t[1]=1;

    x1=x*y;
    y1=e;
    j=1;
    while(y1){
        r=x1%y1;
        q[j]=x1/y1;
        x1=y1;
        y1=r;
        j+=1;
    }

    for(i=2;i<j;i++){
        s[i]=(s[i-2])-(q[i-1]*s[i-1]);
        t[i]=(t[i-2])-(q[i-1]*t[i-1]);
    }

    d=t[j-1];

    cout<<"\nThe prime number p: "<<a;
    cout<<"   q: "<<b<<endl;
    cout<<"\nThe Value of e: "<<e<<" and d: "<<d<<endl;




    return 0;
}


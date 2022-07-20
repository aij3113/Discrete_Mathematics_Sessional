#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool p[1000007];

void seive(){
    for(ll i=0;i<1000005;i++){
        p[i]=true;
    }

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
    while(b){
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int main(){
    seive();

    ll n,x,y,i,j;

    cout<<"Enter n: ";
    cin>>n;

    if(p[n]){
        cout<<"\nInvalid Input"<<endl;
    }

    else{
        bool flag=true;
        for(i=2;i<n;i++){
            x=gcd(n,i);
            if(x==1){
                y=pow(x,n-1)-1;
                if(y%n){
                    flag=false;
                }
            }
            if(!flag){
                break;
            }
        }

        if(flag){
            cout<<n<<" is a Carmichael Number"<<endl;
        }
        else{
            cout<<n<<" is not a Carmichael Number"<<endl;
        }
    }


    return 0;
}


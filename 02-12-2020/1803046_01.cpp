#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll a,c,n,m,i,j;

    cout<<"Input n: ";
    cin>>n;

    ll x[n+3];

    cout<<"Enter Multiplier a: ";
    cin>>a;
    cout<<"Enput Modulus m: ";
    cin>>m;
    cout<<"Enput Increment c: ";
    cin>>c;
    cout<<"Enput Seed x0: ";
    cin>>x[0];

    if(!((a>=2&&a<m)&&(c>=0&&c<m)&&(x[0]>=0&&x[0]<m))){
        cout<<"\nInvalid Input of a,c,m,x0"<<endl;
    }
    else{
        for(i=1;i<=n;i++){
            x[i]=((a*x[i-1])+c)%m;
        }


        for(i=1;i<=n;i++){
            cout<<x[i]<<"\t";
        }
        cout<<"OK"<<endl;
    }

    return 0;
}



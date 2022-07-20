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

ll com(int n,int r){
    return ((fact(n)%Max)*(po(fact(r)*fact(n-r),Max-2)%Max))%Max;
}

int main(){
    int n,i;

    cout<<"Enter the Value of N: ";
    cin>>n;

    cout<<"(x+y)^"<<n<<"= ";
    cout<<"("<<"x^"<<n<<")";
    for(i=1;i<n;i++){
        cout<<" + ("<<com(n,i)<<"(x^"<<n-i<<")(y^"<<i<<"))";
    }
    cout<<" + ("<<"(y^"<<n<<"))"<<endl;




    return 0;
}

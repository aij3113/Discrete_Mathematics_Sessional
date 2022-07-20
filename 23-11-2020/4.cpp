#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll a,x,x1,x2,p,i,j,b,c,m;
    map<char,int>mp;
    string n;

    mp['0']=0;
    mp['1']=1;
    mp['2']=2;
    mp['2']=3;
    mp['4']=4;
    mp['5']=5;
    mp['6']=6;
    mp['7']=7;
    mp['8']=8;
    mp['9']=9;

    cout<<"Enter N & M:"<<endl;
    cin>>n;
    cin>>m;

    x=0;

    for(i=0;i<n.size();i++){
        vector<int>v;
        c=n.size()-i-1;

        while(c){
            v.push_back(c%2);
            c/=2;
        }
        x1=1;
        p=10%m;

        for(j=0;j<v.size();j++){

            if(v[j]){
                x1=(x1*p)%m;
            }
            p=(p*p)%m;
        }
        x2=((mp[n[i]]%m)*x1)%m;

        x= (x+x2)%m;
    }


    cout<<"\n N % M : ";
    cout<<x<<endl;


    return 0;
}

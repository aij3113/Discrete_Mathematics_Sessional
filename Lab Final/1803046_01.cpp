#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
    int n,i,j,k,y;
    double x;

    vector<double>st,en;
    vector<int>nu,att;

    cin>>n;
    cin>>y;

    while(y!=0){
        nu.push_back(y);
        cin>>x; st.push_back(x);
        cin>>x; en.push_back(x);
        cin>>y; att.push_back(y);
        cin>>y;
    }

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(st[i]>st[j]){
                swap(st[i],st[j]);
                swap(nu[i],nu[j]);
                swap(en[i],en[j]);
                swap(att[i],att[j]);
            }
        }
    }

    vector<int> sq,vsq;
    int m=-5;
    for(i=0;i<n-1;i++){
        vsq.clear();
        vsq.push_back(nu[i]);
        ll End=en[i];
        int cnt=att[i];
        for(j=i+1;j<n;j++){
            if(st[j]>=End){
                cnt+=att[j];
                End=en[j];
                vsq.push_back(nu[j]);
            }
       }

       if(cnt>m){
            m=cnt;
            sq.clear();
            for(k=0;k<vsq.size();k++){
                sq.push_back(vsq[k]);
            }
       }

    }

    cout<<endl;
    for(i=0;i<sq.size();i++){
        cout<<sq[i]<<" ";
    }
    cout<<m<<endl;


    return 0;
}

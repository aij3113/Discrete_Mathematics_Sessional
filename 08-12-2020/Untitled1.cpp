#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);cout.tie(NULL);
 int n;
 cin>>n;
 vector<int>v(n);
 for(int i=0;i<n;i++)cin>>v[i];

 vector<int>dp(n,1),par(n,-1),dp1(n,1),par1(n,-1);

 for(int i=1;i<n;i++){
    for(int j=0;j<i;j++){
        if(v[j]<v[i]){
            if(dp[j]+1>dp[i]){
                dp[i]=dp[j]+1;
                par[i]=j;
                cout<<"dpx"<<i<<": "<<dp[i]<<" px"<<i<<": "<<j<<endl;
            }
        }
        if(v[j]>v[i]){
            if(dp1[j]+1>dp1[i]){
                dp1[i]=dp1[j]+1;
                par1[i]=j;
                cout<<"dpy"<<i<<": "<<dp1[i]<<" py"<<i<<": "<<j<<endl;
            }
        }
    }
 }


 int ind=max_element(dp.begin(),dp.end())-dp.begin();
 int ind1=max_element(dp1.begin(),dp1.end())-dp1.begin();

 cout<<"id1: "<<ind<<" id2: "<<ind1<<endl;
 vector<int>ans,ans1;

 while(ind!=-1){
    ans.push_back(v[ind]);
    ind=par[ind];
 }

 while(ind1!=-1){
    ans1.push_back(v[ind1]);
    ind1=par1[ind1];
 }

 reverse(ans.begin(),ans.end());
 reverse(ans1.begin(),ans1.end());
 cout<<"Length "<<ans.size()<<"\n";
 for(int x:ans)cout<<x<<" ";
 cout<<"\n";
 cout<<"Length "<<ans1.size()<<"\n";
 for(int x:ans1)cout<<x<<" ";
}

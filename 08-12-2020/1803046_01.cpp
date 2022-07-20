#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,j,inc_max=0,dec_max=0;

    cout<<"Enter the Value of N: ";
    cin>>n;

    int arr[n+5];
    vector<int>inc[n+5],dec[n+5];

    cout<<"Enter N Integers: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    for(i=0;i<n;i++){
        inc[i].push_back(arr[i]);
        dec[i].push_back(arr[i]);
        for(j=i+1;j<n;j++){
            if(arr[j]>inc[i].back()){
                inc[i].push_back(arr[j]);
            }
            if(arr[j]<dec[i].back()){
                dec[i].push_back(arr[j]);
            }
        }
        if(inc[i].size()>inc[inc_max].size()){
            inc_max=i;
        }
        if(dec[i].size()>dec[dec_max].size()){
            dec_max=i;
        }
    }

    cout<<"\nMax Increasing Subsequence: ";
    for(i=0;i<inc[inc_max].size();i++){
        cout<<inc[inc_max][i]<<" ";
    }

    cout<<"\nMax Decreasing Subsequence: ";
    for(i=0;i<dec[dec_max].size();i++){
        cout<<dec[dec_max][i]<<" ";
    }
    cout<<endl;


    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,t,j=0,sum=0;
    cout<<"Enter Number of Speakers : ";
    cin>>n;
    int arr[n+3];
    cout<<"Enter Time duration of Speech Speakers in Minute : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);

    cout<<"Enter Total Time in Minutes : ";
    cin>>t;

    for(i=0;i<n;i++){
        sum+=arr[i];
        if(sum>t){
            break;
        }
        j+=1;
    }
    cout<<"\nMaximum Number of Speaker is : "<<j<<endl;


    return 0;
}

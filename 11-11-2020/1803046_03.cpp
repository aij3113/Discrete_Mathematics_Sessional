#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};

    int cnt=0;

    int n=sizeof(arr)/4,j=n; cnt++;

    for(j=1;j<n;j++){
        cnt+=2;
        int i=0; cnt++;

        while(arr[j]>arr[i]){
            i+=1; cnt++;
        }cnt++;
        int m=arr[j]; cnt++;

        for(int k=0;k<j-i-1;k++){
            cnt+=2;
            arr[j-k]=arr[j-k-1]; cnt++;
        }
        cnt++;

        arr[i]=m; cnt++;
    }
    cnt++;

    cout<<"N: "<<n<<"\tCount: "<<cnt<<endl;


    return 0;
}

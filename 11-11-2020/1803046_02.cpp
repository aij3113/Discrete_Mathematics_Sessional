#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};

    int cnt=0;

    int i=0,j=0; cnt++;
    int n=sizeof(arr)/4; cnt++;

    for(i=0;i<n-1;i++){
        cnt+=2;
        for(j=0;j<n-1-i;j++){
            cnt+=2;
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                cnt+=3;
            }
            cnt++;
        }
        cnt++;
    }
    cnt++;


    cout<<"N: "<<n<<"\tCount: "<<cnt<<endl;



    return 0;
}

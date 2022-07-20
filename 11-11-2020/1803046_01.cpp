#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

    int cnt=0;

    int i=0; cnt++;
    int n=sizeof(arr)/4,j=n; cnt++;
    int x=1; cnt++;

    while(i<j){
        cnt++;
        int m=(i+j)/2;  cnt++;
        if(x>arr[m]){
            i=m+1;  cnt+=2;
        }
        else{
            j=m;  cnt+=2;
        }
    }
    cnt++;

    if(x==arr[i]){
        cout<<"location : "<<arr[i]<<endl; cnt+=2;
    }
    else{
        cout<<"Location not Found."<<endl; cnt+=2;
    }

    cout<<"N: "<<n<<"\tCount: "<<cnt<<endl;

    return 0;
}

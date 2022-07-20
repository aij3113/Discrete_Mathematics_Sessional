#include<bits/stdc++.h>

using namespace std;

int t(int x);

int main(){
    int x,it=0,tx=0;

    cout<<"Enter X: ";
    cin>>x;

    cout<<"\n X\tT(X)\tIteration"<<endl;
    while(tx!=1){
        it++;
        tx=t(x);
        cout<<" "<<x<<"\t"<<tx<<"\t "<<it<<endl;
        x=tx;
    }
    cout<<"\n Final X: "<<x<<endl;

    return 0;
}

int t(int x){
    if((x%2)!=0)
        return (3*x+1);
    else
        return (x/2);
}

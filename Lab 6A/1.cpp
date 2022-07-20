#include<bits/stdc++.h>

using namespace std;

int x[100],y[100],nx,ny;
int All_x_All_y();
int All_x_Some_y();
int Some_x_All_y();
int Some_x_Some_y();

int main(){
    cout<<"\n Expression:   X + Y = 0"<<endl;

    cout<<"\nEnter Number of x: ";cin>>nx;
    cout<<" Enter Domain of X: ";
    for(int i=0;i<nx;i++){
        cin>>x[i];
    }

    cout<<"\nEnter Number of y: ";cin>>ny;
    cout<<" Enter Domain of Y: ";
    for(int i=0;i<ny;i++){
        cin>>y[i];
    }

    cout<<"\n\t For All X All Y P(X,Y) : "<<All_x_All_y()<<endl;
    cout<<"\t For All X Some Y P(X,Y) : "<<All_x_Some_y()<<endl;
    cout<<"\t For Some X All Y P(X,Y) : "<<Some_x_All_y()<<endl;
    cout<<"\t Some All X Some Y P(X,Y) : "<<Some_x_Some_y()<<endl;

    return 0;
}

int All_x_All_y(){
    int flag;
    for(int i=0;i<nx;i++){
        flag=1;
        for(int j=0;j<ny;j++){
            if((x[i]+y[j])!=0){
                flag=0;
                break;
            }
        }
        if(flag==0)
            break;
    }

    return flag;
}

int All_x_Some_y(){
    int flag;
    for(int i=0;i<nx;i++){
        flag=0;
        for(int j=0;j<ny;j++){
            if((x[i]+y[j])==0){
              flag=1;
              break;
            }
        }
        if(flag==0)
            break;
    }

    return flag;
}

int Some_x_All_y(){
    int flag;
    for(int i=0;i<nx;i++){
        flag=1;
        for(int j=0;j<ny;j++){
            if((x[i]+y[j])!=0){
              flag=0;
              break;
            }
        }
        if(flag==1)
            break;
    }

    return flag;
}

int Some_x_Some_y(){
    int flag;
    for(int i=0;i<nx;i++){
        flag=0;
        for(int j=0;j<ny;j++){
            if((x[i]+y[j])==0){
              flag=1;
              break;
            }
        }
        if(flag==1)
            break;
    }

    return flag;
}

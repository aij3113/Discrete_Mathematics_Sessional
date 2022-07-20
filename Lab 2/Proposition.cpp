// Implementation of Various Logics in terms of Expression
///   You are requested to use NOT(!) operator in Brackets with propositions.
///   For Ex: (!P)>(Q^R)   ;
/**   Otherwise the program may show wrong answers.    */

#include<bits/stdc++.h>
#include<string.h>

using namespace std;

stack <bool> val;
stack <char> optr;
void OR();
void AND();
void NOT();
void IMPLICATION();
void setstack();
void findv();
void instack(char a[],bool p,bool q,bool r);
bool p,q,r;

int main(){
    char a[100];
    int i,j,k;

    cout<<"\t Or: /\n\t And: ^\n\t Not: !\n\tImplication: >\n"<<endl;

    cout<<"Enter Your Expression: ";
    cin>>a;

    cout<<"\n\tP\tQ\tR\t"<<a<<"\n"<<endl;

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<2;k++){
                p=i; q=j; r=k;
                instack(a,p,q,r);
                findv();
                cout<<"\t"<<p<<"\t"<<q<<"\t"<<r<<"\t"<<val.top()<<endl;
            }
        }
    }

    return 0;
}

void instack(char a[],bool p,bool q,bool r){
    for(int i=0;i<strlen(a);i++){
        if(a[i]=='p'||a[i]=='P')
            val.push(p);
        else if(a[i]=='q'||a[i]=='Q')
            val.push(q);
        else if(a[i]=='r'||a[i]=='R')
            val.push(r);
        else if(a[i]==')')
            setstack();
        else
            optr.push(a[i]);
    }
}

void setstack(){
    char c;
    c=optr.top();
    optr.pop();
    while(c!='('){
        if(c=='!')
            NOT();
        else if(c=='/')
            OR();
        else if(c=='^')
            AND();
        else if(c=='>')
            IMPLICATION();
        c=optr.top();
        optr.pop();
    }
}

void findv(){
    char c;
    while(!optr.empty()){
        c=optr.top();
        optr.pop();
        if(c=='!')
            NOT();
        else if(c=='/')
            OR();
        else if(c=='^')
            AND();
        else if(c=='>')
            IMPLICATION();
    }
}

void OR(){
    bool a,b;
    a=val.top();val.pop();
    b=val.top();val.pop();
    if(a==0&&b==0)
        val.push(0);
    else
        val.push(1);
}

void AND(){
    bool a,b;
    a=val.top();val.pop();
    b=val.top();val.pop();
    if(a==1&&b==1)
        val.push(1);
    else
        val.push(0);
}

void NOT(){
    bool a;
    a=val.top();val.pop();
    if(a==0)
        val.push(1);
    else
        val.push(0);
}

void IMPLICATION(){
    bool a,b;
    a=val.top();val.pop();
    b=val.top();val.pop();
    if(a==0&&b==1)
        val.push(0);
    else
        val.push(1);
}

/*
This Program is Created by "MD ARIFUL ISLAM" Roll No:1803046
Department of Computer Science & Engineering
Rajshahi University of Engineering & Technology

*/


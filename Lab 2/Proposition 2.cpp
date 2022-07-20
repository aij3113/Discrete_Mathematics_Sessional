// Implementation of Various Logical Propositions in terms of Expression

#include<bits/stdc++.h>
#include<string.h>

using namespace std;

map<char,bool> value;
stack <bool> val;
stack <char> op;
void genvalue(string a);
char c[26];
void OR();
void AND();
void NOT();
void IMPLICATION();
void setstack();
void findv();
int inprechar(char c);
int outprechar(char c);
void operation(char c);
void instack(string a);
void getch(string a);

int main(){
    int i,j,k;
    string a;

    cout<<"\t Or: /\n\t And: ^\n\t Not: !\n\tImplication: >\n"<<endl;

    cout<<"Enter Your Expression: ";
    cin>>a;

    getch(a);

    cout<<endl;
    for(i=0;i<strlen(c);i++){
        cout<<" "<<c[i];
    }
    cout<<"  "<<a<<endl;

    genvalue(a);


    return 0;
}

void getch(string a){
    int A,l=0;

    for(int i=0;i<a.size();i++){
        if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122)){
            A=0;
            for(int j=0;j<strlen(c);j++){
                if(a[i]==c[j]){
                    A=1;
                    break;
                }
            }
            if(A==0){
            c[l]=a[i];
            l++;
            }
        }
    }

    //cout<<c<<endl;;
}

void instack(string a){
    int j,k;
    for(int i=0;i<a.size();i++){
        if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))
            val.push(value[a[i]]);
        else if(a[i]==')')
            setstack();
        else if(a[i]=='(')
            op.push(a[i]);
        else{
            if(op.empty()||outprechar(a[i])>inprechar(op.top())){
                op.push(a[i]);
            }
            else if(outprechar(a[i])<inprechar(op.top())){
                while(outprechar(a[i])<inprechar(op.top())){
                    operation(op.top());
                    op.pop();
                    if(op.empty())
                        break;
                }
                //cout<<"OK\n";
                op.push(a[i]);

            }
        }
    }
}

void genvalue(string a){
    for(int i=0;i<strlen(c);i++){
        value[c[i]]=0;
        cout<<" "<<value[c[i]];
    }

    instack(a);
    findv();
    cout<<"   "<<val.top()<<endl;

    for(int i=1;i<(pow(2,strlen(c)));i++){
        int n= strlen(c)-1;

        while(value[c[n]]==1){
            value[c[n]]=0;
            n=n-1;
        }
        value[c[n]]=1;

        for(int i=0;i<strlen(c);i++){
            cout<<" "<<value[c[i]];
        }
        instack(a);
        findv();
        cout<<"   "<<val.top()<<endl;
    }
}

void setstack(){
    char c;
    c=op.top();
    op.pop();
    while(c!='('){
        operation(c);
        c=op.top();
        op.pop();
    }
}

int inprechar(char c){
    switch(c){
    case '!':
        return 10;
    case '^':
        return 8;
    case '/':
        return 6;
    case '>':
        return 4;
    case '(':
        return 0;
    }
}

int outprechar(char c){
    switch(c){
    case '!':
        return 9;
    case '^':
        return 7;
    case '/':
        return 5;
    case '>':
        return 3;
    case '(':
        return 100;
    }
}

void operation(char c){
    if(c=='!')
        NOT();
    else if(c=='/')
        OR();
    else if(c=='^')
        AND();
    else if(c=='>')
        IMPLICATION();
}

void findv(){
    char c;
    while(!op.empty()){
        c=op.top();
        op.pop();
        operation(c);
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
This Program is Coded by "MD ARIFUL ISLAM" Roll No:1803046
Department of Computer Science & Engineering
Rajshahi University of Engineering & Technology

*/


#include<bits/stdc++.h>
using namespace std;
//replace 
void xoa(char x[],int n){
    for(int i=n;i<strlen(x);i++){
        x[i]=x[i+1];
    }
    x[strlen(x)]='\0';
}
void them(char x[],int n){
    for(int i=strlen(x);i>=n;i--){
        x[i+1]=x[i];
    }
    x[n]='x';
    x[strlen(x)+1]='\0';
}
void replace(char s1[],char s2[],int n,int m){
    for(int i=n;i<=m;i++){
        s1[i]=s2[i-n];
    }
}
int main(){
    char s1[40],s2[40],s3[40];
    cout<<"Nhap s1: ";
    cin.getline(s1,40);
    cout<<"Nhap s2: ";
    cin.getline(s2,40);
    cout<<"Nhap s3: ";
    cin.getline(s3,40);
    char s[120];
    int begin=0,end=0;
    for(int i=0;i<strlen(s1);i++){
        if(s1[i]==s2[0]){
            begin=i;
        }
        if(s1[i]==s2[strlen(s2)-1]){
            end=i;
            break;
        }
    }
    if(strlen(s2)>strlen(s3)){
        for(int i=0;i<strlen(s2)-strlen(s3);i++){
            xoa(s1,end);
            --end;
        }
    }else if(strlen(s2)<strlen(s3)){
        for(int i=0;i<strlen(s3)-strlen(s2);i++){
            them(s1,end);
            ++end;
        }
    }
    for(int i=0;i<begin;i++){
        s[i]=s1[i];
    }
    replace(s,s3,begin,end+1);
    for(int i=end;i<strlen(s1);i++){
        s[i]=s1[i];
    }
    s[strlen(s1)]='\0';

    cout<<"xau : "<<s<<endl;
    
    

}
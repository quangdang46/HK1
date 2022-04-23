#include<stdio.h>
int TongUoc(int a){
    int cout=0;
    for(int i=1; i<a;i++){
        if(a%i==0){
            cout+=i;
        }
    }
    return cout;
}
int main(){
    int a,b;
    do{
        printf("\nNhap 2 so a va b: ");
        scanf("%d%d",&a,&b);
    }while(a<=0 || b<=0);
    int x=TongUoc(a);
    int y=TongUoc(b);
    if(x==b||y==a){
        printf("\na va b la cap so ban");
    }else{
        printf("\na va b khong la cap so ban");
    }
}
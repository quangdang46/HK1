// #include<stdio.h>
// #include<limits.h>
// void Tien(int a){
//     switch(a){
//         case 0:printf("to penny");break;
//         case 1:printf("to nikel");break;
//         case 2:printf("to dime");break;
//         case 3:printf("to quarter");break;
//         case 4:printf("to 1/2 dola");break;
//         case 5:printf("to 1 dola");break;
//     }
// }
// int main(){
//     int n,i,min=INT_MAX;
//     int res[6]={1,5,10,25,50,100};
//     int tmp[6]={0};
//     printf("Nhap so Cent:");scanf("%d",&n);
//     for(i=0; i<6;i++){
//         int x=n,count=0;
//         while(x!=0){
//             count+=x/res[i];
//         }
//         tmp[i]=count;
//         if(tmp[i]<min) min=tmp[i];
//     }
//     for(i = 0; i < 6; i++){
//         if(tmp[i]==min && min!=0){
//             printf("So luong tien nho nhat:%f ",tmp[i]);
//             Tien(i);
//         }
//     }
// }
#include<stdio.h>
int main()
{
    int n,a=0,b=0,c=0,d=0,e=0,f=0;
    printf("nhap so cent: ");
    scanf("%d",&n);
    while(n>=100)
    {
        n=n-100;
        a++;
    }
    printf("so to 1 do = %d\n",a);
    while(n>=50)
    {
        n=n-50;
        b++;
    }
    printf("so to nua do la =%d\n",b);
    while(n>=25)
    {
        n=n-25;
        c++;
    }
    printf("so to quater =%d\n",c);
    while(n>=10)
    {
        n=n-10;
        d++;
    }
    printf("so to dime =%d\n",d);
    while(n>=5)
    {
        n=n-5;
        e++;
    }
    printf("so to nickey=%d\n",e);
    while(n>=1)
    {
        n=n-1;
        f++;
    }
    printf("so to penny =%d",f);
}
/*Nhập 1 dãy n số nguyên (0<n<30), in ra màn hình dãy số đã nhập
Đưa ra màn hình các số chẵn và vị trí số chẵn đó trong dãy
Sắp xếp dãy số theo giá trị các phần tử giảm dần.
Chèn số X vào dãy sao cho sau khi chèn gái trị các phần tử vẫn giảm dần(x nhập từ bàn phím.*/
// #include<stdio.h>
// void nhapmang(int arr[],int n){
//     for(int i=0; i < n; i++){
//         printf("\narr[%d]= ",i);
//         scanf("%d",&arr[i]);
//     }
// }
// void swap(int &x, int &y){
//     int tmp=x;
//     x=y;
//     y=tmp;
// }
// void xuatmang(int arr[],int n){
//     for(int i=0; i < n; i++){
//         printf("\narr[%d]=%d",i,arr[i]);
//     }
// }
// void sapxep(int arr[],int n){
//     for(int i=0;i < n;i++){
//         for(int j=i+1;j < n; j++){
//             if(arr[i]< arr[j]){
//                 swap(arr[i],arr[j]);
//             }
//         }
//     }
// }
// void chenvao(int arr[],int &n,int k ){
//     int j;
//     for(int i=0; i < n; i++){
//         if(arr[i]<arr[i-1]&&arr[i]>arr[i+1]){
//             n++;
//             for(j=n-1;i>i;j++){
//                 arr[j]= arr[j-1];
//             }
//             arr[j]=k;
//         }
//     }
// }
// int main(){
//     int n;
//     int arr[100];
//     printf("\nNhap gia tri n: ");
//     scanf("%d",&n);
//     int x;
//     printf("\nNhap x: ");
//     scanf("%d",&x);
//     nhapmang(arr,n);
//     sapxep(arr,n);
//     chenvao(arr,n,x);
//     xuatmang(arr,n);
// }
#include<stdio.h>
#include<conio.h>
main()
{ 
    int a[30],i,j, n,tg,v,x;
    printf("Nhap vao so phan tu: "); 
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
//hien thi ra man hinh day so vua nhap
    printf("day so vua nhap la:");
    for(i=0;i<n;i++)
    {
        printf("%5d",a[i]);
    }
//dua ra man hinh cac so chan va vi tri trong day
    printf("\nCac so chan trong day va vi tri cac so do trong day la:");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("\nso %d dung thu %d trong day", a[i], i+1);
        }
    }
// sap xep day so theo gia tri cac phan tu giam dan
    for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
    {
        if(a[i]<a[j])
        {
            tg=a[i];
            a[i]=a[j];
            a[j]=tg;
        }
    }
    printf("\nDay so sau khi sap xep la:");
    for(i=0;i<n;i++)
    {
        printf("%5d",a[i]);
    }
//chen so x vao day sao cho sau khi chen gia tri cac phan tu van tang dan (x nhap tu ban phim)
    printf("\nNhap gia tri can chen X:"); 
    scanf("%d", &x);
    v=0; 
    i=0;
    while(a[i]>x)
    {    
        i++;
    } 
    v=i;    
    for(i=n-1;i>=v;i--)
    {
        a[i+1]=a[i];
    }
    a[v]=x;
    printf("\n Day so sau khi chen la:");
    for(i=0;i<n+1;i++)
    {
        printf("%5d", a[i]);
    }
    getch();
}
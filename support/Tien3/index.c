#include<stdio.h>
int arr[100];
int arrChan[100];
void nhap(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("Nhap phan tu thu %d: ",i);
        scanf("%d",&arr[i]);
    }
}

void xuat(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

void TimDuongDau(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]>0){
            printf("Vi tri :%d Gia tri: %d\n",i,arr[i]);
            break;
        }
    }
}

void TimDuongCuoi(int arr[],int n){
    int i;
    for(i=n-1;i>=0;i--){
        if(arr[i]>0){
            printf("Vi tri :%d Gia tri: %d\n",i,arr[i]);
            break;
        }
    }
}

int TimMax(int arr[],int n){
    int i;
    int max=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int CountMax(int arr[],int n,int max){
    int i;
    int dem=0;
    for(i=0;i<n;i++){
        if(arr[i]==max){
            dem++;
        }
    }
    return dem;
}

void printMax(int arr[],int n,int max){
    int i;
    printf("Cac vi tri phan tu lon nhat la: ");
    for(i=0;i<n;i++){
        if(arr[i]==max){
            printf("%d ",i);
        }
    }
}

//Nhap phan tu moi: 2
void AddElement(int arr[],int *n,int x){
    int i;
    *n+=1;
    for(i=*n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=x;
}

void AddElementK(int arr[],int *n,int x,int k){
    int i;
    *n+=1;
    for(i=*n;i>=k;i--){
        arr[i]=arr[i-1];
    }
    arr[k]=x;
}


void XoaPhanTuDau(int arr[],int *n){
    int i;
    for(i=0;i<*n-1;i++){
        arr[i]=arr[i+1];
    }
    *n-=1;
}

void XoaPhanTuK(int arr[],int *n,int k){
    int i;
    for(i=k;i<*n-1;i++){
        arr[i]=arr[i+1];
    }
    *n-=1;
}

int checkLe(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]%2!=0){
            return 1;
        }
    }
    return 0;
}


void MangChan(int arr[],int n,int arrChan[],int *j){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            arrChan[*j]=arr[i];
            *j++;
        }
    }
}
int main(){
    int n;
    int j;
    printf("Nhap so phan tu: ");
    scanf("%d",&n);
    nhap(arr,n);
    //b
    xuat(arr,n);
    printf("\n");
    //tim vi tri phan tu duong dau tien
    TimDuongDau(arr,n);
    printf("\n");
    //tim vi tri phan tu duong cuoi
    TimDuongCuoi(arr,n);
    printf("\n");
    //tim gia tri lon nhat
    int max_array=TimMax(arr,n);
    printf("Gia tri lon nhat: %d\n",max_array);
    printf("\n");
    //So phan tu lon nhat trong mang
    printf("So phan tu lon nhat trong mang: %d\n",CountMax(arr,n,max_array));
    printf("\n");
    //Xuat ra vi tri cac phan tu lon nhat
    printMax(arr,n,max_array);
    printf("\n");
    //Them phan tu moi vao dau mang
    int x;
    printf("Nhap phan tu moi: ");
    scanf("%d",&x);
    AddElement(arr,&n,x);
    xuat(arr,n); 
    printf("\n");

    //them 1 phan tu vao vi tri k trong mang
    int k;
    printf("Nhap vi tri k: ");
    scanf("%d",&k);
    printf("Nhap phan tu moi: ");
    scanf("%d",&x);
    AddElementK(arr,&n,x,k);
    xuat(arr,n); 
    printf("\n");

    //Xoa phan tu dau mang   
    printf("Xoa phan tu dau mang\n");
    XoaPhanTuDau(arr,&n);
    xuat(arr,n);
    printf("\n");

    //Xoa phan tu tai vi tri k
    printf("Nhap vi tri k: ");
    scanf("%d",&k);
    XoaPhanTuK(arr,&n,k);
    xuat(arr,n);
    printf("\n");

    //Kiem tra mang co chua so le
    if(checkLe(arr,n)){
        printf("Mang co chua so le\n");
    }
    else{
        printf("Mang khong chua so le\n");
    }
    printf("\n");
 
    //Tao mang moi chua cac phan tu chan trong mang 
    MangChan(arr,n,arrChan,&j);
    xuat(arrChan,j);
    XoaPhanTuDau(arrChan,&j);
    XuatMang(arrChan,j);
}
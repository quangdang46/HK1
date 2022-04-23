#include<stdio.h>
#include<string.h>
typedef struct{
    int id;
    char name[40];
    float value;
}TV;
//nhap danh sach gom n cuon sach
void input(TV arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("Nhap thong tin sach thu %d\n",i+1);
        printf("Nhap ma sach: ");
        scanf("%d",&arr[i].id);
        fflush(stdin);  
        printf("Nhap ten sach: ");
        scanf("%s",&arr[i].name);
        fflush(stdin);
        printf("Nhap gia sach: ");
        scanf("%f",&arr[i].value);
    }
}

//in ra danh sach gom n cuon sach
void output(TV arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("Thong tin sach thu %d\n",i+1);
        printf("Ma sach: %d\n",arr[i].id);
        printf("Ten sach: %s\n",arr[i].name);
        printf("Gia sach: %.2f\n",arr[i].value);
    }
}
//tim cuon sach co ma X dung tim kiem nhi phan
int binarySearch(TV arr[],int n,int x){
    int left=0,right=n-1,mid;
    while(left<=right){
        mid=(left+right)/2;
        if(arr[mid].id==x) 
        {
        	return mid;
		}
        else if(arr[mid].id<x) 
		{
			left=mid+1;
		}
        else 
        {
        	right=mid-1;
		}
    }
    return -1;
}
//tim kiem cuon sach dung tim kiem tuyen tinh
int linearSearch(TV arr[],int n,int x){
    int i;
    for(i=0;i<n;i++){
        if(arr[i].id==x) return i;
    }
    return -1;
}
//xuat ra cuon sach co ten Y
void searchName(TV arr[],int n){
    int i;
    int check=0;
    for(i=0;i<n;i++){
        if(strcmp(strlwr(arr[i].name),"y")==0){
            printf("Thong tin sach thu %d\n",i+1);
            printf("Ma sach: %d\n",arr[i].id);
            printf("Ten sach: %s\n",arr[i].name);
            printf("Gia sach: %.2f\n",arr[i].value);
            check=1;
        }
    }
    if(!check){
        printf("Khong tim thay sach co ten Y\n");
    }
}
//xuat ra cuon sach co gia cao nhat neu co nhieu gia cao  thi xuat het
void searchMax(TV arr[],int n){
    int i,max=arr[0].value;
    for(i=1;i<n;i++){
        if(arr[i].value>max) 
        {
        	max=arr[i].value;
		}
    }
    for(i=0;i<n;i++){
        if(arr[i].value==max){
            printf("Thong tin sach thu %d\n",i+1);
            printf("Ma sach: %d\n",arr[i].id);
            printf("Ten sach: %s\n",arr[i].name);
            printf("Gia sach: %.2f\n",arr[i].value);
        }
    }
}
// ghi danh sách N cuốn sách vào file dataSach.txt
void writeFile(TV arr[],int n){
    FILE *f;
    f=fopen("dataSach.txt","w");
    fprintf(f,"%d\n",n);
    int i;
    for(i=0;i<n;i++){
        fprintf(f,"%d %s %.2f\n",arr[i].id,arr[i].name,arr[i].value);
    }
    fclose(f);
}
//xuat danh sach các cuốn sách có giá lơn hơn x ghi vào file dataSach.txt
void writeFileMax(TV arr[],int n,float x){
    FILE *f;
    f=fopen("dataSach.txt","w");
    int i;
    for(i=0;i<n;i++){
        if(arr[i].value>x){
            fprintf(f,"%d %s %.2f\n",arr[i].id,arr[i].name,arr[i].value);
        }
    }
    fclose(f);
}
int main(){
    TV arr[100];
    int n,x,i;
    printf("Nhap so luong sach: ");
    scanf("%d",&n);
    input(arr,n);
    output(arr,n);
    printf("Nhap ma sach can tim: ");
    scanf("%d",&x);
    i=binarySearch(arr,n,x);
    if(i==-1) printf("Khong tim thay sach co ma %d\n",x);
    else printf("Tim thay sach co ma %d\n",x);
    printf("Sach Y can tim la: ");
    searchName(arr,n);
    searchMax(arr,n);
    writeFile(arr,n);
    printf("Danh sach sach co gia lon hon x: ");
    scanf("%d",&x);
    writeFileMax(arr,n,x);
    return 0;
}
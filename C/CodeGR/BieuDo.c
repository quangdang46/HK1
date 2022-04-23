#include <stdio.h>
void VeBieuDoBar(int n,char tieude[]){
    int i;
    for(i=0;i<n;i++){
       printf("%c",178);
    }
    printf(" ");
    puts(tieude);
    printf("\n");
}
int main(){
    int x,y,z;
    char tieude[40];
    do{
        printf("Nhap diem Anh, Tuan, Dung: ");
        scanf("%d%d%d",&x,&y,&z);
    }while(x>20 || y>20 || z>20);
    VeBieuDoBar(x,"Anh");
    VeBieuDoBar(y,"Tuan");
    VeBieuDoBar(z,"Dung");
}
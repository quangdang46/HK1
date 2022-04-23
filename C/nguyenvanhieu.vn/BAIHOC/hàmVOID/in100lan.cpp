//in ra lap trinh khong kho 20 lan
#include<stdio.h>
//ham in ra 
// void print(int n){
//     for(int i=0; i<=n; i++){
//         printf("\nlap trinh khong kho");
//     }
// }
//ham in ra uoc
void uoc(int m){
    if(m<0){
        m*=-1;
    }
    for(int i=2; i<m; i++){
        if(m%i==0){
            printf("%d\t", i);
        }
    }
}
//in cac cac uoc chung cua mot so
int main(){
    // print(20);
    uoc(100);
}
#include<stdio.h>
void nhapmang(int matrix[10][10],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n; j++){
            printf("matrix[%d][%d]= ",i,j);
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }
}
void xuatmang(int matrix[10][10],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}
int TinhDinhThuc(int matrix[10][10], int n ){
    int s, sum= 0;
    if( n == 1 ){
        return matrix[0][0];
    }
    if( n == 2 ){
        return (matrix[0][0]*matrix[1][1]- matrix[0][1]*matrix[1][0]);
    }
    for (int k = 0; k < n; k++ ){
        int smaller[10][10];
        for (int i = 0; i< n; i++ ){
            for (int j = 1; j< n; j++ ){
                if( i < k){
                    smaller[i][j-1]= matrix[i][j]; 
                }else if( i > k ){
                    smaller[i-1][j-1] = matrix[i][j];
                }
            }
        }
        if(k%2 == 0 ){
            s = 1;
        }else{
            s = -1;
        }
        sum+= matrix[k][0]*s*TinhDinhThuc(smaller, n-1);
    }        
    return sum;
}


int main(){
    int n,gt;
    int matrix[10][10];
    printf("\nNhap gia tri hang va cot ma tran vuong cap NxN: ");
    scanf("%d",&n);
    nhapmang(matrix,n);
    xuatmang(matrix,n);
    gt=TinhDinhThuc(matrix,n);
    printf("Dinh thuc ma tran vua nhap la:%d",gt);
}

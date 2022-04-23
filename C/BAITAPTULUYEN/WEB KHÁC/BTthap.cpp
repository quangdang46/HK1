/*Bài tập 1: Viết code C# đưa ra màn hình như bên dưới:
*******
******
*****
****
***
**
*
*/
#include<stdio.h>
int main(){
    int i;
    for(i=1; i<=7;i++){
        for (int j=1;j<=i ;j++)
        {
            printf("%d",++j);
        }
        for (int k=7-i; k>=1; k--){
            printf("*");
        }
        printf("\n");
    }
}
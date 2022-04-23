#include<stdio.h>
#include<stdlib.h>
void DocFile(int x[],char ten[50],int *n){
    int i;
    FILE *f = fopen(ten,"r");
    if(f==NULL){
        printf("\nError");
    }
    fscanf(f,"%d",&*n);
    for(i=0; i<*n; i++){
        fscanf(f,"%d\n",&x[i]);
    }
    fclose(f);
}

void Selection(int x[],int n){
    int i,start,min,tmp;
    for(start=0;start<n-1;start++){
        min=start;
        for(i=start+1; i <n; i++){
            if(x[i]<x[min]){
                min=i;
            }
        }
        tmp=x[start];
        x[start]=x[min];
        x[min]=tmp;
    }
}
void Bubble(int x[],int n){
    int i,j,tmp;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(x[j]>x[i]){
                tmp=x[j];
                x[j]=x[i];
                x[i]=tmp;
            }
        }
    }
}
void GhiFile(int x[],char ten[50],int n){
    ten="selection_sort_output.txt";
    FILE *f=fopen(ten,"w");
    int i;
    for(i=0; i<n; i++){
        fprintf(f,"%d ",x[i]);
    }
    fclose(f);
}
int main(){
    int n;
    int x[100];
    char ten[50];
    printf("enter a filename:");
    // selection_sort_input.txt
    fflush(stdin);
    scanf("%s",ten);
    int luachon;
    printf("1. Selection Sort\n");
    printf("2.  Bubble Sort\n");
    printf("3. Exit\n");
    printf("choose number [1,3]:");
    scanf("%d",&luachon);
    switch(luachon){
        case 1:{
            DocFile(x,ten,&n);
            Selection(x,n);
            GhiFile(x,ten,n);
            break;
        }
        case 2:{
            DocFile(x,ten,&n);
            Bubble(x,n);
            GhiFile(x,ten,n);
            break;
        }
        case 3:{
            break;
        }
        default:printf("Moi ban nhap lai!");
    }
}

#include <stdio.h>
#include <math.h>
#define MAX 100
//Bai1
int ex1a();
int ex1b();
int ex1c();
int ex1d();
int ex1e();
//Bai2
int max(int a[], int n);
void InOutput(int a[], int n);
//Bai3
int min(int a[], int n);
//Bai4
int sumArray(int a[],int n);
//Bai5
int sumNonPosive(int a[],int n);
//Bai6
int sumEven(int a[],int n);
//Bai7
void nhapMang(int A[], int n);
void xuatMang(int A[], int n);
int swaparray();
//Bai8
void input(int A[], int n );
void output(int A[], int n );
void bai8(int A[],int n, int a);
//Bai9
void bai9(int A[],int n);
//Bai10
void bai10(int A[], int n);
//Bai11
void nhapmang(int a[],int n);
void xuatmang(int a[],int n);
void cfre(int a[],int n);
//Bai12
void input(int O[], int u );
void output(int O[], int u );
int bai12(int A[],int n,int B[],int m,int C[],int p);
//Bai13
void chanle();
//Bai14
void timso();
//Bai15
void sapxep();
//Bai16
void tongmatran();
//Bai17
void hieumatran();
//Bai18
void tich(int a[][50], int b[][50], int c[][50], int m, int n, int k);
void xuat(int a[][50], int m, int n);
void nhap(int a[][50], int *m, int *n);
//Bai19
void CheckBangNhau(int a[][100],int m,int n,int b[][100],int x,int y);
void xuatmang_19(int arr[][100],int m,int n);
void nhapmang_19(int arr[][100],int m,int n);
int chon, chon2;
int main() {
do{
	printf("Chao mung ban den voi chuoi cac chuong trinh\n");
	printf("Vui long nhap so tuong ung voi chuong trinh de chay\n");
	printf("=======Menu=======\n");
	printf("0.Thoat\n");
	printf("1  Chuong trinh 1\n");
	printf("2. Chuong trinh 2\n");
	printf("3. Chuong trinh 3\n");
    printf("4. Chuong trinh 4\n");
    printf("5. Chuong trinh 5\n");
    printf("6. Chuong trinh 6\n");
    printf("7. Chuong trinh 7\n");
    printf("8. Chuong trinh 8\n");
    printf("9. Chuong trinh 9\n");
    printf("10. Chuong trinh 10\n");
    printf("11. Chuong trinh 11\n");
    printf("12. Chuong trinh 12\n");
    printf("13. Chuong trinh 13\n");
    printf("14. Chuong trinh 14\n");
    printf("15. Chuong trinh 15\n");
    printf("16. Chuong trinh 16\n");
    printf("17. Chuong trinh 17\n");
    printf("18. Chuong trinh 18\n");
    printf("19. Chuong trinh 19\n");
	printf("20. Chuong trinh 20\n");
	printf("21. Chuong trinh 21\n");
	printf("Chon truong trinh muon chay:");
	scanf("%d", &chon);
	switch (chon) {
	case 1: {
		printf("Chuong trinh 1\n");
		ex1a();
		ex1b();
		ex1c();
		ex1d();
		ex1e();
		return 0;
		break;
		}
	case 2: {
		printf("Chuong trinh 2\n");
        int i,n,j;
        int a[MAX];
        printf("Enter n: ");
        scanf("%d",&n);
        InOutput(a,n);
        max(a,n);
        return 0;
		break;
	}
	case 3: {
		printf("Chuong trinh 3\n");
        int i,n,j;
        int a[MAX];
        printf("Enter n: ");
        scanf("%d",&n);
        InOutput(a,n);
        min(a,n);
        return 0;
		break;
	}
    case 4: {
		printf("Chuong trinh 4\n");
        int i,n,j;
        int a[MAX];
        printf("Enter n: ");
        scanf("%d",&n);
        InOutput(a,n);
        sumArray(a,n);
        return 0;
		break;
	}
    case 5: {
		printf("Chuong trinh 5\n");
        int i,n,j;
        int a[MAX];
        printf("Enter n: ");
        scanf("%d",&n);
        InOutput(a,n);
        sumNonPosive(a,n);
        return 0;
		break;
	}
    case 6: {
		printf("Chuong trinh 6\n");
        int i,n,j;
        int a[MAX];
        printf("Enter n: ");
        scanf("%d",&n);
        InOutput(a,n);
        sumEven(a,n);
        return 0;
		break;
	}
    case 7: {
		printf("Chuong trinh 7\n");
		swaparray();
		return 0;
		break;
	}
    case 8: {
		printf("Chuong trinh 8\n");
		int A[MAX];
		int n,a;
		printf("nhap mot so bat ki ");
		scanf("%d",&n);
		input(A,n);
		output(A,n);
		printf("\nban muon xoa o vi tri nao ");
		scanf("%d",&a);
		bai8(A,n,a);
		output(A,n);
		break;
	}
    case 9: {
		printf("Chuong trinh 9\n");
		int A[MAX];
		int B[MAX];
		int n;
		printf("nhap mot so bat ki ");
		scanf("%d",&n);
		input(A,n);
		output(A,n);
		bai9(A,n);
		return 0;
		break;
	}
    case 10: {
		printf("Chuong trinh 10\n");
		int A[MAX];
		int n;
		printf("nhap n ");
		scanf("%d",&n);
		input(A,n);
		output(A,n);
		bai10(A,n);
		break;
	}
    case 11: {
		printf("Chuong trinh 11\n");
		int n;
		printf("nhap so phan tu= ");
		scanf("%d",&n);
		int a[n];
		nhapmang(a,n);
		printf("\n");
		xuatmang(a,n);
		printf("\n");
		cfre(a,n);
		break;
	}
    case 12: {
		printf("Chuong trinh 12\n");
		int A[10],B[10];
		int n,m,p,C[20];
		printf("\nnhap mot so bat ki mang A ");
		scanf("%d",&n);
		input(A,n);
		output(A,n);
		printf("\nnhap mot so bat ki mang B ");
		scanf("%d",&m);
		input(B,m);
		output(B,m);
		bai12(A,n,B,m,C,p);
		printf("\nmang c: ");
		output(C,p);
		break;
	}
    case 13: {
		printf("Chuong trinh 13\n");
        chanle();
	    return 0;
		break;
	}
    case 14: {
		printf("Chuong trinh 14\n");
        timso();
	    return 0;
		break;
	}
    case 15: {
		printf("Chuong trinh 15\n");
        sapxep();
	    return 0;
		break;
	}
    case 16: {
		printf("Chuong trinh 16\n");
        tongmatran();
	    return 0;
		break;
	}
    case 17: {
		printf("Chuong trinh 17\n");
        hieumatran();
	    return 0;
		break;
	}
    case 18: {
		printf("Chuong trinh 18\n");
		int a[50][50], b[50][50], c[50][50] = {0};
		int ma, na, mb, nb;
		printf("Nhap Ma Tran A: ");
		nhap(a, &ma, &na);
		printf("\nNhap Ma Tran B: ");
		nhap(b, &mb, &nb);
		if(na != mb){
			printf("\nKhong nhan duoc!");
		}
		else{
			tich(a, b, c, ma, na, nb);
			printf("\nMa tran A: \n");
			xuat(a, ma, na);
			printf("\nMa tran B: \n");
			xuat(b, mb, nb);
			printf("\nMa tran C: \n");
			xuat(c, ma, nb);
		}
		break;
	}
    case 19: {
		printf("Chuong trinh 19\n");
		int m,n,x,y;
		int a[100][100];
		int b[100][100];
		printf("\nNhap gia tri hang va cot ma tran 1 m,n: ");
		scanf("%d%d",&m,&n);
		nhapmang_19(a,m,n);
		printf("\nNhap gia tri hang va cot ma tran 2 x,y: ");
		scanf("%d%d",&x,&y);
		nhapmang_19(b,x,y);
		CheckBangNhau(a,m,n,b,x,y);
		break;
	}
    case 20: {
		printf("Chuong trinh 20\n");
		int m,n;
		int arr[100][100];
		int cv[100][100];
		printf("\nNhap gia tri m,n ");
		scanf("%d%d",&m,&n);
		nhapmang_20(arr,m,n);
		chuyenvi(arr,m,n,cv);
		printf("Sau khi chuyen vi:\n");
		xuatmang_20(cv,n,m);
		break;
	}
    case 21: {
		printf("Chuong trinh 21\n");
		int n,gt;
		int matrix[10][10];
		printf("\nNhap gia tri hang va cot ma tran vuong cap NxN: ");
		scanf("%d",&n);
		nhapmang_21(matrix,n);
		xuatmang_21(matrix,n);
		gt=TinhDinhThuc(matrix,n);
		printf("Dinh thuc ma tran vua nhap la:%d",gt);
		break;
	}
	case 0: {
		break;
	}
	default:printf("Vui long nhap dung so\n");
	}
	printf("Ban co muon tiep tuc truong trinh hay khong?\n1.Co\n0.Khong");
	scanf("%d",&chon2);
	system("cls");
}while(chon2==1);
}
//Bai1
int ex1a()
{
    int i,n;
    float sum = 0;
    printf("Nhap so n: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum +=(i/2.0);
    }
    printf("Ket qua cau 1.a) la: %f\n",sum);
    return 0;
}
int ex1b()
{
    int i,n;
    int sum = 0;
    printf("Nhap so n: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum +=(2*i+1);
    }
    printf("Ket qua cau 1.b) la: %d\n",sum);
    return 0;
}
int ex1c()
{
    int i,n,f;
    int sum = 0;
    int num = 1;
    printf("Nhap so n: ");
    scanf("%d",&n);
    while (num <= n )
    {   
        f = 1;
        for (i=1;i<=num;i++)
        {
            f=f*i;
        }
        sum += 1+f;
        num++;
    }
    printf("Ket qua cau 1.c) la: %d\n",sum);
}
int ex1d()
{
    int i,n,f;
    int prod = 1;
    int num = 1;
    printf("Nhap so n: ");
    scanf("%d",&n);
    while (num <= n )
    {   
        f = 1;
        for (i=1;i<=num;i++)
        {
            f=f*i;
        }
        prod *= f;
        num++;
    }
    printf("Ket qua cau 1.d) la: %d\n",prod);
}
int ex1e()
{
    int i,n;
    float prod = 1;
    float f;
    int num = 1;
    printf("Nhap so n: ");
    scanf("%d",&n);
    while (num <= n )
    {   
        f = 1;
        for (i=1;i<=num;i++)
        {
            f=f*i;
        }
        prod *= (2.0*f)/3.0;
        num++;
    }
    printf("Ket qua cau 1.e) la: %f\n",prod);
}
//Bai2
void InOutput(int a[], int n){
    int i;
    for(i=0;i<n;i++){
        printf("Enter Number: ");
        scanf("%d",&a[i]);
    }
}
int max(int a[], int n){
    int j;
    int maxValue = a[0];
    for(j=0;j<n;j++){
        if(a[j]>maxValue){
            maxValue = a[j];
        }
    }
    return printf("So lon nhat trong mang la %d",maxValue);
}
//Bai3
int min(int a[], int n){
    int j;
    int minValue = a[0];
    for(j=0;j<n;j++){
        if(a[j]<minValue){
            minValue = a[j];
        }
    }
    return printf("So nho nhat trong mang la %d",minValue);
}
//Bai4
int sumArray(int a[],int n){
    int j,sum=0;
    for(j=0;j<n;j++){
        sum += a[j];
    }
    return printf("Tong cua cac so trong mang la %d",sum);
}
//Bai5
int sumNonPosive(int a[],int n){
    int j,sum=0;
    for(j=0;j<n;j++){
        if(a[j]<=0){
            sum += a[j];
        }
    }
    return printf("Tong cua cac so Non-Positve trong mang la %d",sum);
}
//Bai6
int sumEven(int a[],int n){
    int j,sum=0;
    for(j=0;j<n;j++){
        if(a[j]%2==0){
            sum += a[j];
        }
    }
    return printf("Tong cua cac so chan trong mang la %d",sum);
}
//Bai7
void nhapMang(int A[], int n)
{
    int i;
    for (i=0;i<n;i++)
    {   
        printf("Nhap phan tu %d: \n",i);
        scanf("%d",&A[i]);
    }
}
int swaparray()
{
    int A[MAX];
    int n;
    printf("Nhap so phan tu vao mang: ");
    scanf("%d",&n);
    nhapMang(A,n);
    int i,j;
	for(i=0,j=n-1;i<n,j>=0;i++,j--)
	{
		if(i!=j)
		{
			A[i]=A[i]+A[j];
			A[j]=A[i]-A[j];
			A[i]=A[i]-A[j];
		}
		else
		{
			break;
		}
    }
    printf("Mang dao nguoc la: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
}
//Bai8
void input(int A[], int n ){
	int i;
	for(i=0;i<n;i++){
		printf("\nnhap gia tri o vi tri %d ",i);
		scanf("%d",&A[i]);
	}
}
void output(int A[], int n ){
	int i;
	for(i=0;i<n;i++){
		printf("\ngia tri o vi tri %d la %d",i,A[i]);
	}
}

void bai8(int A[],int n, int a){
	int i;
	for(i=a;i<n;i++){
		A[i]=A[i+1];
	}
	n--;
}
//Bai9
void bai9(int A[],int n){
	int i,j,c=0;
	for(i=0;i<n-1;i++){
		for(j=1+i;j<n;j++){
			if(A[j]==A[i]){
				c++;
				break;
			}
		}
	}
	printf("\nco %d gia tri trung lap trong mang",c);
}
//Bai10
void bai10(int A[],int n){
	int i,j,k;
	for (i = 0; i < n; i++) 
 			for (j = 0; j < i; j++)
 			{
 				 if (A[i] == A[j])
  				{
   				for (k = i; k < n; k++) 
				   	A[k] = A[k + 1];
  					n--;
  					i--;
 				}
 			}
	printf("\nmang sau khi xoa la:\n");
	for (i = 0; i < n; i++) 
	{
		printf(" %d ", A[i]);
	}
}
//Bai11
void cfre(int a[],int n)
{
	int i,j,k,count,t;
	int arr1[n];
	t=n;
	for (i=0;i<n;i++)
	{
		arr1[i]=a[i];
	}
	for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++)
		{
			if (arr1[i]==arr1[j])
			{
				for (k=j;k<n;k++)
				{
					arr1[k]=arr1[k+1];
				}
				n=n-1;
				j=j-1;
			}
		}
	}
	
	for (i=0;i<n;i++)
	{
		count=0;
		for (j=0;j<t;j++)
		{
			if (arr1[i]==a[j])
			{
				count=count+1;
			}
		}
		printf("%d  %d\n",arr1[i],count);
	}
}

void nhapmang(int a[],int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("array[%d]= ",i);
		scanf("%d",&a[i]);
	}
}

void xuatmang(int a[],int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		printf("a[%d]= %d\n",i,a[i]);
	}
}
//Bai12
void input(int O[], int u ){
	int i;
	for(i=0;i<u;i++){
		printf("\nnhap gia tri o vi tri %d  ",i);
		scanf("%d",&O[i]);
	}
}
void output(int O[], int u ){
	int i;
	for(i=0;i<u;i++){
		printf("\ngia tri o vi tri %d la %d  ",i,O[i]);
	}
}

int bai12(int A[],int n,int B[],int m,int C[],int p){
	p=m+n;
	int i;
	for(i=0;i<p;i++){
		if(i<n){
			C[i]=A[i];
			}
		else{
			C[i]=B[i-n];
		}	
	}
}
//Bai13
void chanle() {
	//BAI PHAN LOAI CHAN LE TU MOT MANG SANG 2 MANG KHAC NHAU 
	int mang[1000],chan[500],le[500];
	int n, i = 0,c=0,l=0;
	printf("Nhap n:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Vui long nhap gia tri thu %d cho mang:", i + 1);
		scanf("%d", &mang[i]);
	}
	for (i = 0; i < n; i++)
	{
		if(mang[i]%2==0)
		{
			chan[c]=mang[i];
			c++;
		}
		else 
		{
			le[l] = mang[i];
			l++;
		}
	}
	printf("Thanh phan cua mang chan la:\n");
	for (i = 0; i < c; i++)
	{		
      printf("%d  ",chan[i]);
	}
	printf("\n");
	printf("Thanh phan cua mang le la:\n");
	for (i = 0; i < l; i++)
	{
	  printf("%d  ", le[i]);
	}
}
//Bai14
void timso(){
	//BAI TIM 1 GIA TRI TRONG MANG THEO MOT SO DUOC NHAP TU BAN PHIM
	int mang[1000];
	int n, i = 0, t, dem = 0;
	printf("Nhap n:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Vui long nhap gia tri thu %d cho mang:", i + 1);
		scanf("%d", &mang[i]);
	}
	printf("Nhap gia tri can tim trong mang:");
	scanf("%d", &t);
	for (i = 0; i < n; i++)
	{
		if (t == mang[i]&&dem==0) {
			printf("Gia la ban can tim nam o vi tri thu %d ", i + 1);
			dem++;
		}
		else if (t == mang[i] && dem != 0) {
			printf("%d ", i + 1);
			dem++;
		}
	}
	if (dem == 0)
	{
		printf("Gia tri ban can tim khong co trong mang");
	}
}
//Bai15
void sapxep(){
	//BAI SAP XEP TUNG GIA TRI CUA MANG THEO GIA TRI TANG DAN 
	int a[1000];
	int min,max=0,n, i = 0,y=0,t=0,f=0;
	printf("Nhap n:");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Vui long nhap gia tri thu %d cho mang:", i + 1);
		scanf("%d", &a[i]);
	}
	for (t=0;t<n;t++)
	{
		if(max<=a[t])
		{
			max=a[t];
		}
	}
	min=max;
	printf("Thanh phan cua mang sau khi duoc sap xep theo gia tri tang dan la:\n");
    for (i = 0; i < n; i++)
	{
		for(y=0;y<n;y++)
	    {
		 if(min>a[y])
		 {
		   min=a[y];
		   f=y;
		 }
	    }
		printf("%d\n",min);
		a[f]=max;
		min=max;
	}	
}
//Bai16
void tongmatran() {
	//BAI TINH TONG 2 MA TRAN DUOC NHAP TU BAN PHIM
	int a[100][100];
	int b[100][100];
	int m,n,i = 0, y = 0;
//Ma tran 1
	printf("Nhap so dong:");
	scanf("%d", &n);
	printf("Nhap so cot:");
	scanf("%d", &m);
	for (i = 0; i < m; i++)
	{
		for (y = 0; y < n; y++)
		{
		printf("Vui long nhap gia tri a[%d][%d] cua ma tran nhu nhat:",i,y);
		scanf("%d", &a[i][y]);
		}
	}
	printf("Ma tran thu nhat la:\n");
	for (i = 0; i < m; i++)
	{
		for (y = 0; y < n; y++)
		{
			printf("%d  ",a[i][y]);
		}
		printf("\n");
	}
//Ma tran 2 	
	for (i = 0; i < m; i++)
	{
		for (y = 0; y < n; y++)
		{
			printf("Vui long nhap gia tri b[%d][%d] cua ma tran nhu hai:", i, y);
			scanf("%d", &b[i][y]);
		}
	}
	printf("Ma tran thu hai la:\n");
	for (i = 0; i < m; i++)
	{
		for (y = 0; y < n; y++)
		{
			printf("%d  ", b[i][y]);
		}
		printf("\n");
	}
	printf("Tong hai ma tran la:\n");
	for (i = 0; i < m; i++)
	{
		for (y = 0; y < n; y++)
		{
			printf("%d  ",a[i][y]+b[i][y]);
		}
		printf("\n");
	}
}
//Bai17
void hieumatran() {
	//BAI TINH HIEU 2 MA TRAN DUOC NHAP TU BAN PHIM
	int a[100][100];
	int b[100][100];
	int m,n,i = 0, y = 0;
//Ma tran 1
	printf("Nhap so dong:");
	scanf("%d", &n);
	printf("Nhap so cot:");
	scanf("%d", &m);
	for (i = 0; i < m; i++)
	{
		for (y = 0; y < n; y++)
		{
		printf("Vui long nhap gia tri a[%d][%d] cua ma tran nhu nhat:",i,y);
		scanf("%d", &a[i][y]);
		}
	}
	printf("Ma tran thu nhat la:\n");
	for (i = 0; i < m; i++)
	{
		for (y = 0; y < n; y++)
		{
			printf("%d  ",a[i][y]);
		}
		printf("\n");
	}
//Ma tran 2 	
	for (i = 0; i < m; i++)
	{
		for (y = 0; y < n; y++)
		{
			printf("Vui long nhap gia tri b[%d][%d] cua ma tran nhu hai:", i, y);
			scanf("%d", &b[i][y]);
		}
	}
	printf("Ma tran thu hai la:\n");
	for (i = 0; i < m; i++)
	{
		for (y = 0; y < n; y++)
		{
			printf("%d  ", b[i][y]);
		}
		printf("\n");
	}
	printf("Hieu hai ma tran la:\n");
	for (i = 0; i < m; i++)
	{
		for (y = 0; y < n; y++)
		{
			printf("%d  ",a[i][y]-b[i][y]);
		}
		printf("\n");
	}
}
//BAI18
void nhap(int a[][50], int *m, int *n) {
	printf("\nNhap so hang, so cot cua ma tran A: ");
	scanf("%d%d", m, n);
	int i, j;
	for(i = 0; i < *m; i++){
		for(j = 0; j < *n; j++){
			printf("\nx[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
		printf("\n");
	}
}
void xuat(int a[][50], int m, int n){
	int i, j;
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
}
void tich(int a[][50], int b[][50], int c[][50], int m, int n, int k) {
	int i, j, l;
	for(i = 0; i < m; i++) {
		for(j = 0; j < k; j++) {
			for(l = 0; l < n; l++) {
				c[i][j] += a[i][l] * b[l][j];
			}
		}
	}
}
//BAI19
void nhapmang_19(int arr[][100],int m,int n){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n; j++){
            printf("arr[%d][%d]= ",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
}
void xuatmang_19(int arr[][100],int m,int n){
    int i,j;
    for(i=0; i < m; i++){
        for(j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
void CheckBangNhau(int a[][100],int m,int n,int b[][100],int x,int y){
    if(m==x&&n==y){
        int check = 1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]!=b[i][j]){
                    check=0;
                    break;
                }
            }
        }
        if(check==1){
            printf("Hai ma tran bang nhau!");
        }else{
            printf("Hai ma tran khong bang nhau!");
        }
    }else{
        printf("Hai ma tran khong bang nhau!");
    }
}
//Bai20
void nhapmang_20(int arr[][100],int m,int n){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n; j++){
            printf("arr[%d][%d]= ",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
}
void chuyenvi(int arr[100][100],int m,int n,int cv[100][100]){
    int i,j;
    for(i=0; i < n; i++){
        for(j=0;j<m;j++){
            cv[i][j] = arr[j][i];
        }
        printf("\n");
    }
}
void xuatmang_20(int arr[][100],int m,int n){
    int i,j;
    for(i=0; i < m; i++){
        for(j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
//Bai21
void nhapmang_21(int matrix[10][10],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n; j++){
            printf("matrix[%d][%d]= ",i,j);
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }
}
void xuatmang_21(int matrix[10][10],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}
int TinhDinhThuc(int matrix[10][10], int n ){
    int s, sum= 0,k,i,j;
    if( n == 1 ){
        return matrix[0][0];
    }
    if( n == 2 ){
        return (matrix[0][0]*matrix[1][1]- matrix[0][1]*matrix[1][0]);
    }
    for (k = 0; k < n; k++ ){
        int smaller[10][10];
        for (i = 0; i< n; i++ ){
            for (j = 1; j< n; j++ ){
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
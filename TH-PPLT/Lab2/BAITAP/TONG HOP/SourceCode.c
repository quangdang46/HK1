#include<stdio.h>
#include<math.h>
int dem(int n){
    int cout=0;
    while(n>0){
        n/=10;
        cout++;
    }
    return cout;
}
// case 11
int kiemtra(int n){
    int mu=dem(n);
    int last,tmp=n,sum=0;
    while(tmp>0){
        last=tmp%10;
        tmp/=10;
        sum+=pow(last,mu);
    }
    if(sum==n){
        printf("\nSo Amtrong!");
    }else{
        printf("\nKhong phai so Amtrong!");
    }
}
void CheckAmstrong(){
    int n;
    printf("\nNhap so can kiem tra: ");
    scanf("%d",&n);
    kiemtra(n);
}
// case 12
int sohoanhao(int n){
    int tong=0;
    for(int i=1; i<n;i++){
        if(n%i==0){
            tong+=i;
        }
    }
    if(tong==n){
        printf("\nSo hoan hao");
    }else{
        printf("\nKhong phai so hoan hao");
    }
}
void CheckSHH(){
    int n;
    printf("Nhap so can kiem tra: ");
    scanf("%d",&n);
    sohoanhao(n);
}
// case 15
int shh(int n){
    int tong=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            tong+=i;
        }
    }
    if(tong==n)
        return 1;
    return 0;
}
void InSoHoanHao(){
    int n;
    printf("\nNhap so han n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(shh(i)){
            printf("%d\t",i);
        }
    }
}
// case 16
long long Dec2Bin(int decimalNumber){
    long long binaryNumber = 0;
    int p = 0;
    while (decimalNumber > 0)
    {
        binaryNumber += (decimalNumber % 2) * pow(10, p);
        ++p;
        decimalNumber /= 2;
    }
    return binaryNumber;
}
void ChuyenDoiCoSo(){
    int decimalNumber;
    printf("\nNhap so thap phan: ");
    scanf("%d", &decimalNumber);
    printf("Bin = %d", Dec2Bin(decimalNumber));
}
// case 1
void TongChan(){
    int n;
    printf("Nhap gia tri n: ");
    scanf("%d",&n);
    do{
        int tong=0,i=1;
        if(n>0){
            while(i<=n){
                if(i%2==0){
                    tong+=i;
                }
                i++;
            }
            printf("Tong cac so chan trong day:%d\n",tong);
        }
    }while(n<0);
}
// case 2
void TongLe(){
    int n;
    printf("Nhap gia tri n: ");
    scanf("%d",&n);
    do{
        int tong=0,i=1;
        if(n>0){
            while(i<=n){
                if(i%2!=0){
                    tong+=i;
                }
                i++;
            }
            printf("Tong cac so le trong day:%d\n",tong);
        }
    }while(n<0);
}
// case 3
void InBangSo(){
    int i,j;
    for(i=0; i<10;i++){
        for(j=i;j<=100;j+=10){
            printf("%d\t",j);
        }
        printf("\n");
    }
}
// case 4
void TinhTongSTN(){
    int n;
    do{
        printf("Nhap gia tri n: ");
        scanf("%d",&n);
        int tong=0,i=1;
        if(n>0){
            while(i<=n){
                tong+=i;
                i++;
            }
            printf("\nTong cac so trong day: %d",tong);
        }
    }while(n<0);
}
// case 5
void InChuSo(){
    int n;
    printf("\nNhap so nguyen can lay so: ");
    scanf("%d",&n);
    if(n<0){
        n=n*(-1);
    }
    int dau,cuoi;
    cuoi=n%10;
    n/=10;
    while(n>0){
        dau=n%10;
        n/=10;
    }
    printf("\nSo dau tien la:%d",dau);
    printf("\nSo cuoi cung la:%d",cuoi);
}
// case 6
void TongCacChuSo(){
    int n;
    printf("Nhap 1 so nguyen duong bat ki: ");
    scanf("%d",&n);
    int TongSo=0;
    int last;
    while(n>0){
        last=n%10;
        TongSo+=last;
        n/=10;
    }
    printf("\nTong cac chu so cua day la:%d",TongSo);
}
// case 7
void TichCacChuSo(){
    int n;
    printf("Nhap 1 so nguyen duong bat ki: ");
    scanf("%d",&n);
    int TichSo=1;
    int last;
    while(n>0){
        last=n%10;
        TichSo*=last;
        n/=10;
    }
    printf("\nTich cac chu so cua day la:%d",TichSo);
}
// case 8
void HoanDoiSo(){
    int n,swapnum;
    int firstnum,last,cout;
    printf("\nNhap so can thay doi: ");
    scanf("%d",&n);
    last=n%10;
    cout=(int)log10(n);
    firstnum=(int)(n/pow(10,cout));
    swapnum=last;
    swapnum*=(int)pow(10,cout);
    swapnum+=n%((int)pow(10,cout));
    swapnum-=last;
    swapnum+=firstnum;
    printf("\nSau khi hoan doi:%d",swapnum);
}
// case 9
void DaoNguocSo(){
    int n,swapnum=0;
    printf("\nNhap gia tri n: ");
    scanf("%d",&n);
    do{
        swapnum=swapnum*10+n%10;
    }while(n/=10);
    /*
    while(n!=0){
        swapnum=swapnum*10+n%10;
        n/=10;
    }
    */
    printf("\nGia tri sau khi dao nguoc la:%d",swapnum);
}
// case 10
void KiemtraPalidrome(){
    int n,r,sum=0,bientam;  
    printf("Nhap mot so bat ky: ");  
    scanf("%d",&n);  
    bientam=n;  
    while(n>0){  
        r=n%10;  
        sum=(sum*10)+r;  
        n=n/10;  
    }  
    if(bientam==sum){ 
        printf("\nSo ban da nhap la so Palindrome!");  
    }else{
        printf("\nSo ban da nhap khong phai la so Palindrome!"); 
    }
}
// case 13
int CheckSNT(int a){
    int check = 1;
    for(int i=2; i<=sqrt(a); i++){
        if(a%i==0){
            check =0;
        }
    }
    return check;
}
void KiemTraSoNguyenTo(){
    int n;
    do{
        printf("\nNhap gia tri can kiem tra: ");
        scanf("%d",&n);
    }while (n <2);
    int tmp=CheckSNT(n);
    if(tmp==1){
        printf("\n%d la so nguyen to",n);
    }else{
        printf("\n%d khong phai so nguyen to",n);
    }
}
void InSNT(){
    int n;
    do{
        printf("\nNhap gioi han can in ra snt n: ");
        scanf("%d",&n);
    }while(n<2);
    for(int i=2; i<=n; i++){
        int tmp=CheckSNT(i);
        if(tmp==1){
            printf("%d\t",i);
        }
    }
}
// case 14 
void InSoAmstrong(){
    int num, lastDigit, digits, sum, i,n,bientam;
    printf("Nhap gia tri n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        sum = 0;
        num = i;
        bientam=num;
        /* Số lượng chữ số */
        digits = (int)log10(num) + 1;
        /*Tổng lũy thừa các số */
        while(num > 0){
            //Lấy số cuối cùng
            lastDigit = num % 10;
            //Tổng lũy thừa và dùng ceil() đẻ làm tròn
            sum+=ceil(pow(lastDigit, digits));
            num /= 10;
        }
        //Kiem tra
        if(bientam == sum){
            printf("%d\t",i);
        }
    }
}
// case 17
void DemSoChuSo(){
    long long n;
    int count = 0;
    printf("Nhap 1 so nguyen: ");
    scanf("%lld", &n);
    do{
        n /= 10;
        ++count;
    } while (n != 0);
    printf("So chu so cua so da nhap la: %d", count);
}
void TinhGiaiThua(){
    int n, fact = 1, i;
    printf("Nhap gia tri n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("Giai thua cua %d = %d\n", n, fact);
}
int main(){
    printf("=======MENU======\n");
    printf("0.Thoat\n");
    printf("1.Bai 1:Tong so chan 1-->n\n");
    printf("2.Bai 2:Tong so le 1-->n\n");
    printf("3.Bai 3:In bang so tu 1-->100\n");
    printf("4.Bai 4:Tong cac so tu 1 -->n\n");
    printf("5.Bai 5:In so dau tien va cuoi cung\n");
    printf("6.Bai 6:Tong cac chu so cua 1 so nguyen\n");
    printf("7.Bai 7:Tich cac chu so cua 1 so nguyen\n");
    printf("8.Bai 8:Hoan doi chu so dau tien va cuoi cung\n");
    printf("9.Bai 9:Nhap 1 so bat ki in ra so dao nguoc\n");
    printf("10.Bai 10:Kiem tra so Palindrome\n");
    printf("11.Bai 11:Kiem tra so Amstrong\n");
    printf("12.Bai 12:Kiem tra so hoan hao\n");
    printf("13.Bai 13:In so nguyen to tu 1-->n\n");
    printf("14.Bai 14:In so Amstrong tu 1-->n\n");
    printf("15.Bai 15:In so hoan hao tu 1 -->n\n");
    printf("16.Bai 16:Chuyen he thap phan sang nhi phan\n");
    printf("17.Bai 8:Dem so chu so trong 1 so\n");
    printf("18.Bai 12:Kiem tra SNT");
    printf("19.Bai 19:Tinh giai thua 1 so\n");
    int luachon;
    printf("Chon chuong trinh muon chay: ");scanf("%d",&luachon);
    switch(luachon){
        case 0:break;
        case 1:{
            TongChan();
            break;
        }
        case 2:{
            TongLe();
            break;
        }
        case 3:{
            InBangSo();
            break;
        }
        case 4:{
            TinhTongSTN();
            break;
        }
        case 5:{
            InChuSo();
            break;
        }
        case 6:{
            TongCacChuSo();
            break;
        }
        case 7:{
            TichCacChuSo();
            break;
        }
        case 8:{
            HoanDoiSo();
            break;
        }
        case 9:{
            DaoNguocSo();
            break;
        }
        case 10:{
            KiemtraPalidrome();
            break;
        }
        case 11:{
            CheckAmstrong();
            break;
        }
        case 12:{
            CheckSHH();
            break;
        }
        case 13:{
            InSNT();
            break;
        }
        case 14:{
            InSoAmstrong();
            break;
        }
        case 15:{
            InSoHoanHao();
            break;
        }
        // }
        case 16:{
            ChuyenDoiCoSo();
            break;
        }
        case 17:{
            DemSoChuSo();
            break;
        }
        case 18:{
            KiemTraSoNguyenTo();
            break;
        }
        case 19:{
            TinhGiaiThua();
            break;
        }
        default:printf("Ban kiem tra lai lua chon");
    }
}
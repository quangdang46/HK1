
#include<stdio.h>
struct ps{
    int tu;
    int mau;
};
ps a[100];
int n;

void nhap1(ps &x){
    scanf("%d%d", &x.tu,&x.mau);
}
void nhap(){
    printf("Nhap so phan tu: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
        nhap1(a[i]);
}

void xuat1(ps x){
    printf("%d/%d\n",x.tu,x.mau);

}

void xuat(){
    for (int i = 1; i <= n; i++)
        xuat1(a[i]);
}

int ucln(int a, int b)
{
    int r;
    while (a % b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return b;
}
ps FindMax(){
    float max=a[1].tu/a[1].mau;
    ps ps_tmp=a[1];
    int i;
    for (i = 2; i <= n; i++)
    {
        if (a[i].tu/a[i].mau>max)
        {
            max=a[i].tu/a[i].mau;
            ps_tmp=a[i];
        }
    }
    return ps_tmp;
}

ps tongps()
{
    int i, z;
    ps tmp = a[1];
    for (i = 2; i <= n; i++)
    {
        tmp.tu = tmp.tu * a[i].mau + tmp.mau * a[i].tu;
        tmp.mau = tmp.mau * a[i].mau;
        z = ucln(tmp.tu, tmp.mau);
        tmp.tu /= z;
        tmp.mau /= z;
    }
    return tmp;
}

void xuli()
{
    ps tong = tongps();
    printf("Tong Ps: %d/%d", tong.tu, tong.mau);
}
void xuli2(){
    ps max=FindMax();
    printf("Max Ps: %d/%d", max.tu, max.mau);
}
int main(){
    nhap();
    printf("\n__________________\n");
    xuat();
    xuli2();
    printf("\n__________________\n");
    xuli();
    return 0;
}
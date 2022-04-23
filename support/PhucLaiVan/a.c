#include<stdio.h>
#include<math.h>
typedef struct{
    int id;
    int x,y;
    double r;
}point;
void solve(point p,int a,int b){
    double d=sqrt(pow(p.x-a,2)+pow(p.y-b,2));
    if(d<p.r) printf("Diem (%d,%d) nam trong hinh tron tam (%d,%d) ban kinh %.3lf\n",a,b,p.x,p.y,p.r);
    else if(d==p.r) printf("Diem (%d,%d) nam trong hinh tron tam (%d,%d) ban kinh %.3lf\n",a,b,p.x,p.y,p.r);
    else printf("Diem (%d,%d) nam ngoai hinh tron tam (%d,%d) ban kinh %.3lf\n",a,b,p.x,p.y,p.r);
}
int main(){
    int n,i,a,b;
    point p[10001];
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d%lf%d%d",&p[i].id,&p[i].r,&p[i].x,&p[i].y);
    }
    scanf("%d%d",&a,&b);
    for(i=0; i<n; i++){
        solve(p[i],a,b);
    }
}

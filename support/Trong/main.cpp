#include<bits/stdc++.h>
using namespace std;
typedef struct {
	int a,b,c;
}PT;

PT pt[100000];
void read(PT pt[],int *n){
	freopen("Bai1.inp","r",stdin);
	int i=0;
	while((cin>>pt[i].a>>pt[i].b>>pt[i].c)){
		i++;
	}
	*n=i;
}
void solve(PT pt[],int n){
	freopen("Bai1.out","w",stdout);
	for(int i=0;i<n;i++){
		bool check=false;
		for(int j=1;j<=(int)pt[i].c/pt[i].a;j++){
			for(int k=1;k<=(int)pt[i].c/pt[i].b;k++){
				if(pt[i].a*j+pt[i].b*k==pt[i].c){
					check=true;
					cout<<j<<" "<<k<<endl;
				}
			}
		}
		if(!check) cout<<"0"<<endl;
	}
}
int main(){
	int n;
	read(pt,&n);
	solve(pt,n);
	return 0;
}






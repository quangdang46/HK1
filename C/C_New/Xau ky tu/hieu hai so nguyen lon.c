#include<stdio.h>
#include<stdbool.h>
#include<string.h>
void doicho(char**M,char**N){
	char*t=*M;
	*M=*N;
	*N=t;
}
int main(){
	char M[500],N[500];
	int n,i,j;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		gets(M);
		gets(N);
		if(strlen(M)<strlen(N))
		doicho(M,N);
		else if(strlen(M)==strlen(N)){
			if(strncmp(M,N,1)<0)
			doicho(M,N);
		}
		int len1=strlen(M),len2=strlen(N);
		char*resul = (char*) malloc(len1+2 * sizeof(char));
		memset(resul,"0",len1+1);
		bool nho=false;
		for(j=0;j<len2;j++){
			int t=M[len1-1-j]-N[len2-j-1];
			if(nho)
			t--;
			if(t<0){
			t+=10;
		nho=true;	
		}
			else
			nho=false;
			resul[len1-j]=t+'0';
			
		}
		for(j=0;j<len1-len2;j++){
			int t=M[len1-len2-1-j]-'0';
			if(nho)
			t--;
			if(t<0){
			t+=10;
		nho=true;	
		}
			else
			nho=false;
			resul[len1-len2-j]=t+'0';
		}
		resul[len1+1]=NULL;
		
		for(j=0;j<=len1;j++){
			resul[j]=resul[j+1];
		}
		while (resul[0] == '0')
	{

		for ( j = 0; j < len1; j++)
		{
			resul[j] = resul[j + 1];
		}
		resul[len1] = '\0';
	}
		printf("%s\n",resul);		
	}
	return 0;
}
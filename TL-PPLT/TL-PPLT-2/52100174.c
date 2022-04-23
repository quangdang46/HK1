#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

typedef struct{
    int Id_2,Pro;
    char Id[600],First[600],Last[600],Gen[600],Birth[600],Depart[600],Coun[600];
    double Gress; 
}dict;
dict Info[5000];
dict Project[5000];
char temp[1000]="\0";
char x[100];
int CheckId[5000];

void Nhap(dict Info[],int *len);
void Nhap_2(dict Project[],int *len_2);
int checkMinMax(char f[]);
int checkCham(char f[]);
int checkSoLuong(char f[]);
void InCsv();
void Vietstrlwr(char f[]);
int Vietstrcmp(char s1[],char s2[]);
int checkbienchu(char f[]);
void chuyendoi(char a[]);
void Selection(dict Info[], int len);
void Sxsortasc(dict Info[],int len);
void Sxsortdesc(dict Info[],int len);
void count(dict Info[], int len,int d);
void male(dict Info[], int len);
void female(dict Info[], int len);
void report(char f[]);
void average(char f[]);
void sortasc(dict Info[],int len);
void sortdesc(dict Info[],int len);
void country(dict Info[], int len, char k[]);
int Input(dict Info[], int len,char x[]);
int CheckCount(char x[]);
int checkso(char f[]);
int main(){
    int len,len_2;
    int res=0;
    Nhap(Info,&len);
    gets(x);
    memcpy(temp,x,strlen(x));
    Vietstrlwr(temp);
    if(strncmp(temp,"count",5)==0){
        if(CheckCount(temp)==0){
            res=0;
        }else{
            res=Input(Info,len,temp);
        }
    }
    memcpy(temp,x,strlen(x));
    Vietstrlwr(temp);

    if(strncmp(temp,"list",4)==0){
        if(CheckCount(temp)==0){
            res=0;
        }else{
            res=Input(Info,len,temp);
        }
    }
    memcpy(temp,x,strlen(x));
    Vietstrlwr(temp);

    if(strncmp(temp,"report",6)==0){
        if(CheckCount(temp)==0){
            res=0;
        }else{
            res=Input(Info,len,temp);
        }
    }
    memcpy(temp,x,strlen(x));
    Vietstrlwr(temp);

    if(strncmp(temp,"average",7)==0){
        if(CheckCount(temp)==0){
            res=0;
        }else{
            res=Input(Info,len,temp);
        }
    }
    memcpy(temp,x,strlen(x));
    Vietstrlwr(temp);

    if(strncmp(temp,"country",7)==0){
        if(CheckCount(temp)==0){
            res=0;
        }else{
            res=Input(Info,len,temp);
        }
    }
    memcpy(temp,x,strlen(x));
    Vietstrlwr(temp);

    if(strncmp(temp,"sort",4)==0){
        if(CheckCount(temp)==0){
            res=0;
        }else{
            res=Input(Info,len,temp);
        }
    }


    if(res==0){
        FILE *f=fopen("result.csv","w");
        fclose(f);
        FILE *check = fopen("check.txt","w");
        fprintf(check,"%s","wrong syntax");
        fclose(check);
    }
    return 0;
}


void Nhap(dict Info[],int *len){
    FILE *file;
    file=fopen("Employee.csv","r");
    char str[600];
    int i=0;
    fgets(str,sizeof(str),file);
    while(fgets(str,sizeof(str),file)){
        char * token = strtok(str,",");
        memcpy(Info[i].Id,token,strlen(token));
        token = strtok(NULL,",");
        memcpy(Info[i].First,token,strlen(token));
        token = strtok(NULL,",");
        memcpy(Info[i].Last,token,strlen(token));
        token = strtok(NULL,",");
        memcpy(Info[i].Gen,token,strlen(token));
        token = strtok(NULL,",");
        memcpy(Info[i].Birth,token,strlen(token));
        token = strtok(NULL,",");
        memcpy(Info[i].Depart,token,strlen(token));
        token = strtok(NULL,",\n");
        memcpy(Info[i].Coun,token,strlen(token));
        i++;
    }
    *len=i;
    fclose(file);
}

void Nhap_2(dict Project[],int *len_2){
    FILE *file;
    file=fopen("Progress.csv","r");
    char str[600];
    int i=0;
    fgets(str,sizeof(str),file);
    while(fgets(str,sizeof(str),file)){
        char * token = strtok(str,",");
        Project[i].Id_2 = atoi(token);
        token = strtok(NULL,",");
        Project[i].Pro= atoi(token);
        token = strtok(NULL,",");
        Project[i].Gress= atof(token);
        i++;
    }
    *len_2=i;
    fclose(file);
}

int checkMinMax(char f[]){
    int len_2;
    Nhap_2(Project,&len_2);
    int min=Project[0].Pro,max=Project[0].Pro;
    int i;
    for(i=1;i<len_2;i++){
        if(Project[i].Pro>max) max=Project[i].Pro;
        if(Project[i].Pro<min) min=Project[i].Pro;
    }
    if(atoi(f)>max || atoi(f)<min){
        return 0;
    }
    return 1;
}

int checkCham(char f[]){
    int i,cnt=0,check=1;
    for(i=0;i<strlen(f);i++){
        if(f[i]==46) cnt++;
        if((isalnum(f[1]) && f[0]==46) || (f[i]==46 && f[i+1]=='\0')){
            check=0;
        }
    }
    if(cnt>1 || check==0){
        return 0;
    }
    return 1;
}
// CHECK NHIEU GIA TRI
int checkSoLuong(char f[]){
    int dem=0,i;
    if(f[0]!=' ') dem++;
    for(i=0;i<strlen(f)-1;i++){
        if(f[i]==' '&& f[i+1]!=' ') dem++;
    }
    return dem;
}

void InCsv(){
    FILE *check = fopen("check.txt","w");
    fclose(check);
    FILE *f=fopen("result.csv","w");
    fprintf(f,"0");
    fclose(f);
}

void Vietstrlwr(char f[]){
    int i;
    for(i=0; i<strlen(f); i++){
        if(f[i]>=65 && f[i]<=90){
            f[i]=f[i]+32;
        }
    }
}

int Vietstrcmp(char s1[],char s2[]){
	char s11[100] = "\0";
	char s22[100] = "\0";
    int i;
    int dodai_min = strlen(s1) < strlen(s2) ? strlen(s1) : strlen(s2);
    strcpy(s11,s1);
    strcpy(s22,s2);
    Vietstrlwr(s11);
    Vietstrlwr(s22);
	// vòng lặp duyệt từng kí tự để so sánh
	for(i = 0; i < dodai_min; i++){
		if(s11[i] > s22[i]){
			return 1; // chuỗi s1 lớn hơn chuỗi s2
		}else if(s11[i] < s22[i]){
			return -1; // chuỗi s1 nhỏ hơn chuỗi s2
		}
	}

	// nếu sau khi thoát khỏi vòng lặp for mà vẫn chưa phát hiện sự khác biệt thì kiểm tra độ dài 
	// nếu độ dài của thằng nào dài hơn thì thằng đó lớn hơn
	if(strlen(s1) > strlen(s2)){
		return 1;
	}else if(strlen(s1) < strlen(s2)){
		return -1;
	}
	return 0; // 2 chuỗi có độ dài như nhau
}

int checkbienchu(char f[]){
    int i;
    for(i=0;i<strlen(f);i++){
        if((f[i]>=65&&f[i]<=90) || (f[i]>=97 && f[i]<=122)){
            return 0;
        }
    }
    return 1;
}

void chuyendoi(char a[]){
    if(a[0]>=97&&a[0]<=122){
        a[0]= a[0]-32;
    }
}

void Selection(dict Info[], int len){
    int i,j,min;
    for(i=0;i<len-1;i++){
        min=i;
        for(j=i+1;j<len;j++){
            //SAP XEP TANG DAN
            if(Vietstrcmp(Info[j].Last,Info[min].Last)<0){
                min=j;
            }
        }
        if(min!=j){
            dict tmp=Info[min];
            Info[min]=Info[i];
            Info[i]=tmp;
        }
    }    
}

void Sxsortasc(dict Info[],int len){
    int i,j;
    Selection(Info,len);
    // TH1:SAP XEP TANG DAN in xuoi
    for(i=0;i<len-1;i++){
        for(j=i+1;j<len;j++){
            if(Vietstrcmp(Info[j].Last,Info[i].Last)==0 && Vietstrcmp(Info[j].First,Info[i].First)<0){
                dict tmp=Info[j];
                Info[j]=Info[i];
                Info[i]=tmp; 
            }
        }
    }
}

void Sxsortdesc(dict Info[],int len){
    int i,j;
    Selection(Info,len);
    // TH1:SAP XEM GIAM DAN in nguoc
    for(i=0;i<len-1;i++){
        for(j=i+1;j<len;j++){
            if(Vietstrcmp(Info[j].Last,Info[i].Last)==0 && Vietstrcmp(Info[j].First,Info[i].First)>0){
                dict tmp=Info[j];
                Info[j]=Info[i];
                Info[i]=tmp; 
            }
        }
    }    
}
    // //////////////////
void count(dict Info[], int len,int d){
    FILE *check = fopen("check.txt","w");
    fclose(check);
    FILE *f=fopen("result.csv","w");
    int i,res=0;
    for(i=0;i<len;i++){
        if(atoi(Info[i].Depart)==d) res++;
    }
    fprintf(f,"%d\n",res);
    fclose(f);
}

void male(dict Info[], int len){
    FILE *check = fopen("check.txt","w");
    fclose(check);
    FILE *f=fopen("result.csv","w");
    int i;
    for(i=0;i<len;i++){
        if(strcmp("Male",Info[i].Gen)==0){
            fprintf(f,"%s,%s,%s,%s,%s,%s,%s\n",Info[i].Id,Info[i].First,Info[i].Last,Info[i].Gen,Info[i].Birth,Info[i].Depart,Info[i].Coun);
        }
    }
    fclose(f);
}
void female(dict Info[], int len){
    FILE *check = fopen("check.txt","w");
    fclose(check);
    FILE *f=fopen("result.csv","w");
    int i;
    for(i=0;i<len;i++){
        if(strcmp("Female",Info[i].Gen)==0){
            fprintf(f,"%s,%s,%s,%s,%s,%s,%s\n",Info[i].Id,Info[i].First,Info[i].Last,Info[i].Gen,Info[i].Birth,Info[i].Depart,Info[i].Coun);
        }
    }
    fclose(f);
}
///CHECKKKKKKKKKKKK\N
void report(char f[]){
    FILE *check = fopen("check.txt","w");
    fclose(check);
    int i,len_2,k=0,j;
    Nhap_2(Project,&len_2);
    FILE *file2=fopen("result.csv","w");
    for(i=0;i<len_2; i++){
        if (Project[i].Gress==atof(f)){
            CheckId[k]=Project[i].Id_2;
            k++;
        }
    }
    for(i=0;i<k;i++){
        int ok=1;
        for(j=0;j<i;j++){
            if(CheckId[j]==CheckId[i]){
                ok=0;
                break;
            }
        }
        if(ok==1) fprintf(file2,"%d\n",CheckId[i]);
    }

    fclose(file2);
}
//CHECKKKKKKKKKKKKKK
void average(char f[]){
    FILE *check = fopen("check.txt","w");
    fclose(check);
    int i,len_2;
    Nhap_2(Project,&len_2);
    FILE *file2=fopen("result.csv","w");
    float sum=0,k=0;
    for(i=0;i<len_2; i++){
        if (Project[i].Pro==atoi(f)){
            k++;
            sum+=Project[i].Gress;
        }
    }
    if(sum==0){
        InCsv();
    }else{
        fprintf(file2,"%0.3f\n",sum/k);
    }
    fclose(file2);
}

void sortasc(dict Info[],int len){
    FILE *check = fopen("check.txt","w");
    fclose(check);
    Sxsortasc(Info,len);
    FILE *f=fopen("result.csv","w");
    int i;
    for(i=0;i<len;i++){
        fprintf(f,"%s,%s,%s,%s,%s,%s,%s\n",Info[i].Id,Info[i].First,Info[i].Last,Info[i].Gen,Info[i].Birth,Info[i].Depart,Info[i].Coun);
    }
    fclose(f);
}

void sortdesc(dict Info[],int len){
    FILE *check = fopen("check.txt","w");
    fclose(check);
    Sxsortdesc(Info,len);
    FILE *f=fopen("result.csv","w");
    int i;
    for(i=len-1;i>=0;i--){
        fprintf(f,"%s,%s,%s,%s,%s,%s,%s\n",Info[i].Id,Info[i].First,Info[i].Last,Info[i].Gen,Info[i].Birth,Info[i].Depart,Info[i].Coun);
    }
    fclose(f);
}
//CHECKKKKKKKKKKKKKKKKKK
void country(dict Info[], int len, char k[]){
    FILE *check = fopen("check.txt","w");
    fclose(check);
    chuyendoi(k);
    FILE *f=fopen("result.csv","w");
    int i;
    for(i=0;i<len;i++){
        if(strcmp(Info[i].Coun,k)==0){
            fprintf(f,"%s,%s,%s,%s,%s,%s,%s\n",Info[i].Id,Info[i].First,Info[i].Last,Info[i].Gen,Info[i].Birth,Info[i].Depart,Info[i].Coun); 
        }
    }
    fclose(f);
}

int Input(dict Info[], int len,char x[]){
    int check_=0;
    if(checkSoLuong(x)==2){
        char l[10],p[20];
        char *n=strtok(x," ");
        strcpy(l,n);
        n=strtok(NULL," ");
        strcpy(p,n);
        Vietstrlwr(l);
        Vietstrlwr(p);
        ///////////////////////////////
        if(strcmp(l,"count")==0){
            check_=1;
            count(Info,len,atoi(p));
        }
        ////////////////////////////////
        if(strcmp(l,"list")==0){
            if(strcmp(p,"male")==0){
                check_=1;
                male(Info,len);
            }
            if(strcmp(p,"female")==0){
                check_=1;
                female(Info,len);
            }
        }
        //////////////////////////////////
        if(strcmp(l,"report")==0){
            if(atof(p)<0 || atof(p)>1 || checkbienchu(p)==0 || checkCham(p)==0){
                check_=0;
            }else{
                check_=1;
                report(p);
            }
        }
        //////////////////////////////////
        if(strcmp(l,"average")==0){
            if(checkbienchu(p)==0){
                check_=0;
            }else if(checkMinMax(p)==0){
                check_=1;
                InCsv();
            }else{
                check_=1;
                average(p);
            }    
        }
        /////////////////////////////////
        if (strcmp(l,"sort")==0){
            if(strcmp(p,"asc")==0){
                check_=1;
                sortasc(Info,len);
            }
            if(strcmp(p,"desc")==0){
                check_=1;
                sortdesc(Info,len);
            }
        }
        /////////////////////////////////
        if (strcmp(l,"country")==0){
            if(checkso(p)==1){
                check_=1;
                country(Info,len,p);
            }else{
                check_=0;
            }
        }
    }

    if(check_==0){
        return 0;
    }else{
        return 1;
    }
}

// CHECK NHIEU KHOANG TRANG+NHIEU GIA TRI
int CheckCount(char x[]){
    int i,res,cnt=0;
    for(i=0; i<strlen(x); i++){
        // Nhieu Khoang Trang
        if(x[i]>=97 && x[i]<=122 && x[i+1]==32 && x[i+2]==32){
            return 0;
        }else{
            // Nhieu ham nho
            if(x[i]==32&& cnt==0){
                res=i;
                cnt=1;
            }
            if(x[i]==32&&i>res) return 0;
        }
    }
    return 1;
}
int checkso(char f[]){
    int i;
    for(i=0; i<strlen(f);i++){
        if(f[i]>=48 && f[i]<=57){
            return 0;
        }
    }
    return 1;
}


#include<stdio.h>
//kiểm tra ngày tháng năm hợp lệ
int check_date(int ngay,int thang,int nam){
    if(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12){
        if(ngay>=1&&ngay<=31){
            return 1;
        }
    }
    else if(thang==4||thang==6||thang==9||thang==11){
        if(ngay>=1&&ngay<=30){
            return 1;
        }
    }
    else if(thang==2){
        if((nam%4==0&&nam%100!=0)||nam%400==0){
            if(ngay>=1&&ngay<=29){
                return 1;
            }
        }
        else{
            if(ngay>=1&&ngay<=28){
                return 1;
            }
        }
    }
    return 0;
}
//nhập vào ngày tháng năm sinh in ra ai lớn tuổi hơn và lớn hơn bao nhiêu năm
void LonTuoiHon(int ngay1,int thang1,int nam1,int ngay2,int thang2,int nam2){
    int tuoi1,tuoi2;
    tuoi1=2022-nam1;
    tuoi2=2022-nam2;
    if(tuoi1>tuoi2){
        printf("Tuoi A lon hon tuoi B la: %d nam\n",tuoi1-tuoi2);
    }
    else if(tuoi1<tuoi2){
        printf("Tuoi A be hon tuoi B la: %d nam\n",tuoi2-tuoi1);
    }
    else{
        printf("Tuoi A bang tuoi B\n");
    }
}
int main(){
    int ngay1,thang1,nam1;
    int ngay2,thang2,nam2;
    printf("Nhap ngay,thang,nam A:");
    scanf("%d%d%d",&ngay1,&thang1,&nam1);
    printf("Nhap ngay,thang,nam B:");
    scanf("%d%d%d",&ngay2,&thang2,&nam2);
    if(check_date(ngay1,thang1,nam1) && check_date(ngay2,thang2,nam2)){
        printf("Ngay thang nam hop le\n");
        LonTuoiHon(ngay1,thang1,nam1,ngay2,thang2,nam2);
    }
    else{
        printf("Ngay thang nam khong hop le\n");
    }

    return 0;
}

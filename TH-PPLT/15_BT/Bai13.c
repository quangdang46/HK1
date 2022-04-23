#include<stdio.h>
int laNamNhuan(int nYear){
	if ((nYear % 4 == 0 && nYear % 100 != 0) || nYear % 400 == 0){
		return 1;
	}
	return 0;
}
int tinhSoNgayTrongThang(int nMonth, int nYear){
	int nNumOfDays;
	switch (nMonth){
        case 1:case 3:case 5:case 7:case 8:case 10:
        case 12: 
            nNumOfDays = 31;
            break;
        case 4:case 6:case 9:
        case 11: 
            nNumOfDays = 30;
            break;
        case 2:
            if (laNamNhuan(nYear)){
                nNumOfDays = 29;
            }else{
                nNumOfDays = 28;
            }
            break;
		default:return 0;
	}
	return nNumOfDays;
}
int laNgayHopLe(int nDay, int nMonth, int nYear){
	if (nYear < 0){
		return 0;
	}
	if (nMonth < 1 || nMonth > 12){
		return 0;
	}
	if (nDay < 1 || nDay > tinhSoNgayTrongThang(nMonth, nYear)){
		return 0;
	}
	return 1;
}
int main(){
	int nDay, nMonth, nYear;
    printf("Ngay:");scanf("%d",&nDay);
    printf("Thang:");scanf("%d",&nMonth);
    printf("Year:");scanf("%d",&nYear);
	if (laNgayHopLe(nDay, nMonth, nYear)==1){
		printf("YES\n");
	}else{
		printf("NO\n");
	}

	return 0;
}

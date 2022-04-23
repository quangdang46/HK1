#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<cmath>

/*
Nhập vào 1 chuỗi số. Chuyển chuỗi số đó thành 1 số nguyên
VD: s = "123"
==> 123

+ 1 kí tự số mà muốn chuyển sang 1 số nguyên
==> kí tự số - 48

+ 1 chữ số nguyên mà muốn chuyển sang kí tự số
==> chữ số nguyên + 48

0 --> 9



======================
"123" chuyển thành 123
123 ==> 321 = 3 * 10^2 + 2 * 10^1 + 1 * 10^0

"123" = ('1' - 48) * 10^2 + ('2' - 48) * 10^1 + ('3' - 48) * 10^0
<=> 1 * 10^2 + 2 * 10^1 + 3 * 10^0 = 123

*/

// hàm chuyển chuỗi số thành số nguyên
int Chuyen_Doi(char s[])
{
	float sum = 0; // chứa kết quả của số nguyên sau khi chuyển
	int mu = 0; // biến mũ của công thức 1 * 10^2 + 2 * 10^1 + 3 * 10^0 = 123
	// duyệt từ cuối chuỗi về đầu chuỗi
	for(int i = strlen(s) - 1; i >= 0; i--)
	{
		sum = sum + ( (s[i] - 48) * pow(10, mu));
		mu++; // biến mũ tăng lên 1 đơn vị
	}
	return sum; // trả về kết quả là 1 số nguyên sau khi chuyển

}

int main()
{
	char s[50];
	printf("\nNhap chuoi so: ");
	gets(s);
	printf("\nChuoi so vua nhap: %s", s);

	
	int ketqua = Chuyen_Doi(s); // chuyển chuỗi số s thành 1 số nguyên
	printf("\nKet qua so nguyen sau khi chuyen: %d", ketqua + 5);

	
	return 0;
}
/*
#include <iostream>
#include <string>
#include <string.h>
#include <math.h>
using namespace std;
 
int main(){
    // Chuyen kieu string ve int
    string s = "12345";
    int l1 = s.length();
    int num1 = 0;
    for(int i = l1 - 1; i >= 0; --i){
        num1 += (int)(s[i] - '0') * pow(10, l1-i-1);
    }
    cout << "num1 = " << num1 << '\n';
    
    // Chuyen kieu char*(char[]) ve int
    char *ch = "135";
    int l2 = strlen(ch);
    int num2 = 0;
    for(int i = l2 - 1; i >= 0; --i){
        num2 += (int)(ch[i] - '0') * pow(10, l2-i-1);
    }
    cout << "num2 = " << num2 << '\n';
}
 
*/ 
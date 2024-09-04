#include <stdio.h>
#include <stdlib.h>
// Nhớ là đi học cũng nên thêm 2 thư viện này nhé 
// Để chạy chỉ cần nhấn F5 rồi run thôi
// % là đặc tả cho giá trị nhập vào hoặc xuất ra nhé
// Vd: %d là kiểu số nguyên, %f float .... 
// \n là xuống 1 line, còn khá nhiều á lên học cơ bản trước nèd
int main(){
    int n;
    printf("Nhap so n: ");
    scanf("%d",&n);
    printf("Ket qua la: %d \n", (n + 10)); //n = 2 => KQ = 12
    // printf("Hello World");
    system("pause");
    return 0;
}




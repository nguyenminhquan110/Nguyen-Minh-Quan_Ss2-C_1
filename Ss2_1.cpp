#include <stdio.h>
#include <stdbool.h>  // Thêm thý vi?n này ð? s? d?ng ki?u bool

int main() {
    // Khai báo và kh?i t?o bi?n ki?u int (s? nguyên)
    int a = 1;  // Ð? thay ð?i t? 01 thành 1 v? 01 là h? s? 8 trong C, và ta mu?n s? th?p phân

    // Khai báo và kh?i t?o bi?n ki?u float (s? th?c, có d?u)
    float b = 10.0f;  // Ð? thay ð?i t? 10f thành 10.0f, c?n ph?i có ph?n th?p phân trong giá tr? float

    // Khai báo và kh?i t?o bi?n ki?u double (s? th?c, có d?u, ð? chính xác cao hõn float)
    double c = 2006.0;  // Ð? thay ð?i t? 2006 thành 2006.0 ð? r? ràng là giá tr? s? th?c

    // Khai báo và kh?i t?o bi?n ki?u char (k? t?)
    char d = 'q';  // K? t? 'q'

    // Khai báo và kh?i t?o bi?n ki?u bool (bi?n logic: ðúng hay sai)
    bool e = false;  // Bool thay ð?i thành false

    // In giá tr? c?a các bi?n ra màn h?nh
    printf("a = %d\n", a);  // In bi?n a (ki?u int)
    printf("b = %.2f\n", b);  // In bi?n b (ki?u float), v?i 2 ch? s? th?p phân
    printf("c = %.6f\n", c);  // In bi?n c (ki?u double), v?i 6 ch? s? th?p phân
    printf("d = %c\n", d);  // In bi?n d (ki?u char)
    printf("e = %d\n", e);  // In bi?n e (ki?u bool), s? in ra 1 n?u true, 0 n?u false

    return 0;
}


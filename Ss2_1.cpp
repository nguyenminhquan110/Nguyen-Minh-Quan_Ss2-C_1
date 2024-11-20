#include <stdio.h>
#include <stdbool.h>  // Th�m th� vi?n n�y �? s? d?ng ki?u bool

int main() {
    // Khai b�o v� kh?i t?o bi?n ki?u int (s? nguy�n)
    int a = 1;  // �? thay �?i t? 01 th�nh 1 v? 01 l� h? s? 8 trong C, v� ta mu?n s? th?p ph�n

    // Khai b�o v� kh?i t?o bi?n ki?u float (s? th?c, c� d?u)
    float b = 10.0f;  // �? thay �?i t? 10f th�nh 10.0f, c?n ph?i c� ph?n th?p ph�n trong gi� tr? float

    // Khai b�o v� kh?i t?o bi?n ki?u double (s? th?c, c� d?u, �? ch�nh x�c cao h�n float)
    double c = 2006.0;  // �? thay �?i t? 2006 th�nh 2006.0 �? r? r�ng l� gi� tr? s? th?c

    // Khai b�o v� kh?i t?o bi?n ki?u char (k? t?)
    char d = 'q';  // K? t? 'q'

    // Khai b�o v� kh?i t?o bi?n ki?u bool (bi?n logic: ��ng hay sai)
    bool e = false;  // Bool thay �?i th�nh false

    // In gi� tr? c?a c�c bi?n ra m�n h?nh
    printf("a = %d\n", a);  // In bi?n a (ki?u int)
    printf("b = %.2f\n", b);  // In bi?n b (ki?u float), v?i 2 ch? s? th?p ph�n
    printf("c = %.6f\n", c);  // In bi?n c (ki?u double), v?i 6 ch? s? th?p ph�n
    printf("d = %c\n", d);  // In bi?n d (ki?u char)
    printf("e = %d\n", e);  // In bi?n e (ki?u bool), s? in ra 1 n?u true, 0 n?u false

    return 0;
}


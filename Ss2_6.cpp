#include<stdio.h>
int main () {
	const float a = 3.14;
	float b = 10;
	float perimeter = (2*a*b);
	float area = (a*b*b);
	printf("Chu vi h�nh tr�n l�: %.2f/n",perimeter);
	printf("Di?n t�ch h�nh tr�n l�: %.2f/n",area);
	return 0; 
}

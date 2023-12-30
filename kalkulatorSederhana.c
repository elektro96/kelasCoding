#include <stdio.h>

int main(int argc, char **argv)
{
    char operator;
    double angka1;
    double angka2;
    double hasil; 
    printf("======Selamat datang di kalkulator sederhana======\n\n");
    printf("Masukkan operator (+ - * /) : ");
    scanf("%c", &operator);
    
	printf("angka 1 : ");
    scanf("%lf", &angka1);
    
    printf("angka 2 : ");
    scanf("%lf", &angka2);
    
    switch(operator){
        case'+' :
        hasil=angka1+angka2;
        printf("\nhasil : %.2lf", hasil);
        break;
        
        case'-' :
        hasil=angka1-angka2;
        printf("\nhasil : %.2lf", hasil);
        break;
        
        case'*' :
        hasil=angka1*angka2;
        printf("\nhasil = %.2lf", hasil);
        break;
        
        case'/' :
        hasil=angka1/angka2;
        printf("\nhasil = %.2lf", hasil);
        break;
        
        default :
        printf("%c operator yang anda masukkan salah", operator);
        
    }
    
	return 0;
}

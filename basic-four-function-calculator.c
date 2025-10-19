#include <stdio.h>
#include <locale.h>


int main() 
{
	setlocale(LC_ALL,"Turkish");
	
	char islem;
	double sayi1,sayi2,sonuc;
	
	printf("--------------------------------------\n");
	printf("Temel Dört Fonksiyonlu Hesap Makinesi\n");
	printf("--------------------------------------\n");
	
	printf("Lütfen Ýþlem Giriniz(+,-,*,/): ");
	scanf("%c",&islem);
	
	printf("Lütfen 1. sayýyý giriniz: ");
	scanf("%lf",&sayi1);

	printf("Lütfen 2. sayýyý giriniz: ");
	scanf("%lf",&sayi2);
	
	switch(islem)
	{
		case '+':
			sonuc = sayi1+sayi2;
			printf("%lf",sonuc);
			break;
		case '-':
			sonuc = sayi1-sayi2;
			printf("%lf",sonuc);
			break;
		case '*':
			sonuc = sayi1*sayi2;
			printf("%lf",sonuc);
			break;
		case '/':
			sonuc = sayi1/sayi2;
			printf("%lf",sonuc);
			break;
		default:
			printf("Hatalý Ýþlem Giriþi!");
			break;
	}
	
	
	
	return 0;
}

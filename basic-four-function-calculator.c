#include <stdio.h>
#include <locale.h>


int main() 
{
	setlocale(LC_ALL,"Turkish");
	
	char islem;
	double sayi1,sayi2,sonuc;
	
	printf("--------------------------------------\n");
	printf("Temel D�rt Fonksiyonlu Hesap Makinesi\n");
	printf("--------------------------------------\n");
	
	printf("L�tfen ��lem Giriniz(+,-,*,/): ");
	scanf("%c",&islem);
	
	printf("L�tfen 1. say�y� giriniz: ");
	scanf("%lf",&sayi1);

	printf("L�tfen 2. say�y� giriniz: ");
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
			printf("Hatal� ��lem Giri�i!");
			break;
	}
	
	
	
	return 0;
}

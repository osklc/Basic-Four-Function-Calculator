#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() 
{
	setlocale(LC_ALL,"Turkish");
	setlocale(LC_NUMERIC, "C"); 
	
	char islem;
	
	printf("--------------------------------\n");
	printf("Temel Dört Fonksiyonlu Hesap Makinesi\n");
	printf("--------------------------------\n");
	
	printf("Lütfen Ýþlem Giriniz(+,-,*,/): ");
	scanf(" %c",&islem);
	
	if(islem != '+' && islem != '-' && islem != '*' && islem != '/')
	{
		printf("--------------------------------\n");
		printf("Hatalý Ýþlem Giriþi!");
		return 1;
	}
	
	double sayi1,sayi2,sonuc;
	int tam_sayi_sonuc;
	
	printf("--------------------------------\n");
	printf("Lütfen 1. sayýyý giriniz: ");
	scanf("%lf",&sayi1);
	printf("--------------------------------\n");
	printf("Lütfen 2. sayýyý giriniz: ");
	scanf("%lf",&sayi2);
	
	
	switch(islem)
	{
		case '+':
			printf("--------------------------------\n");
			
			sonuc = sayi1+sayi2;
			tam_sayi_sonuc = (int)floor(sonuc);
			
			if (sonuc!=tam_sayi_sonuc) 
			{
				printf("Sonuç: %.2f",sonuc);
			}
			else
			{
				printf("Sonuç: %d",tam_sayi_sonuc);
			}
			break;
			
		case '-':
			printf("--------------------------------\n");
			
			sonuc = sayi1-sayi2;
			tam_sayi_sonuc = (int)floor(sonuc);
			
			if (sonuc!=tam_sayi_sonuc) 
			{
				printf("Sonuç: %.2f",sonuc);
			}
			else
			{
				printf("Sonuç: %d",tam_sayi_sonuc);
			}
			break;
		case '*':
			printf("--------------------------------\n");
			
			sonuc = sayi1*sayi2;
			tam_sayi_sonuc = (int)floor(sonuc);
			
			if (sonuc!=tam_sayi_sonuc) 
			{
				printf("Sonuç: %.2f",sonuc);
			}
			else
			{
				printf("Sonuç: %d",tam_sayi_sonuc);
			}
			break;

		case '/':
			printf("--------------------------------\n");
			sonuc = sayi1/sayi2;
			tam_sayi_sonuc = (int)floor(sonuc);
			
			if (sonuc!=tam_sayi_sonuc) 
			{
				printf("Sonuç: %.2f",sonuc);
			}
			else
			{
				printf("Sonuç: %d",tam_sayi_sonuc);
			}
			break;
	}
	
	
	
	return 0;
}

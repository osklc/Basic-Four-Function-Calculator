#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() 
{
	setlocale(LC_ALL,"Turkish");
	setlocale(LC_NUMERIC, "C"); 
	
	char islem;
	
	printf("--------------------------------\n");
	printf("Temel D�rt Fonksiyonlu Hesap Makinesi\n");
	printf("--------------------------------\n");
	
	printf("L�tfen ��lem Giriniz(+,-,*,/): ");
	scanf(" %c",&islem);
	
	if(islem != '+' && islem != '-' && islem != '*' && islem != '/')
	{
		printf("--------------------------------\n");
		printf("Hatal� ��lem Giri�i!");
		return 1;
	}
	
	double sayi1,sayi2,sonuc;
	int tam_sayi_sonuc;
	
	printf("--------------------------------\n");
	printf("L�tfen 1. say�y� giriniz: ");
	scanf("%lf",&sayi1);
	printf("--------------------------------\n");
	printf("L�tfen 2. say�y� giriniz: ");
	scanf("%lf",&sayi2);
	
	
	switch(islem)
	{
		case '+':
			printf("--------------------------------\n");
			
			sonuc = sayi1+sayi2;
			tam_sayi_sonuc = (int)floor(sonuc);
			
			if (sonuc!=tam_sayi_sonuc) 
			{
				printf("Sonu�: %.2f",sonuc);
			}
			else
			{
				printf("Sonu�: %d",tam_sayi_sonuc);
			}
			break;
			
		case '-':
			printf("--------------------------------\n");
			
			sonuc = sayi1-sayi2;
			tam_sayi_sonuc = (int)floor(sonuc);
			
			if (sonuc!=tam_sayi_sonuc) 
			{
				printf("Sonu�: %.2f",sonuc);
			}
			else
			{
				printf("Sonu�: %d",tam_sayi_sonuc);
			}
			break;
		case '*':
			printf("--------------------------------\n");
			
			sonuc = sayi1*sayi2;
			tam_sayi_sonuc = (int)floor(sonuc);
			
			if (sonuc!=tam_sayi_sonuc) 
			{
				printf("Sonu�: %.2f",sonuc);
			}
			else
			{
				printf("Sonu�: %d",tam_sayi_sonuc);
			}
			break;

		case '/':
			printf("--------------------------------\n");
			sonuc = sayi1/sayi2;
			tam_sayi_sonuc = (int)floor(sonuc);
			
			if (sonuc!=tam_sayi_sonuc) 
			{
				printf("Sonu�: %.2f",sonuc);
			}
			else
			{
				printf("Sonu�: %d",tam_sayi_sonuc);
			}
			break;
	}
	
	
	
	return 0;
}

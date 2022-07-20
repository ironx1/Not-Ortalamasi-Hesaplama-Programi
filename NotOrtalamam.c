#include <stdio.h>
int main() {
	float vize,final,ort;
	int gecmeNotu;
	printf("Gecme Notunu Giriniz: ");
	scanf("%d",&gecmeNotu);
	printf("Vize Notunuzu Giriniz: ");
	scanf("%f",&vize);
	printf("Final Notunuzu Giriniz: ");
	scanf("%f",&final);
	ort = ((vize*40)/100 + (final*60)/100);
	if(vize>100 || final > 100){
		printf("Hatali Not Girisi Yaptiniz!");

	}
	else if(ort>gecmeNotu){
		printf("%.2f ortalama ile gectiniz",ort);
	}
	else {
		printf("Maalesef gecemediniz\nortalamaniz:%.2f",ort);
	}
	return 0;
}

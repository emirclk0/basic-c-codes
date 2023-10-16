#include <stdio.h>

int fakt(int *sayi){
	int sonuc=1;
	
	for(int i=*sayi;i>=1;i--){
	sonuc*=(*sayi);
	(*sayi)--;
	}
	
	return sonuc;
}

int main(){
	int n,orijinalsayi;
	printf("bir sayi gir.:	");
	scanf("%d",&n);
	orijinalsayi=n;
	
	printf("%d!=%d",orijinalsayi,fakt(&n));
	return 0;
}

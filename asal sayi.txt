#include <stdio.h>

int main()
{

    int sayi;
    printf("sayi giriniz:");
    scanf("%d",&sayi);
    
    int sayac;
    
    if(sayi==2){
            printf("%d asal bir sayidir.",sayi);
            return 0;
    }
    if(sayi==3){
            printf("%d asal bir sayidir.",sayi);
            return 0;
    }
        
    for(int j=2; j<sayi;j++){
        if(sayi%j==0){
            sayac++;
            
        }
        
    }
    
    if(sayac!=0){
        printf("%d asal bir sayi degildir.",sayi);
    }
    
    return 0;
}

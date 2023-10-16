#include <stdio.h>

int main()
{
    printf("İki Binary Code birbirinden çıkaran uygulama\n");

    char dizi1[1000];
    char dizi2[1000];
    
    printf("ilk sayiyi giriniz:");
    scanf("%s",&dizi1);
    int sayac1=0;
    int sayac2=0;
    
    while(dizi1[sayac1]!='\0'){
        sayac1++;
    }
    
    for(int i=0;i<sayac1;i++){
        if(dizi1[i]!='0' && dizi1[i]!='1'){
            printf("hatalı sayı girdiniz.");
            return 0;
        }
    }
    
    printf("ikinci sayiyi giriniz:");
    scanf("%s",&dizi2);
    
    while(dizi2[sayac2]!='\0'){
        sayac2++;
    }
    
    for(int i=0;i<sayac2;i++){
        if(dizi2[i]!='0' && dizi2[i]!='1'){
            printf("hatalı sayı girdiniz.");
            return 0;
        }
    }
    int point;
    for(int j=sayac2-1;j>=0;j--){
        if(dizi2[j]=='1'){
            point=j;
            break;
        }
    }
    
    int swap=0;
    while(swap<point){
        if(dizi2[swap]=='1'){
            dizi2[swap]='0';
            swap++;
        }
        else if(dizi2[swap]=='0'){
            dizi2[swap]='1';
            swap++;
        }
    }
//Binary sayıların 2ye tümlemesini yapar.
    
    
    
    
    
    
    
    
    
    
   
    
    
    

    return 0;
}

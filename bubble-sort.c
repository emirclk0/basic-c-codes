#include <stdio.h>
int main()
{
    int i;
    
    printf("dizi sayisini giriniz:");
    scanf("%d",&i);
    
    int dizi[i];
    int eleman;
    
    for(int sayac=0; sayac<i ; sayac++){
        printf("%d. sayiyi giriniz:",sayac+1);
        scanf("%d",&eleman);
        dizi[sayac]=eleman;
    }
    
    
    
    
    int swap;
    
    for(int j =1 ; j<=i ; j++){
        for(int k =0 ; k<i-j; k++){
            if(dizi[k]>dizi[k+1]){
                swap=dizi[k+1];
                dizi[k+1]=dizi[k];
                dizi[k]=swap;
            }
        }
    }
    
    for(int c=0;c<i;c++){
        printf("%d\n",dizi[c]);
    }
    return 0;
}

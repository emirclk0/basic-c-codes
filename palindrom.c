#include <stdio.h>
int main() {
    int score = 0;
    
//cumleleri ve sayilari buraya yazabiliriz.    
    
    
    if (is_palindromic("elma", 4) == 0) score += 5;
    if (is_palindromic("yapay", 5) == 1) score += 5;
    if (is_palindromic("7895987", 7) == 1) score += 5;
    if (is_palindromic("Eski dediysE", 12) == 0) score += 10;
    if (is_palindromic("Anastas mum satsanA", 19) == 1) score += 10;
    if (is_palindromic("Kasaya mal koyana yoklama yasaK", 31) == 1) score += 20;
    if (is_palindromic("Eli bitti bile", 14) == 0) score += 20;
    if (is_palindromic("!iMrEnSeM aDaMa mAdAm EsNeR mi", 30) == 1) score += 25;
    
    printf("puan: %d", score);
    return 0;
}

// palindromik yani tersi kendisine esit olan string'ler icin 1, olmayanlar icin 0 dondurur
// cumle yapisinda olanlar icin farkli calisir
// yalnizca unlemle baslayan cumleler icin buyuk kucuk harf ayrimi yapmaz
int is_palindromic(char string[], int n) {
    // kodunuzu buraya yazin
   int i= 0;
   int eleman = n;
   char palindrom[eleman];
   for (int i=0;eleman>=i; i++)
   {
        palindrom[i] = string[(eleman-1)-i];
   }

   if (palindrom[eleman-1] == '!')
   {
        palindrom[eleman-1] = '\0';
        for (int i = 0; i < eleman-1; i++)
        {
            if (palindrom[i] <= 122 && palindrom[i] >= 97)
            {
                palindrom[i] = palindrom[i]-32;
            }
        } 
   }
   
   int eleman2 = 0;
   int j = 0;
   while (palindrom[j]!='\0')
   {
        eleman2 = eleman2 + 1;
        j = j + 1;
   }

    for (int i = 0; i < eleman2; i++)
    {
        if (palindrom[i] == 32)
        {
            for (int j = i; j < eleman2; j++)
            {
                palindrom[j] = palindrom[j+1];
            }
        }
    }

   int k = 0;
   int eleman3 = 0;
   while (palindrom[k] != '\0')
   {
        eleman3 = eleman3 + 1;
        k = k + 1;
   }
   
   char kontrol[eleman3];
   for (int i=0;eleman3>=i; i++)
   {
        kontrol[i] = palindrom[(eleman3-1)-i];
   }

   int toplam = 0;
   for (int i = 0; i < eleman3; i++)
   {
        if (kontrol[i] == palindrom[i])
        {
            toplam = toplam + 1;
        }  
   }

   if (toplam == eleman3)
   {
        return 1;
   }
   else
   {
        return 0;
   }
}

#include <stdio.h>
#include <stdlib.h>

char seats[40];
char gender;
int seatNumber;

void printMenu() {
    printf("1. Sag Cam Kenari icin 1'e basiniz.\n");
    printf("2. Sag Koridor icin 2'ye basiniz.\n");
    printf("3. Sol Cam Kenari icin 3'e basiniz.\n");
    printf("4. Sol Koridor icin 4'e basiniz.\n");
    printf("5. Programdan cikmak icin 5'e basiniz.\n");
    printf("Seciminizi yapiniz: ");
}

void reserveSeat() {
    printf("Lutfen cinsiyetinizi giriniz (e/k): ");
    scanf(" %c", &gender);

    if (gender != 'e' && gender != 'k') {
        printf("Gecersiz cinsiyet! Rezervasyon yapilamadi.\n");
        return;
    }

    if ((gender == 'e' && seats[seatNumber - 1] == 'k') ||
        (gender == 'k' && seats[seatNumber - 1] == 'e')) {
        printf("Erkek ve kadin yolcular yan yana rezervasyon yapamazlar! Baska bir koltuk seciniz.\n");
        return;
    }

    if (seats[seatNumber - 1] != 'x') {
        printf("Bu koltuk dolu! Baska bir koltuk seciniz.\n");
        return;
    }

    seats[seatNumber - 1] = gender;

    printf("Rezervasyonunuz basariyla tamamlandi. Koltuk Numarasi: %d\n", seatNumber);
}

int main() {
    printf("Merhaba 222923022 Emirhan Çelik! Rezervasyon yapmak ister misiniz?\n");

    char response;
    printf("Evet ise 'e', Hayir ise 'h' tusuna basiniz: ");
    scanf(" %c", &response);

    if (response != 'e') {
        printf("Programdan cikiliyor...\n");
        return 0;
    }

    for (int i = 0; i < 40; i++) {
        seats[i] = 'x';
    }

    int menuSelection;

    while (1) {
        printMenu();
        scanf("%d", &menuSelection);

        switch (menuSelection) {
            case 1:
                seatNumber = 3;
                reserveSeat();
                break;
            case 2:
                seatNumber = 4;
                reserveSeat();
                break;
            case 3:
                seatNumber = 1;
                reserveSeat();
                break;
            case 4:
                seatNumber = 2;
                reserveSeat();
                break;
            case 5:
                printf("Programdan cikiyorsunuz...\n");
                return 0;
            default:
                printf("Gecersiz secim! Lutfen tekrar secim yapiniz.\n");
                break;
        }
    }
}

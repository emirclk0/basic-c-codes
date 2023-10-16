#include <stdio.h>


void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}


int partition(int arr[], int low, int high) {
    int pivot = arr[high];  
    int i = (low - 1);     

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int m;
    printf("dizi sayisini giriniz:");
    scanf("%d",&m);
    int arr[m];
    int num;
    for(int n=0 ; n<m; n++){
        printf("%d. sayiyi giriniz:",n+1);
        scanf("%d",&num);
        arr[n]=num;
    }

    quickSort(arr, 0, m - 1);

    printf("\nSıralanmış Hali: ");
    for (int i = 0; i < m; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

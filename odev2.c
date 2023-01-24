// Dosyadaki sayılardan asal olanları diğer dosyaya yazma ödevi

#include <stdio.h>
#include <stdlib.h>

int asal_kontrol(int sayi) {
    for (int i = 2;i < sayi;i++) {
        if (sayi % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    FILE* f1 = fopen("sayilar.txt", "r+");
    FILE* f2 = fopen("asallar.txt", "w+");
    if (!f1 || !f2) {
        printf("Dosyalar acilamadi.\n");
        exit(1);
    } else {
        while (!feof(f1)) {
            int sayi;
            fscanf(f1, "%d", &sayi);
            if (asal_kontrol(sayi) == 1) {
                fprintf(f2, "%d\n", sayi);
            }
        }
    }
}
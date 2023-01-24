// Dosyaya 100 tane random sayı yazma ödevi.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    FILE* dosya = fopen("sayilar.txt", "w+");
    if (dosya != NULL) {
        for (int i = 0;i < 100;i++) {
            int random = rand() % 100;
            fprintf(dosya, "%d\n", random);
        }
    } else {
        printf("Dosya acilamadi.\n");
        exit(1);
    }
}
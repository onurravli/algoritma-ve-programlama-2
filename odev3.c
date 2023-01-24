// Girilen 2 sayının OBEB'ini hesaplama ödevi

#include <stdio.h>

int obeb(int s1, int s2) {
    int temp;
	if(s1 == 0){
		return s2;
	} else if(s2 == 0){
		return s1;
	} else{
		return obeb(s2, s1%s2);
	}
}

int main() {
    int s1, s2;
    printf("1. ve 2. sayı: ");
    scanf("%d%d", &s1, &s2);
    printf("OBEB: %d\n", obeb(s1, s2));
}
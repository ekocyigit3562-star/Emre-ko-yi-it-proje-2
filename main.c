#include <stdio.h>

int main() {
///////////////////////////////////////////
    int a, b;
    printf("Sayilarinizi girin: ");
    scanf("%d %d", &a, &b);
    printf("Toplam: %d\n", a+b),printf("Fark: %d\n", a-b),printf("Carpim: %d\n", a*b),printf("Bolum: %d\n", (float)a/b);

///////////////////////////////////////////
    int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    if(sayi > 0)
        printf("Pozitif\n");
    else if(sayi < 0)
        printf("Negatif\n");
    else
        printf("Sifir\n");

///////////////////////////////////////////
    char harf;
    printf("Bir harf giriniz: ");
    scanf(" %c", &harf);
    if(harf=='a'||harf=='e'||harf=='i'||harf=='o'||harf=='u'||
       harf=='A'||harf=='E'||harf=='I'||harf=='O'||harf=='U')
        printf("Sesli harf\n");
    else
        printf("Sessiz harf\n");

///////////////////////////////////////////
    int n, i;
    printf("Bir sayi giriniz: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        if(i % 3 == 0) continue;
        if(i > 50) break;
        printf("%d\n", i);
    }

///////////////////////////////////////////
    int not, toplam=0, j;
    float ort=0;
    printf("Ogrencinin 4 notunu giriniz:\n");
    for(j=1; j<=4; j++) {
        scanf("%d", &not);
        toplam += not;
    }
    ort = toplam / 4.0;
    printf("Ortalama: %.2f -> ", ort);
    if(ort < 50)
        printf("Kaldi\n");
    else
        printf("Gecti\n");

///////////////////////////////////////////
    int x=0, y=0, z=0;
    printf("X Y Z yi sirayla secin: ");
    scanf("%d %d %d", &x, &y, &z);

    if(x<=y && y<=z)
        printf("Kucukten buyuge: %d %d %d\n", x, y, z);
    if(x<=z && z<=y)
        printf("Kucukten buyuge: %d %d %d\n", x, z, y);
    if(y<=x && x<=z)
        printf("Kucukten buyuge: %d %d %d\n", y, x, z);
    if(y<=z && z<=x)
        printf("Kucukten buyuge: %d %d %d\n", y, z, x);
    if(z<=x && x<=y)
        printf("Kucukten buyuge: %d %d %d\n", z, x, y);
    if(z<=y && y<=x)
        printf("Kucukten buyuge: %d %d %d\n", z, y, x);

    return 0;
}

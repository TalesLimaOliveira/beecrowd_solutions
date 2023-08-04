#include <stdio.h>

int main(void){
    int di, hi, mi, si, df, hf, mf, sf;

    scanf("Dia %d\n%d : %d : %d\n", &di, &hi, &mi, &si);
    scanf("Dia %d\n%d : %d : %d", &df, &hf, &mf, &sf);

    long dur = (df*86400 + hf*3600 + mf*60 + sf) - (di*86400 + hi*3600 + mi*60 + si);

    printf("%ld dia(s)\n", dur/86400);
    printf("%ld hora(s)\n", (dur%86400)/3600);
    printf("%ld minuto(s)\n", ((dur%86400)%3600)/60);
    printf("%ld segundo(s)\n", ((dur%86400)%3600)%60);

    return 0;
}
#include <stdio.h>

int suma(int *tab){
    return tab[0]+tab[1]+tab[2];
}

int main() {
    int tab[4][3];
    for(int i=0; i<10*10*10; i++){
        tab[0][0] = (i)%10; tab[0][1] = (i/10)%10; tab[0][2] = (i/100)%10;
        int sum = suma(tab[0]);
        for(int j=0; j<10*10*10; j++) {
            tab[1][0] = (j) % 10;
            tab[1][1] = (j / 10) % 10;
            tab[1][2] = (j / 100) % 10;
            for(int k=0; k<10*10*10; k++) {
                tab[2][0] = (k) % 10;
                tab[2][1] = (k / 10) % 10;
                tab[2][2] = (k / 100) % 10;
                for(int l=0; l<10*10*10; l++) {
                    tab[3][0] = (l) % 10;
                    tab[3][1] = (l / 10) % 10;
                    tab[3][2] = (l / 100) % 10;
                    if((tab[0][0] ^ sum % 3) == (suma(tab[1]) % 9)
                    && (tab[0][1] ^ sum % 3) == (suma(tab[2]) % 9)
                       && (tab[0][2] ^ sum % 3) == (suma(tab[3]) % 9))
                        printf("%d%d%d-%d%d%d%d%d%d%d%d%d\n",tab[0][0],tab[0][1],tab[0][2],tab[1][0],tab[1][1],tab[1][2],tab[2][0],tab[2][1],tab[2][2],tab[3][0],tab[3][1],tab[3][2] );

                }
            }
        }
    }
}

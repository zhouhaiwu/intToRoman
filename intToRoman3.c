#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 // 3999   MMMCMXCIX
char * intToRoman(int num){
    int sym[13] = {0};
    int div[13]        = {1000,  900, 500,  400, 100,   90,  50,   40,  10,    9,   5,    4,   1};
    char symCat[13][3] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int i;
    char *s = (char *)malloc(20 * sizeof(char));
    memset(s, 0, 20 * sizeof(char));

    for (i = 0; i < 13; ++i) {
        sym[i] = num / div[i];
        num = num % div[i];
    }

    for (i = 0; i < 13; ++i)  {
        while (sym[i]-- > 0) {
            strcat(s, symCat[i]);
        }
    }

    return s;
}

int main() {
    int num = 3999;
    char *RoMan1;
    RoMan1 = intToRoman(num);
    printf("LALA\n");
    printf("RoMan1:%s\n", RoMan1);
    return 0;
}
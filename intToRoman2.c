#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CHARS 16 

char * intToRoman(int num){
    char *ans = (char *)calloc(MAX_CHARS, sizeof(char));
    while (num > 0) {
        if (num >= 1000) {
            strcat(ans, "M");
            num -= 1000;
        } else if (num >= 900) {
            strcat(ans, "CM");
            num -= 900;
        } else if (num >= 500) {
            strcat(ans, "D");
            num -= 500;
        } else if (num >= 400) {
            strcat(ans, "CD");
            num -= 400;
        } else if (num >= 100) {
            strcat(ans, "C");
            num -= 100;
        } else if (num >= 90) {
            strcat(ans, "XC");
            num -= 90;
        } else if (num >= 50) {
            strcat(ans, "L");
            num -= 50;
        } else if (num >= 40) {
            strcat(ans, "XL");
            num -= 40;
        } else if (num >= 10) {
            strcat(ans, "X");
            num -= 10;
        } else if (num >= 9) {
            strcat(ans, "IX");
            num -= 9;
        } else if (num >= 5) {
            strcat(ans, "V");
            num -= 5;
        } else if (num >= 4) {
            strcat(ans, "IV");
            num -= 4;
        } else if (num >= 1) {
            strcat(ans, "I");
            num -= 1;
        }
    }
    return ans;
}


int main() {
    int num = 10;
    char *RoMan1;
    RoMan1 = intToRoman(num);
    printf("LALA\n");
    printf("RoMan1:%s\n", RoMan1);
    return 0;
}
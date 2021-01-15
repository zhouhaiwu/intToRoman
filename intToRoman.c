/*
I 可以放在 V (5) 和 X (10) 的左边，来表示 4 和 9。
X 可以放在 L (50) 和 C (100) 的左边，来表示 40 和 90。 
C 可以放在 D (500) 和 M (1000) 的左边，来表示 400 和 900。
*/

#include <stdio.h>
#include <stdlib.h>

char *intToRoman(int num) {
    int i = 0;
    int j = 0;
    char *RoMan = (char *)malloc(sizeof(char) * 20);
    //int num =    { 1 ,   4 ,  5 ,   9 ,   10,  40 ,   50,  90 ,   100,   400,   500,  900,    1000};
    //char roman = {'I', 'IV', 'V', 'IX',  'X', 'XL',  'L', 'XC',   'C',  'CD',   'D',  'CM',    'M'};
    if (num >= 1000) {
        for(i=0; i < num/1000; i++) {
            RoMan[i] = 'M';
        }
        num = num - (num/1000)*1000;
        printf("num:%d\n", num);
    }
    if (num >= 100 && num < 1000) {
        if (num/100 == 4) {
            //i++;
            RoMan[i] = 'C';
            i++;
            RoMan[i] = 'D';
            i++;
        }
        else if (num/100 == 1) {
            //i++;
            RoMan[i] = 'C';
            i++;
        }
        else if (num/100 == 9) {
            printf("AHAH\n");
            //i++;
            printf("i:%d\n", i);
            RoMan[i] = 'C';
            i++;
            RoMan[i] = 'M';
            i++;
        }
        else if ((num/100) == 5) {
            //i++;
            RoMan[i] = 'D';
            i++;
        }
        else if ((num/100) > 5 && (num/100) <9) {
            //i++;
            RoMan[i] = 'D';
            i++;
            for(j=0; j < num/100 - 5; j++) {
                //i++;
                RoMan[i] = 'C';
                i++;
            }
        }
        else if ((num/100) >= 1 && (num/100) < 4) {
            for(j=0; j < num/100; j++) {
                //i++;
                RoMan[i] = 'C';
                i++;
            }
        }
        num = num - (num/100)*100;
    }
    if (num < 100 && num >= 10) {
        if (num/10 == 4) {
            //i++;
            RoMan[i] = 'X';
            i++;
            RoMan[i] = 'L';
            i++;
        }
        else if (num/10 == 9) {
            printf("999\n");
            //i++;
            RoMan[i] = 'X';
            i++;
            RoMan[i] = 'C';
            i++;
        }
        else if ((num/10) == 5) {
            //i++;
            RoMan[i] = 'L';
            i++;
        }
        else if ((num/10) == 1) {
            //i++;
            RoMan[i] = 'X';
            i++;
        }
        else if ((num/10) > 5 && (num/10) <9) {
            //i++;
            RoMan[i] = 'L';
            i++;
            for(j=0; j < num/10 - 5; j++) {
                //i++;
                RoMan[i] = 'X';
                i++;
            }
        }
        else if ((num/10) >= 1 && (num/10) < 4) {
            for(j=0; j < num/10; j++) {
                //i++;
                RoMan[i] = 'X';
                i++;
            }
        }
        num = num - (num/10)*10;
        printf("num:%d\n", num);
    }
    if(num < 10 && num >= 1) {
        if (num == 4) {
            //i++;
            RoMan[i] = 'I';
            i++;
            RoMan[i] = 'V';
            i++;
        }
        else if (num == 9) {
            //i++;
            RoMan[i] = 'I';
            i++;
            RoMan[i] = 'X';
            i++;
        }
        else if (num == 5) {
            //i++;
            RoMan[i] = 'V';
            i++;
        }
        else if (num > 5 && num < 9) {
            //i++;
            RoMan[i] = 'V';
            i++;
            for(j=0; j < num - 5; j++) {
                //i++;
                RoMan[i] = 'I';
                i++;
            }
        }
        else if (num >= 1 && num < 4) {
            for(j=0; j < num; j++) {
                //i++;
                RoMan[i] = 'I';
                i++;
            }
        }
    }
    //i++;
    RoMan[i] = '\0';
    printf("HAHA\n");
    printf("%s\n", RoMan);
    return RoMan;
}

int main() {
    int num = 10;
    char *RoMan1;
    RoMan1 = intToRoman(num);
    printf("LALA\n");
    printf("RoMan1:%s\n", RoMan1);
    return 0;
}
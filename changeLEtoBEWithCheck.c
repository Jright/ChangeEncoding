//
// Created by jright on 2018/10/12.
//

#include <stdio.h>
#include "changeLEtoBEWithCheck.h"
/**
 * Change a UTF-16 little-endian to big-endian, check if the input bytes are even number. return 1 if the number of bytes are odd.
 * @param start
 * @param n
 * @return
 */
int changeLEtoBEWithCheck(const char *start, int n){
    int i;
    int count = 0;
    for(i = 0; i < n; i++){
        count++;
        printf(" %.4x", ((start[i] & 0xFF00) >> 8) |  ((start[i] & 0x00FF) << 8));
    }
    printf("\n");
    return count % 2;
}


int main(){
//    char c[4] = "okay";
//    changeLEtoBE(c, sizeof(c));

    char d[5] = "field";
    changeLEtoBEWithCheck(d, sizeof(d));
    return 0;
}
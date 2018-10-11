//
// Created by jright on 2018/10/12.
//
#include <stdio.h>
#include "changeLEtoBE.h"


/**
 * Change a UTF-16 little-endian to big-endian
 * @param start
 * @param n
 * @return
 */
int changeLEtoBE(const char *start, int n){
    int i;
    for(i = 0; i < n; i++){
        printf(" %.4x", ((start[i] & 0xFF00) >> 8) |  ((start[i] & 0x00FF) << 8));
//        printf(" %.4x", start[i]);
    }
    printf("\n");
    return 0;
}

//int main(){
//    char c[4] = "okay";
//    changeLEtoBE(c, sizeof(c));
//
//    return 0;
//}
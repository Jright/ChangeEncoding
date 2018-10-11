#include <stdio.h>
#include "changeLEtoBE.h"
#include "changeLEtoBEWithCheck.h"

int main(){
    char c[4] = "okay";
    changeLEtoBE(c, sizeof(c));

    char d[5] = "field";
    changeLEtoBEWithCheck(d, sizeof(d));
    return 0;
}
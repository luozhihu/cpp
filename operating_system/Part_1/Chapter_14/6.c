//
// Created by pjs on 2020/10/11.
//


#include "stdlib.h"
#include "stdio.h"

int main() {
    int *data = (int *) malloc(sizeof(int) * 100);
    data[0] = 1;
    printf("%d\n", data[0]);
    free(data);
    printf("%d\n", data[0]);
    printf("%d\n", data[1]);
    return 0;
}

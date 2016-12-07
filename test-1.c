//
// Created by zhaojunlike on 2016/12/7.
//

#include <pthread.h>
#include <semaphore.h>
//标准io
#include <stdio.h>
#include <time.h>

#deinfe LENGTH 1000000

void main() {
    time_t t1, t2;
    double D[LEN];
    int i;
    double sum = 0.0;
    t1 = clock();
    for (i = 0; i < LEN; i++) { sum += D[i]; }
    t2 = clock();
    printf("sum=%d\n", t2 - t1);
}
// Created by VoidEmpty on 2022/11/17.
#include <stdio.h>
#include <time.h>
#include <assert.h>
#include <stdlib.h>
#include "MakeNumber.h"

/*	函数功能：  	计算机生成一个随机数
   	函数返回值：	返回计算机生成的随机数
 */
int MakeNumber(int n) {
    int magic;
    srand(time(NULL));
    magic = rand() % n + 1;
    assert(magic >= 1 && magic <= n);
    return magic;
}
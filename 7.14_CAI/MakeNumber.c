// Created by VoidEmpty on 2022/11/17.
#include <stdio.h>
#include <time.h>
#include <assert.h>
#include <stdlib.h>
#include "MakeNumber.h"

/*	�������ܣ�  	���������һ�������
   	��������ֵ��	���ؼ�������ɵ������
 */
int MakeNumber(int n) {
    int magic;
    srand(time(NULL));
    magic = rand() % n + 1;
    assert(magic >= 1 && magic <= n);
    return magic;
}
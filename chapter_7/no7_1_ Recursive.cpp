//
//  no7_1_ Recursive.cpp
//  chapter_7
//
//  Created by Kelang-Tian on 2019/1/29.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
N 阶楼梯上楼问题:一次可以走两阶或一阶，问有多少种上楼方式。(要求 采用非递归)
输入包括一个整数 N,(1<=N<90)。

 */

/*
#include <stdio.h>
int f[100];
int main(){
    int n;
    f[1] = 1;
    f[2] = 2;
    for (int i=3; i<=100; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
    
    while (scanf("%d",&n)!=EOF) {
        printf("上楼梯方式有：%d\n",f[n]);
    }
    return 0;
}
*/

//
//  no4_6_prime.cpp
//  chapter_4
//
//  Created by Kelang-Tian on 2019/1/23.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
 输入一个整数 n(2<=n<=10000)，要求输出所有从 1 到这个整数之间(不包括 1 和这个整数)个位为 1 的素数，如果没有则输出-1。
 例入：100
 例出：11 31 41 61 71
 
 从 2 开始遍历 2 到 1000000 的所有整数，若当前整数没有因为它是某个小于 其的素数的倍数而被标记成非素数，则判定其为素数，并标记它所有
 的倍数为非 素数。然后继续遍历下一个数，直到遍历完 2 到 1000000 区间内所有的整数。此 时，所有没被标记成非素数的数字即为我们要求的素
 数。这种算法被我们称为素 数筛法。
*/
/*
#include <stdio.h>
int prime[10000];
int primesize = 0;
int mark[10001];
void init(){
    for (int i=0; i<10000; i++) mark[i] = false;
    for (int i = 2;i<=10000;i++){           //从2开始
        if(mark[i] == true) continue;
        prime[primesize++] = i;
        for(int j = i*i;j<=10000;j+=i){
            mark[j] = true;
        }
    }
}
int main(){
    init();
    int n;
    while (scanf("%d",&n)!=EOF) {
        bool isoutput = false;
        for (int i=0;i<primesize;i++) {
            if (prime[i] < n && prime[i] %10==1) {
                if (isoutput == false) {
                    isoutput = true;
                    printf("%d",prime[i]);
                }
                else {
                    printf(" %d",prime[i]);
                }
            }
        }
        if(isoutput == false) printf("-1\n");
        else printf("\n");
    }
    return 0;
}
*/

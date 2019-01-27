//
//  no4_7_Factorization_.cpp
//  chapter_4
//
//  Created by Kelang-Tian on 2019/1/23.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
 求正整数 N(N>1)的质因数的个数。
 相同的质因数需要重复计算。如 120=2*2*2*3*5，共有 5 个质因数。
 注意:1 不是 N 的质因数;若 N 为质数，N 是 N 的质因数。
 
 本例题意清晰，即对输入的某个整数分解素因数，并计算出每个素因数所对
 应的幂指数，即对给定整数 x，确定下式中
 x= p1^e1 *p2^e2 *...*pn^en
 p1、p2、... pn 与 e1e2...en 的取值。这样，我们即能得到最后的结果 为 e1e2...en 的和。
 首先我们按照如下思路来为整数分解素因数:我们利用上节内容中所讲的素 数筛法预先筛选出所有可能在题面所给定的数据范围内成为素因数的素数。并
 在 程序输入待处理数字 n 时，依次遍历所有小于 n 的素数，判断其是否为 n 的因数。 若确定某素数为 n 的因数，则通过试除确定其对应的幂指
 数。最后求出各个幂指 数的和即为所求。
 */
/*
#include <stdio.h>
int prime[100001];
bool mark[1000001];
int primesize = 0;
void init(){
    for (int i=0; i<=10000; i++) {
        mark[i] = false;
    }
    for (int i=2; i<=100000; i++) {
        if (mark[i] == true) continue;
        prime[primesize++] = i;
        if (i >= 1000) continue;
        for (int j = i*i; j<=100000; j+=i) {
            mark[j] = true;
        }
    }
}
int main(){
    init();
    int n;
    while (scanf("%d",&n)!=EOF) {
        int ansprime[30];
        int anssize = 0;
        int ansNum[30];
        for (int i=0; i<primesize; i++) {
            if (n%prime[i]==0) {
                ansprime[anssize] = prime[i];
                ansNum[anssize]=0;          //幂指数初始化
                while (n%prime[i] == 0) {
                    ansNum[anssize]++;
                    n /= prime[i];
                }
                anssize++;
                if(n == 1) break;
            }
        }
        if (n != 1) { //若测试完2到100000内所有素因数,n仍未被分解至1,则剩余的因数 一定是n一个大于100000的素因数
            ansprime[anssize] = n;
            ansNum[anssize++] = 1;
        }
        int ans = 0;
        for (int i = 0; i < anssize; i++) {
            ans += ansNum[i];
        }
        printf("%d\n",ans);
    }
    return 0;
}
*/

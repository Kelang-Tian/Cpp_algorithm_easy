//
//  no4_8_mathproblem.cpp
//  chapter_4
//
//  Created by Kelang-Tian on 2019/1/23.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
 给定 n，a 求最大的 k，使 n!可以被 a^k 整除但不能被 a^(k+1)整除。
 两个整数 n(2<=n<=1000)，a(2<=a<=1000)
 6 10
 1
 
 n!和 a 的 k 次可能数值非常巨大，而不能被 int(甚至 long long)保存，也就不能直接用求余数操作判断它们 是否存在整除关系。
 采用素数分解的方法
 */

/*
#include <stdio.h>
#include <string.h>
bool mark[1010];
int prime[1010];
int primesize = 0;
void init(){
    for(int i=0;i<1010;i++) mark[i]=false;
    for (int i=2;i<=1000; i++) {
        if (mark[i]) continue;
        prime[primesize++] = i;
        for (int j = i*i; j<=1000; j+=i) {
            mark[j] = true;
        }
    }
}           //素数筛选完毕
int cnt[1010];      //cnt[i]用来表示 prime[i]保存的素数在n!中的系数
int cnt2[1010];     // cnt2[i]用来表示 prime[i]保存的素数在a中的系数
int main(){
    int n,a;
    init();
    while (scanf("%d %d",&n,&a)==2) {
        for (int i=0; i<primesize; i++)
            cnt[i] = cnt2[i] = 0;
        //对n!进行分解
        for (int i = 0; i<primesize; i++) {
            int t = n;
            while (t) {
                cnt[i] += t/prime[i];
                t /= prime[i];
            }
        }
        int ans = 1000000000;
        ////对a进行分解
        for (int i =0; i< primesize; i++) {
            while (a%prime[i] == 0) {
                cnt2[i] ++;
                a/=prime[i];
            }
            if (cnt2[i] == 0) continue;         //这里跳过的原因是防止cnt2[i]=0 ，在下一句出现在分母位置
            if(cnt[i]/cnt2[i] <ans)
                ans = cnt[i]/cnt2[i];
        }
        printf("%d\n",ans);
    }
    return 0;
}
*/

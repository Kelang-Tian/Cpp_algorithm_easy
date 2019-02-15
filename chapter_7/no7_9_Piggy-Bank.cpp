//
//  no7_9_Piggy-Bank.cpp
//  chapter_7
//
//  Created by Kelang-Tian on 2019/2/8.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
 题目大意:有一个储蓄罐，告知其空时的重量和当前重量，并给定一些
 钱币 的价值和相应的重量，求储蓄罐中最少有多少现金。
 
 由于每个钱币的数量都可以有任意多，所以该问题为完全背包问题。但
 是在 该例中，完全背包有两处变化，首先，要求的不再是最大值，而
 变为了最小值， 这就要求我们在状态转移时，在 dp[j]和 dp[j-
 list[i].w]+list[i].v 中选择较小的转移 值;其次，该问题要求
 钱币和空储蓄罐的重量恰好达到总重量，即在背包问题中 表现为背包
 恰好装满，在前文中我们已经讨论了 0-1 背包的此类变化，我们只需
 变化 dp[j]的初始值即可。

 样例输入：
 3
 10 110
 2
 1 1
 30 50
 10 110
 2
 1 1
 50 30
 1 6
 2
 10 3
 20 4
 样例输出：
 The minimum amount of money in the piggy-bank is 60.
 The minimum amount of money in the piggy-bank
 is 100.
 This is impossible.
 
 */
/*
#include <stdio.h>
#define INF 0x7fffffff
int min(int a,int b) {
    return a>b?b:a;
}
struct E {
    int w;
    int v;
}list[501];
int dp[10001];          //状态
int main(){
    int T;
    scanf("%d",&T);
    while (T--) {
        int s,tmp;
        scanf("%d %d",&tmp,&s);
        s -= tmp;
        int n;
        scanf("%d",&n);
        for (int i=1; i<=n ; i++) {
            scanf("%d %d",&list[i].v,&list[i].w);
        }
        for (int i=0; i<=s ; i++) {
            dp[i] = INF;
        }
        dp[0] = 0;
        for (int i=1; i<=n; i++) {
            for (int j=list[i].w; j<=s; j++) {
                if (dp[j-list[i].w] != INF) {
                    dp[j] = min(dp[j],dp[j-list[i].w]+list[i].v);
                }
            }
        }
        if (dp[s]!=INF ) {
            printf("The minimum amount of money is %d .\n",dp[s]);
        }else{
            puts("This is impossible.");
        }
    }
    return 0;
}
*/

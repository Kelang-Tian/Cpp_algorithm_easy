//
//  no7_7_knapsack.cpp
//  chapter_7
//
//  Created by Kelang-Tian on 2019/2/8.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
 输入的第一行有两个整数 T(1 <= T <= 1000)和 M(1 <= M <=
 100)，T 代 表总共能够用来采
 药的时间，M 代表山洞里的草药的数目。
 接下来的 M 行每行包括两个在 1 到 100 之间(包括 1 和 100)的的整
 数， 分别表示采摘某株草
 药的时间和这株草药的价值。

 样例输入:
 70 3
 71 100
 69 1
 1  2
 
 样例输出：
 3
 
 
 dp[i][j]表示在总体积不超过 j 的情况下，前 i 个物品所能达到的 最大价值。
 0-1 背包的状态转移方程为:
 dp[i][j] = max{dp[i−1][j−w]+v,dp[i−1][j]};
*/

/*
#include <stdio.h>
#define INF 0x7fffffff
int max(int a,int b){
    return a>b?a:b;
}

struct E{
    int w;
    int v;      //体积和价值
}list[101];
int dp[101][101];
int main(){
    int s,n;        //总时间和物品的种类
    while (scanf("%d %d",&s,&n)!=EOF) {
        for (int i=1; i<=n ; i++) {
            scanf("%d %d",&list[i].w,&list[i].v);
        }
        for (int i = 0; i<=s; i++) {
            dp[0][i] = 0;
        }
        for (int i=1; i<=n ; i++) {
            for (int j=s; j>=list[i].w; j--) {
                dp[i][j] = max(dp[i-1][j],dp[i-1][j-list[i].w]+list[i].v);
            }
            for (int j=list[i].w-1; j>=0; j--) {
                dp[i][j] = dp[i-1][j];          //J不够减时
            }
        }
        printf("%d\n",dp[n][s]);
    }
    return 0;
}
*/
/*
 观察状态转移的特点，我们发现 dp[i][j]的转移仅与 dp[i-1][j-list[i].w]和 dp[i-1][j]
 有关，即仅与二维数组中本行的上一行有关。根据这个特点，我们可以 将原本的二维数组优化为一维，
 并用如下方式完成状态转移:
 dp[ j] = max{dp[ j − list[i].w] + list[i].v, dp[ j]};
*/

//
//  no7_5_DP.cpp
//  chapter_7
//
//  Created by Kelang-Tian on 2019/2/2.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
 搬寝室是很累的,xhd 深有体会.时间追述 2006 年 7 月 9 号,那天 xhd 迫于无奈 要从 27 号楼搬到 3 号楼,因为 10
 号要封楼了.看着寝室里的 n 件物品,xhd 开始发 呆,因为 n 是一个小于 2000 的整数,实在是太多了,于是 xhd 决定随便
 搬 2*k 件过 去就行了.但还是会很累,因为 2*k 也不小是一个不大于 n 的整数.幸运的是 xhd 根 据多年的搬东西的经验
 发现每搬一次的疲劳度是和左右手的物品的重量差的平 方成正比(这里补充一句,xhd 每次搬两件东西,左手一件右手一件).例
 如 xhd 左手 拿重量为 3 的物品,右手拿重量为 6 的物品,则他搬完这次的疲劳度为(6-3)^2 = 9. 现在可怜的 xhd 希
 望知道搬完这 2*k 件物品后的最佳状态是怎样的(也就是最低 的疲劳度),请告诉他吧.

  每组输入数据有两行,第一行有两个数 n,k(2<=2*k<=n<2000).第二行有 n 个 整数分别表示 n 件物品的重量(重量是一
 个小于 2^15 的正整数).
 对应每组输入数据,输出数据只有一个表示他的最少的疲劳度,每个一行.
 
 input:
 2 1
 1 3
 output:
 4
 
 动态规划的关键是找到各个状态中间的联系
 题目思路：
 在选定的最优方案 中，任选两对组合，其配对情况必为重量最大物品和重量次大物品为一对、重量 最小物品和重量次小物品为
 一对，不存在交叉组合的情况。同时，当个两个物品 的重量差越小时，其差的平方也越小，所以每一对组合的两个物品重量，必
 为原 物品中重量相邻的两个物品。
设 dp[i][j]为在前 j 件物品中选择 i 对物品时最小的疲劳度。
dp[i][j] = min{dp[i][j−1],dp[i−1][j−2]+(list[j]−list[j−1])^2}
 
 状态数量为 k*n，转移时间复杂度为 O(1)，综合时间复杂度为 O(k*n)，参考题面中给定的输入取值范围，该复杂度在 我们
 可以接受的范围内。
*/
/*
#include <stdio.h>
#include <algorithm>
using namespace std;
#define INF 0x7fffffff
int list[2000];             //保存物品重量
int dp[1000][2000];         //状态的表示，前j个物品中挑选i对物品的疲劳度
int min(int a,int b){
    return a<b?a:b;
}
    
    
    
int main(){
    int n,k;
    while (scanf("%d %d",&n,&k)!=EOF) {
        for (int i=1; i<=n; i++) {
            scanf("%d",&list[i]);
        }
        sort(list+1,list+1+n);
        for(int i=1;i<=n;i++)
            dp[0][i] = 0;
        for(int i=1; i<=k; i++) {
            for (int j=2*i; j<=n; j++) {
                if (j>2*i)
                    dp[i][j] = dp[i][j-1];
                else
                    dp[i][j] = INF;
                //if(dp[i][j]>dp[i-1][j-2]+(list[j]-list[j-1])*(list[j]-list[j-1]))
                    dp[i][j] =dp[i-1][j-2]+(list[j]-list[j-1])*(list[j]-list[j-1]);
                
                dp[i][j]=min(dp[i][j-1],dp[i-1][j-2]+(list[j]-list[j-1])*(list[j]-list[j-1]));
            }
        }
        printf("%d\n",dp[k][n]);
    }
    return 0;
}
*/

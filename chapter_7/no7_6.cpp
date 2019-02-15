//
//  no7_6.cpp
//  chapter_7
//
//  Created by Kelang-Tian on 2019/2/7.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
 That is tino want to carry some oranges with "Carrying pole", and he must make two side of
 the Carrying pole are the same weight. Each orange have its' weight. So greedy tino want to
 know the maximum weight he can carry.

 The first line of input contains a number t, which means there are t cases of the test
 data.for each test case, the first line contain a number n, indicate the number of
 oranges.the second line contains n numbers, Wi, indicate the weight of each orange.n is
 between 1 and 100, inclusive. Wi is between 0 and 2000, inclusive. the sum of Wi is equal
 or less than 2000.

 1 5
 1 2 3 4 5
 
 Case1:7
 
 
 设状态 dp[i][j]表示前 i 个柑橘被选择后(每个柑橘可能放到第一堆
 或者第二堆)后，第一堆比第二堆重 j 时(当 j 为负时表示第二堆比第一堆重)， 两堆的最大总重量和。
 */
 
/*
#include <stdio.h>
#define INF 0x7fffffff
#define OFFSET 2000
int list[101];
int dp[101][4001];          //状态设置dp[i][j]表示前i个柑后，第一堆比第二堆重 j 时(当 j 为负时表示第二堆比第一堆重)， 两堆的最大总重量和。

int main(){
    int T;          //输入组数
    int cas = 0;
    scanf("%d",&T);     //输入
    while (T--!=0){
        int n;
        scanf("%d",&n);
        bool havezero = false;
        int cnt =0;     //记录重量为0的柑橘的数量
        for (int i=1; i<=n ; i++) {
            scanf("%d",&list[++cnt]);
            if (list[cnt] == 0) {
                cnt--;
                havezero = true;
            }
        }
        n = cnt;
        for (int i=-2000; i<=2000;i++) {
            dp[0][i+OFFSET] = -INF;
        }
        dp[0][0+OFFSET] = 0;
        for (int i=1; i<=n; i++) {
            for (int j=-2000; j<=2000; j++) {
                int tmp1 = -INF;
                int tmp2 = -INF;
                if (j+list[i] <= 2000 && dp[i-1][j+list[i]+OFFSET]!=-INF) {
                    tmp1 = dp[i-1][j+list[i]+OFFSET]+list[i];
                }
                if(j-list[i] >= -2000 && dp[i-1][j-list[i]+OFFSET]!=-INF){
                    tmp2 = dp[i-1][j-list[i]+OFFSET]+list[i];
                }
                if (tmp2>tmp1) {
                    tmp1 = tmp2;
                }
                if (tmp1<dp[i-1][j+OFFSET]) {
                    tmp1 = dp[i-1][j+OFFSET];
                }
                dp[i][j+OFFSET] = tmp1;
            }
        }
        printf("Case %d:",++cas);
        if (dp[n][0+OFFSET]==0) {
            puts(havezero == true?"0":"-1");
        }else{
            printf("%d\n",dp[n][0+OFFSET]/2);
        }
    }
    return 0;
}
*/

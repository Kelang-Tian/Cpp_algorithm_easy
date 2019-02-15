//
//  no7_4_LCS.cpp
//  chapter_7
//
//  Created by Kelang-Tian on 2019/1/31.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
 Find a longest common subsequence of two strings.
 First and second line of each input case contain two strings of lowercase character a...z.
 There are no spaces before, inside or after the strings. Lengths of strings do not exceed
 100.

 abcd
 cxbydz
 
 2
 
 
 dp[i][j]表示 S1 中前 i 个字符与 S2 中前 j 个字符分别组成的两个前缀字符串的最 长公共子串长度。
 dp[x][y] = max{dp[x-1][y],dp[x][y-1]}
 
 */

/*
#include <stdio.h>
#include <string.h>
int dp[100][100];
int max(int a,int b){
    return a>b?a:b;
}
int main(){
    char S1[100],S2[100];
    while (scanf("%s %s",S1,S2)!=EOF){
        int L1 = int(strlen(S1));
        int L2 = int(strlen(S2));
        for(int i=0; i<=L1 ; i++) dp[i][0] = 0;
        for(int j=0; j<=L2 ; j++) dp[0][j] = 0;
        for(int i=1; i<=L1 ; i++) {
            for (int j=1; j<=L2; j++) {
                if(S1[i-1] != S2[j-1])
                    dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
                else
                    dp[i][j] = dp[i-1][j-1] + 1;
            }
        }
        printf("%d\n",dp[L1][L2]);
    }
    return 0;
}
*/

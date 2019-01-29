//
//  no5_5_Floyd.cpp
//  chapter_5
//
//  Created by Kelang-Tian on 2019/1/26.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
 输入包括多组数据。每组数据第一行是两个整数 N、M(N<=100，M<=10000)， N 表示成都的大街上有几个路口，标号为 1 的路口是商店所在地，标
 号为 N 的 路口是赛场所在地，M 则表示在成都有几条路。N=M=0 表示输入结束。接下来 M 行，每行包括 3 个整数 A，B，C(1<=A,B<=N,
 1<=C<=1000),表示在路口 A 与路口 B 之间有一条路，我们的工作人员需要 C 分钟的时间走过这条路。输入 保证至少存在 1 条商店到赛场的路
 线。
 当输入为两个 0 时，输入结束。
 对于每组输入，输出一行，表示工作人员从商店走到赛场的最短时间。
 
 样例输入:
 2 1
 1 2 3
 3 3
 1 2 5
 2 3 5
 3 1 2
 0 0
 样例输出:
 3
 2
 */
/*
#include <stdio.h>
int ans[101][101];
int main(){
    int n,m;
    while (scanf("%d %d",&n,&m)!=EOF) {
        if (n ==0 && m==0) break;
        for (int i=1; i<=n; i++) {
            for (int j = 1; j<=n; j++) {
                ans[i][j] = -1;
            }
            ans[i][i] = 0;
        }
        while (m--!=0) {
            int a,b,c;
            scanf("%d %d %d",&a,&b,&c);
            ans[a][b] = ans[b][a] = c;
        }
        for (int k=1; k<=n; k++) {
            for (int i = 1; i<=n; i++) {
                for (int j = 1; j<=n; j++) {
                    if (ans[i][k] == -1 || ans[k][j] == -1) continue;
                    if (ans[i][j] == -1 || ans[i][k] + ans[k][j] < ans[i][j]) {
                        ans[i][j] = ans[i][k] + ans[k][j];
                    }
                }
            }
        }
        printf("%d\n",ans[1][n]);
    }
    return 0;
}
*/

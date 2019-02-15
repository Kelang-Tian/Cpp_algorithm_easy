//
//  no7_10_dp.cpp
//  chapter_7
//
//  Created by Kelang-Tian on 2019/2/9.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
 输入数据首先包含一个正整数 C，表示有 C 组测试用例，每组测试用例的第
 一行是两个整数 n 和 m(1<=n<=100, 1<=m<=100),分别表示经费的金额
 和大米的 种类，然后是 m 行数据，每行包含 3 个数 p，h 和
 c(1<=p<=20,1<=h<=200,1<=c<=20)，分别表示每袋的价格、每袋的重
 量以及对应 种类大米的袋数。

 对于每组测试数据，请输出能够购买大米的最多重量，你可以假设经费买不
 光所有的大米，并且经费你可以不用完。每个实例的输出占一行。

 input:
 1
 8 2
 2 100 4
 4 100 2
 
 output:
 400
 
 */

/*
#include <stdio.h>
struct E{
    int w;
    int v;
}list[2000];
int dp[101];
int max(int a,int b){
    return a>b?a:b;
}
int main(){
    int T;
    scanf("%d",&T);
    while (T--) {
        int s,n;
        scanf("%d %d",&s,&n);
        int cnt=0;
        for (int i=1; i<=n; i++) {
            int v,w,k;
            scanf("%d %d %d",&w,&v,&k);
            int c=1;
            while (k-c>0) {
                k -= c;
                list[++cnt].w = c*w;
                list[cnt].v = c*v;
                c *= 2;
            }
            list[++cnt].w = w*k;
            list[cnt].v = v*k;
        }
        for (int i=1; i<=s; i++) {
            dp[i] = 0;
        }
        for (int i=1; i<=cnt; i++) {
            for (int j=s; j>=list[i].w; j--) {
                dp[j] = max(dp[j],dp[j-list[i].w]+list[i].v);
            }
        }
        printf("%d\n",dp[s]);
    }
    return 0;
}
*/
/*
#include <stdio.h>
using namespace std;
bool mark[10001];
int prime[10001];
int primesize = 0;
void init(){
    for(int i = 0; i < 10001; i++)
    {
        mark[i] = false;
    }

for(int i = 2;i<10001;i++){
    if(mark[i]==true) continue;
    prime[primesize++] = i;
    for(int j = i*i; j < 10001; j+=i)
    {
        mark[j] = true;
    }
}
}

int main(){
    init();
    int n,m;
    scanf("%d %d",&m,&n);
    int count = 0;
    for(int i = m; i <=n; i++)
    {
        count++;
        printf("%d ",prime[i]);
        if (count == 9) {
            count = 0;
            printf("\n");
        }
    }
    return 0;
}
*/

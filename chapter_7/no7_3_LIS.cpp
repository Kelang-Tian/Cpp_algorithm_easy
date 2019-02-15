//
//  no7_3_LIS.cpp
//  chapter_7
//
//  Created by Kelang-Tian on 2019/1/30.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//

/*
F[1]=1;
F[i]=max{1,F[j]+1|aj>=ai &&j<i};
 
 某国为了防御敌国的导弹袭击，开发出一种导弹拦截系统。但是这种导弹拦
 截系统有一个缺陷:虽然它的第一发炮弹能够到达任意的高度，但是以后每一发
 炮弹都不能高于前一发的高度。某天，雷达捕捉到敌国的导弹来袭，并观测到导
 弹依次飞来的高度，请计算这套系统最多能拦截多少导弹。拦截来袭导弹时，必
 须按来袭导弹袭击的时间顺序，不允许先拦截后面的导弹，再拦截前面的导弹。
 
 每组输入有两行，
 第一行，输入雷达捕捉到的敌国导弹的数量 k(k<=25)，
 第二行，输入 k 个正整数，表示 k 枚导弹的高度，按来袭导弹的袭击时间顺
 序给出，以空格分隔。
 
 8
 300 207 155 300 299 170 158 65
 
 6
 
 
 */

/*
#include <stdio.h>
int max(int a,int b){
    return a>b?a:b;
}
int list[26];           //保存各个导弹高度
int dp[26];             //保存最大子长度
int main(){
    int n;
    while (scanf("%d",&n)!=EOF) {
        for (int i=0; i<n ; i++) {
            scanf("%d",&list[i]);
        }
        for (int i = 1; i<=n ; i++) {
            int tmax = 1;
            for (int j=1; j<i ; j++) {
                if(list[j] >= list[i])
                {
                    tmax = max(tmax,dp[j]+1);
                }
            }
            dp[i] = tmax;
        }
    int ans = 1;
    for (int i= 1; i<=n ; i++) {
        ans = max(ans,dp[i]);
    }
    printf("%d\n",ans);
    }
    return 0;
}
*/

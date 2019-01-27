//
//  no4_2_ conversion.cpp
//  chapter_4
//
//  Created by Kelang-Tian on 2019/1/22.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
 输入两个不超过整型定义的非负 10 进制整数 A 和 B(<=231-1)，输出 A+B 的 m
(1 < m <10)进制数。
 
样例输入：
 8 1300 48
 2 1 7
 0
样例输出
2504
1000
*/
 /*
#include <stdio.h>
int main(){
    long long a,b;      //long long 的范围-2^63~2^63-1
    int m;
    while (scanf("%d",&m)!=EOF) {
        if(m == 0) break;
        scanf("%lld %lld",&a, &b);
        a=a+b;
        int ans[50],size = 0;
        do{             //使用do形式，先执行一次，a=0也有结果
            ans[size++] = a%m;
            a/=m;
        }while(a!=0);
        for (int i=size-1; i>=0; i--) {
            printf("%d",ans[i]);
        }
        printf("\n");
    }
    return 0;
}
*/

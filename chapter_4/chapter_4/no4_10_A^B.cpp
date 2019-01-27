//
//  no4_10_A^B.cpp
//  chapter_4
//
//  Created by Kelang-Tian on 2019/1/24.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
 求 A^B 的最后三位数表示的整数。说明:A^B 的含义是“A 的 B 次方”
 输入数据包含多个测试实例，每个实例占一行，由两个正整数 A 和 B 组成 (1<=A,B<=10000)，如果 A=0, B=0，则表示输入数据的结束，不做
 处理。
 
 input:
 23
 12 6
 6789 10000
 0 0
 
 output:
 8 984 1
 
 想法：对于指数B进行分解 相当于将B转化成二进制表示
 */
/*
#include <stdio.h>
int main(){
    int a,b;
    while (scanf("%d %d",&a,&b)!=EOF) {
        if (a == b && a == 0) break;
        int ans = 1;
        //对b进行二进制转换
        while (b!=0) {
            if (b%2==1) {
                ans *= a;
                ans%=1000;
            }
            b/=2;
            a*=a;       //因为这里是二进制指数的变化 所以底数每次平方
            a%=1000;
        }
        printf("%d\n",ans);
    }
    return 0;
}
*/

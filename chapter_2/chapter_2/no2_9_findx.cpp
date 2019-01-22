//
//  no2_9_findx.cpp
//  chapter_2
//
//  Created by Kelang-Tian on 2019/1/20.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/* 输入一个数 n，然后输入 n 个数值各不相同，再输入一个值 x，输出这个值 在这个数组中的下标(从 0 开始，若不在数组中则输出-1)。

测试数据有多组，输入 n(1<=n<=200)，接着输入 n 个数，然后输入 x。
2
13
0
输出： -1
*/
/*
#include <stdio.h>
int main(){
    int n;
    int buf[201];
    while (scanf("%d",&n)!=EOF) {
        printf("n:%d",n);
        for (int i = 0; i< n; i++) {
            scanf("%d",&buf[i]);
        }
        int x;
        int ans = -1;
        scanf("%d",&x);
        for (int k=0; k<n; k++) {
            if (x == buf[k]) {
                ans = k;
                break;
            }
        }
        printf("%d\n",ans);
        
    }
    return 0;
}
*/

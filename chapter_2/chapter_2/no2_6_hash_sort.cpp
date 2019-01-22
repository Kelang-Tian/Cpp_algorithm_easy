//
//  no2_6_hash_sort.cpp
//  chapter_2
//
//  Created by Kelang-Tian on 2019/1/19.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
 hash问题 空间换时间
  每组测试数据有两行，第一行有两个数 n,m(0<n,m<1000000)，第二行包含 n 个各不相同，且都处于区间[-500000,500000]的整数。
 53
 3 -35 92 213 -644

 213 92 3
*/
/*
#include <stdio.h>
#define OFFSET 500000

int Hash[1000001];
int main(){
    int n,m;
    while (scanf("%d%d\n",&n,&m)!=EOF) {
        //printf("n%d,m%d:",n,m);
        for (int i = -500000;i <= 500000;i ++) {
            Hash[i + OFFSET] = 0;
        }
        for (int i=0; i<n; i++) {
            int x;
            scanf("%d\n",&x);
            Hash[x+OFFSET] = 1;
        }
        for (int i = 500000;i >= -500000;i --) { //输出前m个数
            if (Hash[i + OFFSET] == 1) { //若该数字在输入中出现
                printf("%d",i); //输出该数字
                m --; //输出一个数字后,m减一,直至m变为0
                if (m != 0) printf(" "); //注意格式,若m个数未被输出完毕,在输出的数字后紧跟一个空格
                else {
                    printf("\n"); //若m个数字已经被输出完毕,则在输出的数字后面紧跟一个换行,并跳出遍历循环
                    break;
                }
            }
        }
    }
    return 0;
}
*/

//
//  no6_1_ enumerate.cpp
//  chapter_6
//
//  Created by Kelang-Tian on 2019/1/27.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
  用小于等于 n 元去买 100 只鸡，大鸡 5 元/只，小鸡 3 元/只,还有 1/3 元每只 的一种小鸡，
 分别记为 x 只,y 只,z 只。编程求解 x,y,z所有可能解。
 
 input:
 40
 
 output:
 x=0,y=0,z=100
 x=0,y=1,z=99
 x=0,y=2,z=98
 x=1,y=0,z=99
 
 */

/*
#include <stdio.h>
int main(){
    int n;
    while (scanf("%d",&n)!=EOF) {
        for (int x = 0; x <=100; x++) {
            for (int y = 0; y<=100-x ; y++) {
                int z = 100 - x - y;
                if (x*5*3 + y*3*3 + z <= n*3) {
                    printf("x=%d,y=%d,z=%d\n",x,y,z);
                }
            }
        }
    }
    return 0;
}
*/

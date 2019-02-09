//
//  no6_4_recursion.cpp
//  chapter_6
//
//  Created by Kelang-Tian on 2019/1/27.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
 约 19 世纪末，在欧州的商店中出售一种智力玩具，在一块铜板上有三根杆，
 最左边的杆上自上而下、由小到大顺序串着由 64 个圆盘构成的塔。目
 的是将最 左边杆上的盘全部移到右边的杆上，条件是一次只能移动一个盘，
 且不允许大盘 放在小盘的上面。现在我们改变游戏的玩法，不允许直接从最
 左(右)边移到最右 (左)边(每次移动一定是移到中间杆或从中间移出)，也
 不允许大盘放到下盘的上 面。Daisy 已经做过原来的汉诺塔问题和汉诺塔
 II，但碰到这个问题时，她想了 很久都不能解决，现在请你帮助她。现在有
 N 个圆盘，她至少多少次移动才能 把这些圆盘从最左边移到最右边?

对于每组数据，输出移动最小的次数。
 
 input:
 1
 3
 12
 output:
 2
 26
 531440
 
*/
/*

#include <stdio.h>
#include <string.h>
long long F(int num){
    if (num == 1) {
        return 2;
    } else {
        return 3*F(num-1)+2;
    }
}
int main(){
    int n;
    while (scanf("%d",&n)!=EOF) {
        printf("%lld\n",F(n));
    }
    return 0;
}
*/

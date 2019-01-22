//
//  no2_7_ composing.cpp
//  chapter_2
//
//  Created by Kelang-Tian on 2019/1/20.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
 输入一个高度 h，输出一个高为 h，上底边为 h 的梯形。
 h=4:
       ****
     ******
   ********
 **********
*/

/*
#include <stdio.h>
int main(){
    int h;
    while (scanf("%d",&h)!=EOF) {
        int max = h+2*(h-1);
        for (int i = 1;i <= h;i ++) { //依次输出每行信息
            for (int j = 1;j <= max;j ++) { //依次输出每行当中的空格或星号 if(j<maxLine-h-(i-1)*2+1) //输出空格
                if(j<max-h-(i-1)*2+1) //输出空格
                    printf(" ");
                else //输出星号
                    printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
*/

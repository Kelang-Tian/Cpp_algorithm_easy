//
//  no2_8.cpp
//  chapter_2
//
//  Created by Kelang-Tian on 2019/1/20.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
 输入是一个个的三元组，分别是，外筐尺寸 n(n 为满足 0<n<80 的奇整数)， 中心花色字符，外筐花色字符，后二者都为 ASCII 可见字符;
 11 B A
 5  @ W

  @@@
 @WWW@
 @W@W@
 @WWW@
  @@@
*/
/*
#include <stdio.h>
#include <string.h>

int main(){
    int n;
    char a,b;
    int output[82][82];
    bool firstcase = true;
    while (scanf("%d %c %c",&n,&a,&b)== 3) {
        if(firstcase == true){
            firstcase = false;
        }
        else printf("\n");
        for (int i=1 ,j=1; i<=n; i+=2,j++) {
            int x = n/2 +1;
            int y = x;
            x -= j-1;
            y -= j-1;
            char c = (j%2==1) ? a:b;
            for (int k = 1;k <= i; k++) {       //左上右下边的标记
                output[x+k-1][y] = c;
                output[x][y+k-1] = c;
                output[x+i-1][y+k-1] = c;
                output[x+k-1][y+i-1] = c;
            }
        }
        if (n!=1) {
            output[1][n] = ' ';
            output[1][1] = ' ';
            output[n][1] = ' ';
            output[n][n] = ' ';
        }
        for (int i = 1;i <= n;i ++) {
            for (int j = 1;j <= n;j ++) {
                printf("%c",output[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
*/

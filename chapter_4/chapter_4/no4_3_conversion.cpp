//
//  no4_3_conversion.cpp
//  chapter_4
//
//  Created by Kelang-Tian on 2019/1/22.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
求任意两个不同进制非负整数的转换(2 进制~16 进制)，所给整数在 long 所能表达的范
围之内。不同进制的表示符号为(0，1，...，9，a，b，...，f)或者(0，1，...，9，
A，B，...，F)。
 

 输入：
 输入只有一行，包含三个整数 a，n，b。a 表示其后的 n 是 a 进制整数，b 表示欲将
a 进制整数 n 转换成 b 进制整数。a，b 是十进制整数，2 =< a，b <= 16。

 输出：
 可能有多组测试数据，对于每组数据，输出包含一行，该行有一个整数为转 换后的 b 进
制数。输出时字母符号全部用大写表示，即(0，1，...，9，A，B，...，F)。
 
 入：15 Aab3 7
 出：210306
 */

//首先 将a进制转换为十进制，再将得到的十进制数转换为b进制。
/*
#include <stdio.h>
#include <string.h>
int main(){
    int a,b;
    char str[40];
    while (scanf("%d%s%d",&a,str,&b)!=EOF) {
        int tmp = 0, length = int(strlen(str)),c=1;      //c是权重
        //printf("1111111\n");
        for (int i = length-1; i>=0; i--) {
            int x;
            if (str[i] >= '0' && str[i] <= '9') {
                x = str[i] - '0';
            }
            else if(str[i] >= 'a' && str[i] <= 'z'){
                x = str[i] - 'a' +10;
            }
            else {
                x = str[i] - 'A'+ 10;
            }
            tmp += x*c;
            c *= a;
        }
        char ans[40];
        int size = 0;
        
        //printf("xxxxxx%d\n",tmp);
        do{
            int x = tmp % b;
            ans[size++] = (x < 10)? x+'0' : x - 10 + 'A';       //注意，这里+’0‘将x转成字符
            tmp /= b;
        }while(tmp);
        for (int i = size-1; i>=0; i--) {
            printf("%c",ans[i]);
        }
        printf("\n");
        return 0;
    }
}
*/

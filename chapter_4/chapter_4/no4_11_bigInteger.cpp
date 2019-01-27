//
//  no4_11_bigInteger.cpp
//  chapter_4
//
//  Created by Kelang-Tian on 2019/1/24.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//

 /*
 struct bigInteger {
 int digit[1000];
 int size;
 };

实现一个加法器，使其能够输出 a+b 的值。输入包括两个数 a 和 b，其中 a 和 b 的位数不超过 1000 位。
 input:
 26
 10000000000000000000 10000000000000000000000000000000
 
 output:
 8
 10000000000010000000000000000000

 */
/*
#include <stdio.h>
#include <string.h>
struct bigInteger{
    int digit[1000];
    int size;
    void init(){
        for(int i=0;i<1000;i++){
            digit[i] = 0;
        }
        size = 0;
    }
    void set(char str[]){
        init();
        int L = int(strlen(str));
        for(int i = L-1,j = 0, t = 0,c = 1;i>=0;i--){
            t += (str[i]-'0')*c;
            j++;
            c*=10;
            if(j == 4 || i == 0){
                digit[size++] = t;          //将这四个字符代表的四位数存入数组,
                j = 0;
                t = 0;
                c = 1;
            }
        }
    }
    void output(){
        for(int i=size-1;i >= 0;i--){
            if(i != size - 1) printf("%04d",digit[i]);
            else printf("%d",digit[i]);
        }
        printf("\n");
    }
    bigInteger operator + (const bigInteger &A) const{      //重载过程中别忘了A的定义
        bigInteger ret;
        ret.init();
        int carry = 0;          //进位控制
        for (int i = 0;i<A.size||i<size;i++){
            int tmp = A.digit[i] + digit[i] + carry;
            carry = tmp/10000;
            tmp %= 10000;
            ret.digit[ret.size++] = tmp;
        }
        if(carry != 0)
            ret.digit[ret.size++] = carry;
        return ret;
    }
}a,b,c;


char str1[1001],str2[1001];
int main(){
    while (scanf("%s %s",str1,str2)!=EOF) {
        a.set(str1);
        b.set(str2);
        c = a+b;
        c.output();
    }
    return 0;
}
*/

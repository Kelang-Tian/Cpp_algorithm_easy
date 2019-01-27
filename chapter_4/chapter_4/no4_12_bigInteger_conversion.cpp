//
//  no4_12_bigInteger_conversion.cpp
//  chapter_4
//
//  Created by Kelang-Tian on 2019/1/24.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
 将 M 进制的数 X 转换为 N 进制的数输出。X 可能非常大！！！！
 
 输入的第一行包括两个整数:M 和 N(2<=M,N<=36)。下面的一行输入一个数 X，X 是 M 进制的数，现在要求你将 M 进制的数 X 转换成 N 进制的
 数输出。
 
 input:
 16 10
 F
 output:
 15
 
 注意：输入时字母部分为大写，输出时为小写，并且有大数据。关于大数据问题参考4_11
 
 考虑到进制转换的内容，我们的高精度整数需要进行以下运算:
 高精度整数与普通整数的求积，
 高精度整数之间求和，
 高精度整数除以普通整数，
 高精度整数对普通整数求模等。
 */


#include <stdio.h>
#include <string.h>
#define maxDigits 100
struct bigInteger{
    int digit[maxDigits];
    int size;
    
    void init(){
        for(int i=0;i<maxDigits;i++) digit[i] = 0;
        size = 0;
    }
    void set(int x){
        init();
        do{
            digit[size++] = x%10000;
            x/=10000;
        }while(x!=0);                   //注意 while后面不要忘记";"
    }
    void output(){
        for(int i = size - 1;i >=0;i--){
            if(i != size -1) printf("%04d",digit[i]);
            else printf("%d",digit[i]);
        }
        printf("\n");
    }
    bigInteger operator * (int x) const{
        bigInteger ret;
        ret.init();
        int carry = 0;              //进位记录
        for(int  i= 0;i<size;i++){
            int tmp = x * digit[i] + carry;
            carry = tmp /10000;
            tmp %= 10000;
            ret.digit[ret.size++] = tmp;
        }
        if(carry != 0) ret.digit[ret.size++] = carry;
        return ret;
    }
    bigInteger operator + (const bigInteger &A) const{
        bigInteger ret;
        ret.init();
        int carry = 0;
        for(int i=0;i<A.size;i++){
            int tmp = A.digit[i] + digit[i] + carry;
            carry = tmp/10000;
            tmp %= 10000;
            ret.digit[ret.size++] = tmp;
        }
        if (carry != 0) ret.digit[ret.size++] = carry;
        return ret;
    }
    bigInteger operator / (int x) const{
        bigInteger ret;
        ret.init();
        int remainder = 0;          //设置一个余数
        for(int i = size - 1;i >= 0;i--){
            int t = (remainder*10000 + digit[i])/x;
            int r = (remainder*10000 + digit[i])%x;         //本次的余数
            ret.digit[i] = t;
            remainder = r;
        }
        ret.size = 0;
        for(int i=0;i<maxDigits;i++){
            if(ret.digit[i] != 0) ret.size = i;
        }
        ret.size++;
        return ret;
    }
    int operator % (int x) const{
        int remainder = 0;
        for(int i = size - 1;i >= 0;i--){
            int t = (remainder * 10000 + digit[i])/x;
            int r = (remainder * 10000 + digit[i])%x;
            remainder = r;
        }
        return remainder;
    }
}a,b,c;

char str[10000];
char ans[10000];
int main(){
    int n,m;
    while (scanf("%d %d",&m,&n)!=EOF) {
        scanf("%s",str);
        int L = int(strlen(str));
        a.set(0);               //把m进制的数转成10进制保存
        b.set(1);               //转化过程中的权重
        for (int i = L -1; i >= 0; i--) {
            int t;
            if (str[i] >='0' && str[i] <= '9') {
                t = str[i] - '0';
            }
            else t = str[i] - 'A' + 10;
            a = a + b*t;
            b = b*m;
        }
        int size = 0;
        do{
            int t = a%n;
            if (t>=10) ans[size++] = t - 10 + 'a';
            else ans[size++] = t+'0';
            a = a/n;
        }while(a.digit[0] != 0 || a.size != 1);
        for (int i = size -1; i>=0; i--) {
            printf("%c",ans[i]);
        }
        printf("\n");
    }
    return 0;
}

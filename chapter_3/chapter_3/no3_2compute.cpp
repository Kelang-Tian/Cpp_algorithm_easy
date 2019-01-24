//
//  no3_2compute.cpp
//  chapter_3
//
//  Created by Kelang-Tian on 2019/1/21.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
 读入一个只包含 +, -, *, / 的非负整数计算表达式，计算该表达式的值。
 例子：
 1+2
 4 + 2 * 5 - 7 / 11
 0
 
输出：
3.00
13.36
 
   从左至右依次遍历字符串，若遍历到运算符，则将其与运算符栈栈顶元素进行比较，若运算符栈栈顶运算符优先级小于该运算符或者此时运算符栈空，
 则将该运算符压入堆栈。遍历字符串中下一个元素。
   若运算符栈栈顶运算符优先级大于该运算符，则弹出该栈顶运算符，再从 数字栈中依次弹出两个栈顶数字，完成弹出的运算符对应的运算得到结
 后，再 将该结果压入数字栈，重复比较此时栈顶运算符与当前遍历到的运算符优先级， 视其优先级大小重复步骤。
 */
/*
#include <stdio.h>
#include <stack>
using namespace std;
char str[220];
int mat[][5] = {
    1,0,0,0,0,//人为添加在首尾的符号
    1,0,0,0,0,//+
    1,0,0,0,0,//-
    1,1,1,0,0,//*
    1,1,1,0,0,// /
};
stack<int> op;
stack<double> in;
void getOp(bool &reto,int &retn, int &i){ //reto判断是符号还是数字a
    if(i ==0 && op.empty()==true){
        reto = true;
        retn = 0;
        return;
    }
    if (str[i]==0) {
        reto = true;
        retn = 0;
        return;
    }
    if(str[i]>='0'&&str[i]<='9'){
        reto = false;
    }
    else {
        reto = true;
        if (str[i] == '+') {
            retn = 1;
        }
        else if (str[i] == '-') {
            retn = 2;
        }
        else if (str[i] == '*') {
            retn = 3;
        }
        else if (str[i] == '/') {
            retn = 4;
        }
        i+=2;
        return;
    }
    retn = 0;
    for (; str[i]!=' '&& str[i] != 0; i++) {
        retn *=10;
        retn += str[i] - '0';
    }
    if (str[i] == ' ') {
        i++;
    }
    return ;
}

int main(){
    while (gets(str)) {
        if (str[0] =='0'&&str[1]==0) {
            break;
        }
        bool retop; int retnum;
        int idx = 0;
        while (!op.empty()) {
            op.pop();
        }
        while (!in.empty()) in.pop();
        while (true) {
            getOp(retop, retnum, idx);
            if(retop == false){
                in.push(retnum);
            }
            else{
                double tmp;
                if (op.empty()==true||mat[retnum][op.top()] == 1) {
                    op.push(retnum);
                }
                else{
                    while (mat[retnum][op.top()] == 0) {
                        int ret = op.top();
                        op.pop();
                        double b = in.top();
                        in.pop();
                        double a= in.top();
                        in.pop();
                        if(ret == 1) tmp = a+b;
                        else if(ret == 2) tmp = a - b;
                        else if(ret == 3) tmp = a*b;
                        else tmp = a/b;
                        in.push(tmp);
                    }
                    op.push(retnum);
                }
            }
            if (op.size()==2&&op.top() == 0) {
                break;
            }
        }
        printf("%.2f\n",in.top());
        
    }
    return 0;
    
}
*/

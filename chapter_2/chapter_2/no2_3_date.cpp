//
//  no2_3_date.cpp
//  chapter_2
//
//  Created by Kelang-Tian on 2019/1/19.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//


/*题目描述:
 有两个日期，求两个日期之间的天数，如果两个日期是连续的我们规定他们 之间的天数为两天
 输入:
 有多组数据，每组数据有两行，分别表示两个日期，形式为 YYYYMMDD 输出:
 输出：
 每组数据输出一行，即日期差值

 样例输入:
 20110412
 20110422
 输出：11
 */
//预处理 空间换时间 把每一天与开始的一天之间的时间差值做好记录
//用逻辑语言表达出来即为 Year % 100 != 0 && Year % 4 == 0 || Year % 400 == 0，当逻辑表达式为 true 时，其为闰年


/*
#include <stdio.h>
#define ISYEAR(x) x%100 != 0 && x%4 == 0 ||x%400 == 0 ? 1: 0
int dayofmonth[13][2] = {
    0,0,
    31,31,
    28,29,
    31,31,
    30,30,
    31,31,
    30,30,
    31,31,
    31,31,
    30,30,
    31,31,
    30,30,
    31,31
};
struct Date {
    int Day;
    int Month;
    int Year;
    void nextday(){
        Day++;
        if(Day > dayofmonth[Month][ISYEAR(Year)])
        {
            Day =1;
            Month++;
            if(Month>12){
                Month = 1;
                Year++;
            }
        }
    }
};
int buf[5001][13][32];
int abs(int x){
    return x>0?x:-x;
}
int main(){
    int cnt = 0;//天数计算器
    Date tmp;
    tmp.Day = 1;
    tmp.Month=1;
    tmp.Year=0;
    while (tmp.Year != 5001) {
        buf[tmp.Year][tmp.Month][tmp.Day] = cnt;
        tmp.nextday();
        cnt++;
    }
    int d1, m1, y1;
    int d2, m2, y2;
    while (scanf("%4d%2d%2d",&y1,&m1,&d1)!=EOF) {
        scanf("%4d%2d%2d",&y2,&m2,&d2);
        printf("%d\n",abs(buf[y1][m1][d1]-buf[y2][m2][d2])+1);
    }
    return 0;
}
*/

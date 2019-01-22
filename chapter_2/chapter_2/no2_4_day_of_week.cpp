//
//  no2_4_day_of_week.cpp
//  chapter_2
//
//  Created by Kelang-Tian on 2019/1/19.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
 样例输入:
 9 October 2001
 14 October 2001
输出：
Tuesday
 Sunday
 */

/*
#include <stdio.h>
#include <string.h>

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

char monthName[13][20] = {
    "",
    "January",
    "February",
    "March",
    "April",
    "May",
    "June",
    "July",
    "August",
    "September",
    "October",
    "November",
    "December"
}; //月名 每个月名对应下标1到12 char weekName[7][20] = {

char weekName[7][20] = {
"Sunday",
"Monday",
"Tuesday",
"Wednesday",
"Thursday",
"Friday",
"Saturday"
}; //周名 每个周名对应下标0到6


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

    int d, m, y;
    char s[20];
    while (scanf("%d%s%d",&d,s,&y)!= EOF) {
        for (m=1; m<=12; m++) {
            if(strcmp(s,monthName[m])==0){
                break;
            }
        }
        int days = buf[y][m][d] - buf[2012][7][16];
        days += 1;
        puts(weekName[(days % 7 + 7) % 7]);
    }
    return 0;
}
*/

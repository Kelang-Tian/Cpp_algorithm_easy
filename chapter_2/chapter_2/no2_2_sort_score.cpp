//
//  no2_2_sort_score.cpp
//  chapter_2
//
//  Created by Kelang-Tian on 2019/1/19.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//


/*
 有 N 个学生的数据，将学生数据按成绩高低排序，如果成绩相同则按姓名 字符的字母序排序，
 如果姓名的字母序也相同则按照学生的年龄排序，并输出 N 个学生排序后的信息。
 
 测试数据有多组，每组输入第一行有一个整数 N(N<=1000)，接下来的 N 行包括 N 个学生的数据。每个学生的数据包括姓名(长度不超过 100 的字符串)、
 年龄(整形数)、成绩(小于等于 100 的正数)。
 
  将学生信息按成绩进行排序，成绩相同的则按姓名的字母序进行排序。然后 输出学生信息，按照如下格式:姓名 年龄 成绩
 输入：
 3
 abc 20 99
 bcd 19 97
 bed 20 97
 
 输出：
 bcd 19 97
 bed 20 97
 abc 20 99
 */

/*
#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
struct E{
    char name[100];
    int age;
    int score;
    bool operator <(const E &b) const{                  //注意运算符号的重载问题
        if(score!=b.score) return score < b.score;
        int tmp = strcmp(name, b.name);
        if(tmp!=0) return tmp<0;
        else return age< b.age;
    }
}buf[1000];
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        for (int i=0;i<n;i++){
            scanf("%s%d%d",buf[i].name,&buf[i].age,&buf[i].score);
        }
        sort(buf, buf+n);
        for (int i=0;i < n; i++) {
            printf("%s %d %d\n",buf[i].name,buf[i].age,buf[i].score);
        }
    }
    return 0;
}

//也可以单独把比较方法拿出来
bool cmp(E a, E b){
    if (a.score != b.score) return a.score < b.score; //若分数不相同则分数低 者在前
    int tmp = strcmp(a.name,b.name);
    if (tmp != 0) return tmp < 0; //若分数相同则名字字典序小者在前
    else return a.age < b.age; //若名字也相同则年龄小者在前
}
*/

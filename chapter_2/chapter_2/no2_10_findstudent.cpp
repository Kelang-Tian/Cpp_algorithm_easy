//
//  no2_10_findstudent.cpp
//  chapter_2
//
//  Created by Kelang-Tian on 2019/1/20.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//

/*
输入 N 个学生的信息，然后进行查询
输入的第一行为 N，即学生的个数(N<=1000)
接下来的 N 行包括 N 个学生的信息，信息格式如下:
4
01 李江 男 21
02 刘唐 男 23
03 张军 男 19
04 王娜 女 19
然后输入一个 M(M<=10000),接下来会有 M 行，代表 M 次查询，每行输入
一个学号，格式如下:
02
03
01
04
输出 M 行，每行包括一个对应于查询的学生的信息。 如果没有对应的学生信息，则输出“No Answer!”

 ###若我们依旧采用每次询问时线性遍历数组来查找是否存在我们需要查找的 元素，那么，
该算法的时间复杂度达到了 O(n * m)(查找次数 * 每次查找所 需比较的个数)，而这已经达到了千万数量级，是我们所不愿看到的。于是，
我们只有另找来解决该题。
 
 二分法解决问题
*/
/*
#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
struct student{
    char no[100];
    char name[100];
    char sex[5];
    int age;
    bool operator < (const student &A) const{
        return strcmp(no, A.no)<0;
    }
}buf[1000];

int main(){
    int n;
    while (scanf("%d",&n)!=EOF) {
        printf("q输入%d组数据\n",n);
        for (int i=0; i<n; i++) {
            scanf("%s %s %s %d\n",buf[i].no,buf[i].name,buf[i].sex,&buf[i].age);
        }
        sort(buf,buf+n);
        int t;
        scanf("%d",&t);
        printf("对%d个人进行查询\n",t);
        while (t-- !=0) {
            int ans = -1;
            char x[30];
            scanf("%s",x);
            int top = n-1,base = 0;
            while (top>=base) {
                int mid = (top+base)/2;
                int tmp = strcmp(buf[mid].no, x);
                if(tmp == 0){
                    ans = mid;
                    break;
                }
                else if(tmp > 0 ){
                    top = mid - 1;
                }
                else
                    base = mid + 1;
            }
            if (ans==-1)
                printf("No answer!\n");
            else
                printf("%s %s %s %d\n",buf[ans].no,buf[ans].name,buf[ans].sex,buf[ans].age);
        }
    }
    return 0;
}
*/

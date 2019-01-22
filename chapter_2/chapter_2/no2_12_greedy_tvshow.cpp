//
//  no2_12_greedy_tvshow.cpp
//  chapter_2
//
//  Created by Kelang-Tian on 2019/1/20.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//

/*
 输入数据包含多个测试实例，每个测试实例的第一行只有一个整数 n(n<=100)，表示你喜欢看的节目的总数，然后是 n 行数据，每行包括两个数据
Ti_s,Ti_e (1<=i<=n)，分别表示第 i 个节目的开始和结束时间，为了简化问题，每 个时间都用一个正整数表示。n=0 表示输入结束，不做处理。

 对于每个测试实例，输出能完整看到的电视节目的个数，每个测试实例的输 出占一行。
样例输入:
 12
 1 3
 3 4
 0 7
 3 8
 15 19
 15 20
 10 15
 8 18
 6 12
 5 10
 4 14
 2 9
 0
 
 样例输入:
 5
 */

//greedy algrithm
//选择结束时间最早的节目

#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
struct show{
    int starttime;
    int endtime;
    bool operator<(const show &A)const{
        return endtime<A.endtime;
    }
}buf[100];

int main(){
    int n;
    while (scanf("%d",&n)!=EOF) {
        if (n==0) break;
        printf("input n:%d",n);
        for (int i=0; i<n; i++) {
            scanf("%d %d",&buf[i].starttime,&buf[i].endtime);
        }
        sort(buf, buf+n);
        int cuttime = 0,ans = 0;
        for (int i =0; i<n; i++) {
            if (cuttime<=buf[i].starttime) {
                cuttime = buf[i].endtime;
                ans++;
            }
        }
        printf("we can enjoy %d tv shows!",ans);
        
    }
    return 0;
}

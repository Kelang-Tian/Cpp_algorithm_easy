//
//  no_2_11_greedy_mouse.cpp
//  chapter_2
//
//  Created by Kelang-Tian on 2019/1/20.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//

//greedy algorithm
/*
#include <stdio.h>
#include <algorithm>
using namespace std;
struct goods{
    double j;//重
    double f;//价值
    double s;//性价比
    bool operator <(const goods &A)const{
        return s>A.s;
    }
}buf[100];

int main(){
    double m;
    int n;
    while (scanf("%lf %d",&m,&n)!=EOF) {
        printf("m:%lf   n:%d\n",m,n);
        if(m == -1 && n == -1) break;
        for (int i=0; i<n;i++) {
            scanf("%lf %lf",&buf[i].j,&buf[i].f);
            buf[i].s = buf[i].j/buf[i].f;
        }
        sort(buf, buf+n);
        int idx = 0;
        double ans = 0;
        while (m>0&&idx<n) {
            if(m>buf[idx].f){
                ans+=buf[idx].j;
                m-=buf[idx].f;
            }
            else{
                ans += buf[idx].j*m/buf[idx].f;
                m = 0;
            }
            idx++;
        }
        printf("%.3lf pounds food\n",ans);
    }
    return 0;
}
*/

//
//  no5_5_Dijkstra.cpp
//  chapter_5
//
//  Created by Kelang-Tian on 2019/1/26.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
#include <stdio.h>
#include <vector>
using namespace std;
struct E{
    int next;
    int c;
};

vector<E> edge[101];
bool mark[101];         //判断某点是否达到了最短路径

int Dis[101];

int main(){
    int n,m;
    while (scanf("%d %d",&n,&m)!=EOF) {
        if(n == 0&&m == 0) break;
        for (int i=1; i<=n; i++) edge[i].clear();
        
        int a,b,c;
        while (m--!=0) {
            scanf("%d %d %d",&a,&b,&c);
            E tmp;
            tmp.c =c;
            tmp.next =b;
            edge[a].push_back(tmp);
            tmp.next = a;
            edge[b].push_back(tmp);     //无向图 将两个节点分别作为尾节点加入向量
        }
        
        //初始化
        for (int i=1; i<=n; i++) {
            Dis[i] = -1;
            mark[i] = false;
        }
        Dis[1] = 0;
        mark[1] = true;
        int newP = 1;       //在已经确定的集合中加入新确定的节点newP
                            //循环n-1次 将剩下的节点一次确定
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < edge[newP].size(); j++) {       //更新newP点连接的其余点的距离
                int t = edge[newP][j].next;
                int c = edge[newP][j].c;
                if(mark[t] == true) continue;
                if (Dis[t] == -1||Dis[newP] + c< Dis[t]) {
                    Dis[t] = Dis[newP] + c;
                }
            }
            int min = 10000000;
            for (int j=1; j<=n; j++) {
                if(mark[j] == true) continue;
                if(Dis[j] == -1) continue;
                if(Dis[j] < min){
                    min = Dis[j];
                    newP=j;
                }
            }
            mark[newP] = true;
        }
        printf("%d\n",Dis[n]);
    }
    return 0;
}
*/

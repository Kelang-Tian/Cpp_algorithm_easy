//
//  no5_6_vector.cpp
//  chapter_5
//
//  Created by Kelang-Tian on 2019/1/26.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
 给你 n 个点，m 条无向边，每条边都有长度 d 和花费 p，给你起点 s 终点 t，
 要求输出起点到终点的最短距离及其花费，如果最短距离有多条路线，则输出花
 费最少的。

 输入 n,m，点的编号是 1~n,然后是 m 行，每行 4 个数 a,b,d,p，表示 a 和 b
 之间有一条边，且其长度为 d，花费为 p。最后一行是两个数s,t;起点 s，终点 t。
 n 和 m 为 0 时输入结束。(1<n<=1000, 0<m<100000, s != t)
 
 input:
 3 2
 1 2 5 6
 2 3 4 5
 1 3
 0 0
 
 output:
 9 11
 */

/*#include <stdio.h>
#include <vector>
using namespace std;
struct E{
    int next;
    int cost;
    int c;
};
vector<E> edge[1001];       //邻接链表
bool mark[1001];
int Dis[1001];
int cost[1001];

int main(){
    int n,m;
    int S,T;
    while (scanf("%d %d",&n,&m)!=EOF) {
        if(n == 0&&m == 0) break;
        for(int i = 1;i<=n;i++) edge[i].clear();
        while (m--!=0) {
            int a,b,c,cost;
            scanf("%d %d %d %d",&a,&b,&c,&cost);
            E tmp;
            tmp.c = c;
            tmp.cost = cost;
            tmp.next = b;
            edge[a].push_back(tmp);
            tmp.next = a;
            edge[b].push_back(tmp);
        }
        scanf("%d %d",&S,&T);
        for (int i=1; i<=n ; i++) {
            Dis[i] = -1;
            mark[i] = false;
            cost[i] = -1;
        }
        Dis[S] = 0;         //加入初始点
        mark[S] = true;
        cost[S] = 0;
        int newP = S;
        for (int i=1; i<n ; i++) {
            for (int j = 0; j < edge[newP].size(); j++) {
                int t = edge[newP][j].next;
                int c = edge[newP][j].c;
                int co = edge[newP][j].cost;
                if(mark[t] == true) continue;
                if(Dis[t]==-1 || Dis[t] > Dis[newP] + c ||
                   Dis[t] == Dis[newP] +c && cost[newP] + co < cost[t]){
                    Dis[t] = Dis[newP] + c;
                    cost[t] = cost[newP] + co;
                }
            }
            int min = 10000000;
            for (int j = 1; j <= n ; j++) {
                if(mark[j] == true ) continue ;
                if(Dis[j] == -1 ) continue;
                if (Dis[j] < min) {
                    min = Dis[j];
                    newP = j;
                }
            }
            mark[newP] = true;
        }
        printf("%d %d\n",Dis[T],cost[T]);
    }
    return 0;
}
*/

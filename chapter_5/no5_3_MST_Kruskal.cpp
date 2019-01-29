//
//  no5_3_MST_Kruskal.cpp
//  chapter_5
//
//  Created by Kelang-Tian on 2019/1/26.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*测试输入包含若干测试用例。每个测试用例的第 1 行给出村庄数目 N ( < 100 );
 随后的 N(N-1)/2 行对应村庄间的距离，每行给出一对正整
 数，分别是两 个村庄的编号，以及此两村庄间的距离。
 为简单起见，村庄从 1 到 N 编号。当 N 为 0 时，输入结束，该用例不被处理。

 对每个测试用例，在 1 行里输出最小的公路总长度。
 
 input:
 3
 1 2 1
 1 3 2
 2 3 4
 4
 1 2 1
 1 3 4
 1 4 1
 2 3 3
 2 4 2
 3 4 5
 0
 output:
 3
 5
 
 */

/*
#include <stdio.h>
#include <algorithm>
using namespace std;
#define N 101
int Tree[N];

int findRoot(int x){
    if(Tree[x] == -1) return x;
    else {
        int tmp = findRoot(Tree[x]);
        Tree[x] = tmp;
        return tmp;
    }
}
//定义边的结构体并重载运算符号
struct Edge{
    int a,b;
    int cost;
    bool operator <(const Edge &A)  const{
        return cost<A.cost;
    }
}edge[6000];

int main(){
    int n;
    while (scanf("%d",&n)!=EOF && n != 0) {
        for (int i=1; i<= n*(n-1)/2; i++) {
            scanf("%d %d %d",&edge[i].a,&edge[i].b,&edge[i].cost);
        }
        sort(edge+1, edge+1+n*(n-1)/2);
        for (int i=1; i<=n; i++) {
            Tree[i] = -1;
        }
        int ans = 0;
        
        for (int i=1; i<=n*(n-1)/2; i++) {
            int a = findRoot(edge[i].a);
            int b = findRoot(edge[i].b);
            if (a!=b) {
                Tree[a] = b;
                ans += edge[i].cost;
            }
        }
        printf(" answer is %d\n",ans);
    }
    return 0;
}
*/

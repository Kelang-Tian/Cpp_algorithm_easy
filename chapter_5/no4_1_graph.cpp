//
//  no4_1_graph.cpp
//  chapter_5
//
//  Created by Kelang-Tian on 2019/1/25.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//


/*
 测试输入包含若干测试用例。每个测试用例的第 1 行给出两个正整数，分别 是城镇数目
 N ( < 1000 )和道路数目 M;随后的 M 行对应 M 条道路，每行给出 一对正整数，分
 别是该条道路直接连通的两个城镇的编号。为简单起见，城镇从 1 到 N 编号。当 N 为
 0 时，输入结束，该用例不被处理。
 
 对每个测试用例，在 1 行里输出最少还需要建设的道路数目。
 
 input:
 4 2
 1 3
 4 3
 3 3
 1 2
 1 3
 2 3
 5 2
 1 2
 3 5
 999 0
 0
 
 output:
 1
 0
 2
 998
 
 分析：并查集问题，找寻连通分量。
 每个结点都是孤立的连通分量，当读入已经建成的边后，我们将边的两个顶点所在集合合并，表示这两个集合中的所有结点已经连通。
 对所有的边重复该操作，最后计算所有的结点被保存在几个集合中，即存在多少棵树就能得知共有 多少个连通分量(集合)。
 
 */

/*
#include <stdio.h>
using namespace std;
#define N 1000
int Tree[N];
int findRoot(int x){
    if (Tree[x] == -1) return x;
    else {
        int tmp = findRoot(x);          //在这里对寻找某一点的根节点进行整理，防止树的深度过大
        Tree[x] = tmp;
        return tmp;
    }
}
int main(){
    int n,m;
    while (scanf("%d",&n)!= EOF && n != 0) {
        scanf("%d",&m);
        for(int i=1;i<=n;i++) Tree[i] = -1;
        for (int i=0; i<m; i++) {
            int a,b;
            scanf("%d %d",&a,&b);
            a = findRoot(a);
            b = findRoot(b);        //
            if (a!=b) {
                Tree[a] = b;        //如果这两个点的根节点都不同，则归并到一起
            }
        }
        int ans = 0;
        for (int i=1; i<=n; i++) {
            if(Tree[i] == -1) ans++;
        }
        printf("We need to build %d roads.\n",ans-1);
        
    }
    return 0;
}

*/

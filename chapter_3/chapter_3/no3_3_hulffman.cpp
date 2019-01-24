//
//  no3_3_hulffman.cpp
//  chapter_3
//
//  Created by Kelang-Tian on 2019/1/21.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
 哈夫曼树，第一行输入一个数 n，表示叶结点的个数。需要用这些叶结点生 成哈夫曼树，根据哈夫曼树的概念，这些结点有权值，即 weight，题目需要输出 所有结点的值与权
 的乘积之和。
 5
 1 2 2 5 9
 输出：37
 
 注意：
 为了方便快捷高效率的求得集合 K 中权值最小的两个元素，我们需要使用堆数 据结构。它可以以 O(logn)的复杂度取得 n 个元素中的最小元素。为了绕过对 堆的实现，我们使用
 标准模板库中的相应的标准模板——优先队列
 priority_queue<int> Q;
 但这里是从大到小的
 
 priority_queue<int , vector<int> , greater<int> > Q;
 从小到大
 
 */

/*
#include <stdio.h>
#include <queue>
using namespace std;
priority_queue<int, vector<int>, greater<int>> Q; //建立小顶堆
int main(){
    int n;
    printf("test");
    while (scanf("%d\n",&n)!=EOF) {
        while (Q.empty()==false) Q.pop();
        for (int i=0; i<n; i++) {
            int x;
            scanf("%d",&x);
            Q.push(x);
        }
        int ans = 0;
        while (Q.size()>1) {
            int a = Q.top();
            Q.pop();
            int b = Q.top();
            Q.pop();
            ans += a+b;
            Q.push(a + b);
            printf("Q.size is:%d\n",Q.size());
            printf("ans is :%d\n",ans);
            
        }
        printf("the answer is :%d\n",ans);
        
    }
    return 0;
}
*/

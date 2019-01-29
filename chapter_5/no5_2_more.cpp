//
//  no5_2_more.cpp
//  chapter_5
//
//  Created by Kelang-Tian on 2019/1/25.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
 题目描述:Mr Wang wants some boys to help him with a project. Because the project is rather complex, the more
 boys come, the better it will be. Of course there are certain requirements.Mr Wang selected a room big enough
 to hold the boys. The boy who are not been chosen has to leave the room immediately. There are 10000000 boys
 in the room numbered from 1 to 10000000 at the very beginning. After Mr Wang's selection any two of them who
 are still in this room should be friends (direct or indirect), or there is only one boy left. Given all the
 direct friend-pairs, you should decide the best way.
 
 
 输入:
 The first line of the input contains an integer n (0 ≤ n ≤ 100 000) - the number of direct friend-pairs. The
 following n lines each contains a pair of numbers A and B separated by a single space that suggests A and B
 are direct friends. (A ≠ B, 1 ≤ A, B ≤ 10000000)
 输出:
  The output in one line contains exactly one integer equals to the maximum number of boys Mr Wang may keep.
 样例输入:
 4
 1 2
 3 4
 5 6
 1 6
 4
 1 2
 3 4
 5 6
 7 8
 样例输出:
 4
 2

 为了计算每个集合的元素个数，我们不妨在表示每个集合的树的根结点记录 该集合所包含的元素个数，在合并时累加被合并两个集合包含的元素个数。
 最后， 找出所有集合中所包含元素最多的集合即是所求。
 */

/*
#include <stdio.h>
using namespace std;
#define N 10000001
int Tree[N];
int findRoot(int x){
    if(Tree[x] == -1) return x;
    else{
        int tmp = findRoot(Tree[x]);
        Tree[x] = tmp;
        return tmp;
    }
}
int sum[N];         //记录某集合的节点数量
int main(){
    int n;
    while (scanf("%d",&n)!=EOF) {
        for (int i=1; i<N; i++) {
            Tree[i] = -1;
            sum[i] = 1;
        }
        while (n--!=0) {
            int a,b;
            scanf("%d %d",&a,&b);
            a = findRoot(a);
            b = findRoot(b);
            if (a!=b) {
                Tree[a] = b;
                sum[b] += sum[a];
            }
        }
        int ans = 1;
        for (int i=1; i<=N; i++) {
            if(Tree[i] == -1 && ans < sum[i]) ans = sum[i];
        }
        printf("The answer is %d\n",ans);
    }
    return 0;
}
*/

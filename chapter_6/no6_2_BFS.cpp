//
//  no6_2_BFS.cpp
//  chapter_6
//
//  Created by Kelang-Tian on 2019/1/27.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
 
 Ignatius 被魔王抓走了,有一天魔王出差去了,这可是 Ignatius 逃亡的好机会.
 魔王住在一个城堡里,城堡是一个 A*B*C 的立方体,可以被表示.成 A 个 B*C 的矩
 阵,刚开始 Ignatius 被关在(0,0,0)的位置,离开城堡的门在(A-1,B-1,C-1)的位置,
 现 在知道魔王将在 T 分钟后回到城堡,Ignatius 每分钟能从一个坐标走到相邻的六个
 坐标中的其中一个.现在给你城堡的地图,请你计算出 Ignatius 能否在魔王回来前 离开城堡
 (只要走到出口就算离开城堡,如果走到出口的时候魔王刚好回来也算逃 亡成功),如果可以请
 输出需要多少分钟才能离开,如果不能则输出-1。
 
 输入数据的第一行是一个正整数 K,表明测试数据的数量.每组测试数据的第一行是四个正整数
 A,B,C 和 T(1<=A,B,C<=50,1<=T<=1000),它们分别代表城堡的 大小和魔王回来的时间.
 然后是 A 块输入数据(先是第 0 块,然后是第 1 块,第 2 块......),每块输入数据有 B 行,
 每行有C个正整数,代表迷宫的布局,其中 0 代表路,1 代表墙。
 
 input:
 1
 3 3 4 20
 0 1 1 1
 0 0 1 1
 0 1 1 1
 1 1 1 1
 1 0 0 1
 0 1 1 1
 0 0 0 0
 0 1 1 0
 0 1 1 0

 output:
 11
 
 由于可以由任意一个点经过一秒的行走进入下一个点，所以由任意一个状态(x，y，z，t)
 可以扩展得到下面六个状态(x-1，y，z，t+1)、(x+1， y，z，t+1)、(x，y+1，z，t+1)、
 (x，y-1，z，t+1)、(x，y，z+1，t+1)、(x，y,z-1，t+1))中合法的所有状态，所谓合法
 即该点不是墙的所在点且该点在立方 体范围之内。
 
 
 */
 /*
#include <stdio.h>
#include <queue>
using namespace std;
bool mark[50][50][50];          //用于标记某点是否已经走过
int maze[50][50][50];           //保存迷宫的信息 1表示墙
struct N{
    int x,y,z;
    int t;
};
queue<N> Q;                     //保存状态的队列
int go[][3] = {                 //向6个方向依次走的步伐
    1,0,0,
    -1,0,0,
    0,1,0,
    0,-1,0,
    0,0,1,
    0,0,-1
};

int BFS(int a,int b,int c){     //关键步骤，开始广度优先遍历
    while (Q.empty() == false) {
        N now  = Q.front();
        Q.pop();
        for (int i=0; i<6; i++) {
            int nx = now.x + go[i][0];
            int ny = now.y + go[i][1];
            int nz = now.z + go[i][2];
            if (nx>=a||nx<0||ny>=b||ny<0||nz>=c||nz<0) continue;        //越界了
            if(maze[nx][ny][nz] == 1) continue;                         //遇到墙了 跳过
            if(mark[nx][ny][nz] == true) continue;                  //已经遍历过的点不再遍历，保证只遍历了A*B*C个点
            N tmp;
            tmp.x = nx;
            tmp.y = ny;
            tmp.z = nz;
            tmp.t = now.t + 1;
            Q.push(tmp);
            mark[nx][ny][nz] = true;
            if(nx == a-1 && ny == b-1 && nz == c-1) return tmp.t;
        }
    }
    return -1;          //没找到合适的
}
int main(){
    int T;
    scanf("%d\n",&T);
    while (T--!=0) {
        int a,b,c,t;
        scanf("%d %d %d %d\n",&a,&b,&c,&t);
        for (int i=0; i<a; i++) {
            for (int j=0; j<b; j++) {
                for (int k=0; k<c; k++) {
                    scanf("%d",&maze[i][j][k]);
                    mark[i][j][k] = false;
                }
            }
        }
        while (Q.empty() == false) {
            Q.pop();            //排空队列
        }
        mark[0][0][0] = true;
        N tmp;
        tmp.x = tmp.y = tmp.z = tmp.t = 0;
        Q.push(tmp);
        int rec = BFS(a,b,c);
        if(rec <= t) printf("%d\n",rec);
        else printf("-1\n");
        
    }
    return 0;
}
*/

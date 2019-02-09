//
//  no6_3_BFS.cpp
//  chapter_6
//
//  Created by Kelang-Tian on 2019/1/27.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
 大家一定觉的运动以后喝可乐是一件很惬意的事情，但是 seeyou 却不这么 认为。
 因为每次当 seeyou 买了可乐以后，阿牛就要求和 seeyou 一起分享这一瓶可乐，
 而且一定要喝的和 seeyou 一样多。但 seeyou 的手中只有两个杯子，它们的容
 量分别是 N 毫升和 M 毫升 可乐的体积为 S(S<101)毫升(正好装满一 瓶) ，
 它们三个之间可以相互倒可乐 (都是没有刻度的，且 S==N+M，101>S >0，N>0，M>0)
 聪明的 ACMER 你们说他们能平分吗?如果能请输出倒可 乐的最少的次数，如果不能输出"NO"。
 
 三个整数 : S 可乐的体积 , N 和 M 是两个杯子的容量，以"0 0 0"结束。
 如果能平分的话请输出最少要倒的次数，否则输出"NO"。

 7 4 3
 4 1 3
 0 0 0
 
 NO
 3
 
 
 关于状态的BFS搜索问题，把每次的搜索问题转化成每个杯子的状态和 倾倒次数t.
 */
/*
#include <stdio.h>
#include <queue>
using namespace std;
struct N{
    int a,b,c;
    int t;
};              //杯子的状态和i倾倒次数
queue<N> Q;
bool mark[100][100][100];
//A中已经有的水的体积a和杯子体积sa
void AtoB(int &a,int sa,int &b,int sb){
    if (sb - b >= a) {
        b += a;
        a = 0;
    }else{
        a = a - (sb-b);
        b = sb;
    }
}

int BFS(int s,int n,int m){
    while (Q.empty() == false) {
        N now = Q.front();
        Q.pop();
        int a,b,c;
        a = now.a;
        b = now.b;
        c = now.c;
        
        AtoB(a,s,b,n);      //杯子a倒向b
        if (mark[a][b][c] == false) {
            mark[a][b][c] = true;
            N tmp;
            tmp.a = a;
            tmp.b = b;
            tmp.c = c;
            tmp.t = now.t + 1;
            if(a==s/2 && b == s/2) return tmp.t;
            if(c==s/2 && b == s/2) return tmp.t;
            if(a==s/2 && c == s/2) return tmp.t;
            Q.push(tmp);
        }
        
        a = now.a;
        b = now.b;
        c = now.c;
        AtoB(b,n,a,s);      //杯子b倒向a
        if (mark[a][b][c] == false) {
            mark[a][b][c] = true;
            N tmp;
            tmp.a = a;
            tmp.b = b;
            tmp.c = c;
            tmp.t = now.t + 1;
            if(a==s/2 && b == s/2) return tmp.t;
            if(c==s/2 && b == s/2) return tmp.t;
            if(a==s/2 && c == s/2) return tmp.t;
            Q.push(tmp);
        }
        
        a = now.a;
        b = now.b;
        c = now.c;
        AtoB(a,s,c,m);      //杯子a倒向c
        if (mark[a][b][c] == false) {
            mark[a][b][c] = true;
            N tmp;
            tmp.a = a;
            tmp.b = b;
            tmp.c = c;
            tmp.t = now.t + 1;
            if(a==s/2 && b == s/2) return tmp.t;
            if(c==s/2 && b == s/2) return tmp.t;
            if(a==s/2 && c == s/2) return tmp.t;
            Q.push(tmp);
        }
        
        a = now.a;
        b = now.b;
        c = now.c;
        AtoB(c,m,a,s);      //杯子c倒向a
        if (mark[a][b][c] == false) {
            mark[a][b][c] = true;
            N tmp;
            tmp.a = a;
            tmp.b = b;
            tmp.c = c;
            tmp.t = now.t + 1;
            if(a==s/2 && b == s/2) return tmp.t;
            if(c==s/2 && b == s/2) return tmp.t;
            if(a==s/2 && c == s/2) return tmp.t;
            Q.push(tmp);
        }
        
        a = now.a;
        b = now.b;
        c = now.c;
        AtoB(c,m,b,n);      //杯子c倒向b
        if (mark[a][b][c] == false) {
            mark[a][b][c] = true;
            N tmp;
            tmp.a = a;
            tmp.b = b;
            tmp.c = c;
            tmp.t = now.t + 1;
            if(a==s/2 && b == s/2) return tmp.t;
            if(c==s/2 && b == s/2) return tmp.t;
            if(a==s/2 && c == s/2) return tmp.t;
            Q.push(tmp);
        }
        
        a = now.a;
        b = now.b;
        c = now.c;
        AtoB(b,n,c,m);      //杯子b倒向c
        if (mark[a][b][c] == false) {
            mark[a][b][c] = true;
            N tmp;
            tmp.a = a;
            tmp.b = b;
            tmp.c = c;
            tmp.t = now.t + 1;
            if(a==s/2 && b == s/2) return tmp.t;
            if(c==s/2 && b == s/2) return tmp.t;
            if(a==s/2 && c == s/2) return tmp.t;
            Q.push(tmp);
        }
    }
    return -1;
}

int main(){
    int s, n, m;
    while (scanf("%d %d %d",&s,&n,&m)!=EOF) {
        if(s == 0) break;
        if (s%2 == 1) {
            printf("NO");
            break;//奇数分不成
        }
        for (int i=0; i<=s; i++) {
            for (int j=0; j<=n; j++) {
                for (int k=0; k <= m; k++) {
                    mark[i][j][k] = false;
                }
            }
        }
        N tmp;
        tmp.a = s;
        tmp.b = 0;
        tmp.c = 0;
        tmp.t = 0;
        while (Q.empty() == false) Q.pop();
        Q.push(tmp);
        mark[s][0][0] = true;
        int rec = BFS(s,n,m);
        if (s == -1) {
            printf("NO");
        }else{
            printf("%d\n",rec);
        }
    }
    return 0;
}
*/

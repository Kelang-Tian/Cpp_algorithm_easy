//
//  no5_4_MST.cpp
//  chapter_5
//
//  Created by Kelang-Tian on 2019/1/26.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
 In an episode of the Dick Van Dyke show, little Richie connects the freckles on his Dad's back to form a
 picture of the Liberty Bell. Alas, one of the freckles turns out to be a scar, so his Ripley's engagement
 falls through.Consider Dick's back to be a plane with freckles at various (x,y) locations. Your job is to
 tell Richie how to connect the dots so as to minimize the amount of ink used. Richie connects the dots by
 drawing straight lines between pairs, possibly lifting the pen between lines. When Richie is done there must
 be a sequence of connected lines from any freckle to any other freckle.
 
The first line contains 0 < n <= 100, the number of freckles on Dick's back. For each freckle, a
line follows; each following line contains two real numbers indicating the (x,y) coordinates of the freckle.
 
 Your program prints a single real number to two decimal places: the minimum total length of ink lines that
 can connect all the freckles.

 example:
 input:
 3
 1.0 1.0
 2.0 2.0
 2.0 4.0
 
 output:
 3.41
 
*/
/*
#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;
#define N 101
int Tree[N];
int findRoot(int x){
    if(Tree[x] == -1)return x;
    else {
        int tmp = findRoot(Tree[x]);
        Tree[x] = tmp;
        return tmp;
    }
}

struct Edge{
    int  a,b;
    double cost;
    bool operator < (const Edge &A) const{
        return cost<A.cost;
    }
}edge[6000];

struct Point{
    double x,y;
    double getDistance(Point A){
        double tmp = ( x - A.x)*(x - A.x) + (y-A.y)*(y-A.y);
        return sqrt(tmp);
    }
}list[101];

int main(){
    int n;
    while (scanf("%d",&n)!=EOF) {
        for (int i = 1; i<=n; i++) {
            scanf("%lf %lf",&list[i].x,&list[i].y);
        }
        //开始抽象出图中所用的边
        int size = 0;
        for (int i = 1; i <= n; i++) {
            for (int j=i+1; j<=n; j++) {
                edge[size].a = i;
                edge[size].b = j;
                edge[size].cost = list[i].getDistance(list[j]);
                size++;
            }
        }
        sort(edge + 1, edge + size);
        for (int i = 1; i<=n; i++) {
            Tree[i]= -1;
        }
        double ans = 0;
        for (int i = 0; i< size; i++) {
            int a = findRoot(edge[i].a);
            int b = findRoot(edge[i].b);
            if (a!=b) {
                Tree[a] = b;
                ans += edge[i].cost;
            }
        }
        printf("%.2lf\n",ans);
    }
    return 0;
}

*/

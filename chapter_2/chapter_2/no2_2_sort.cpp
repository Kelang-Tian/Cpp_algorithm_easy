//
//  no2_2_sort.cpp
//  chapter_2
//
//  Created by Kelang-Tian on 2019/1/18.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
 对输入的 n 个数进行排序并输出。
 输入的第一行包括一个整数 n(1<=n<=100)。接下来的一行包括 n 个整数。
 输出: 可能有多组测试数据，对于每组数据，将排序后的 n 个整数输出，每个数后 面都有一个空格。每组测试数据的结果占一行。
 样例输入:
 4
 1 4 3 2
 样例输出:
 1 2 3 4
 */

/*
//使用冒泡排序
#include <stdio.h>
int main(){
    int n;
    int buf[100];
    while (scanf("%d",&n)!=EOF) {
        printf("n: %d",n);
        for(int i=0; i<n; i++)
        {
            scanf("%d",&buf[i]);
        }
        for(int i=0; i<n;i++){
            for (int j=0;j < n-i-1; j++){
                if (buf[j] > buf[j+1]){
                    int temp = buf[j];
                    buf[j] = buf[j+1];
                    buf[j+1] = temp;
                }
            }
        }
        for(int k=0; k<n;k++){
            printf("%d ",buf[k]);
        }
        printf("\n");
    }
    return 0;
}
*/

/*
//使用sort库函数
#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
    int n;
    int buf[10000];
    while (scanf("%d",&n)!=EOF) {
        printf("n: %d", n);
        for(int i=0; i<n; i++){
            scanf("%d",&buf[i]);
        }
        sort(buf,buf+n);
        for(int i=0;i<n;i++){
            printf("%d",buf[i]);
        }
        printf("\n");
    }
    return 0;
}
*/

/*
//使用降序排列，sort的另一种用法
#include <stdio.h>
#include <algorithm>
using namespace std;
bool cmp(int x, int y){
    return x>y;
}

int main(){
    int n;
    int buf[10000];
    while(scanf("%d",&n)!=EOF){
        printf("n: %d",n);
        for (int i=0; i<n; i++) {
            scanf("%d",&buf[i]);
        }
        sort(buf,buf+n,cmp);//使用该重载形式,我们表明将要使用自己定义的排列规
        for (int i=0; i<n; i++) {
            printf("%d\n",buf[i]);
        }
        printf("\n");
    }
    return 0;
}
*/

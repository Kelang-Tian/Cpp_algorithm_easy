//
//  no2_5_how_many_student.cpp
//  chapter_2
//
//  Created by Kelang-Tian on 2019/1/19.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//

/*
 hash的使用
读入 N 名学生的成绩，将获得某一给定分数的学生人数输出。

 样例输入:
 3
 80 60 90
 60
 2
 85 66
 0
 5
 60 75 90 55 75 75
 0
 
 样例输出:
 1
 0
 2
 */
/*
#include <stdio.h>
int main(){
    int n;
    while (scanf("%d\n",&n)!=EOF) {
        int Hash[101] = {0};    //别忘记初始化
        for (int i=0; i<n; i++) {
            int x;
            scanf("%d",&x);
            Hash[x]++;
        }
        int x;
        scanf("%d",&x);
        printf("%d\n",Hash[x]);
    }
    return 0;
}
*/

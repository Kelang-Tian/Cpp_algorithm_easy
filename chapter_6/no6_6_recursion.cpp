//
//  no6_6_recursion.cpp
//  chapter_6
//
//  Created by Kelang-Tian on 2019/1/27.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
The GeoSurvComp geologic survey company is responsible for
 detecting underground oil deposits. GeoSurvCompworks with
 one large rectangular region of land at a time, and creates
 a grid that divides the land intonumerous square plots. It
 then analyzes each plot separately, using sensing equipment
 to determine whether or not the plot contains oil. A plot
 containing oil is called a pocket. If two pockets are adjacent,
 then they are part of the same oil deposit. Oil deposits can
 be quite large and may contain numerous pockets. Your job
 is to determine how many different oil deposits are contained in a grid.

The input file contains one or more grids. Each grid begins
 with a line containing m and n, the number of rows
 and columns in the grid, separated by a single space.
 If m = 0 it signals the end of the input; otherwise 1
 <= m <= 100 and 1 <= n <= 100. Following this are m lines
 of n characters each (not counting the end-of-line
 characters). Each character corresponds to one plot, and
 is either `*', representing the absence of oil, or
 `@', representing an oil pocket.

 
 For each grid, output the number of distinct oil deposits.
 Two different pockets are part of the same oil
 deposit if they are adjacent horizontally, vertically,
 or diagonally. An oil deposit will not contain more
 than 100 pockets.

 
 1 1
 *
 
 3 5
 *@*@*
 **@**
 *@*@*
 
 1 8
 @@****@*
 
 5 5
 ****@
 *@@*@
 *@**@
 @@@*@
 @@**@
 
 0 0
 
 output:
 0
 1
 2
 2
 
 */

/*
#include <stdio.h>
char maze[100][100];
bool mark[100][100];
int n,m;
int go[][2] = {
    1,0,
    -1,0,
    0,1,
    0,-1,
    1,1,
    1,-1,
    -1,-1,
    -1,1
};
void DFS(int x,int y){
    for (int i=0; i<8; i++) {
        int nx = x + go[i][0];
        int ny = y + go[i][1];
        if (nx > n||nx < 1 || ny > m || ny < 1) continue;
        if(maze[nx][ny] == '*') continue;
        if (mark[nx][ny] == true) continue;
        mark[nx][ny] = true;
        DFS(nx,ny);
    }
    return ;
}

int main(){
    while (scanf("%d %d",&n,&m)!= EOF) {
        if(n==0 && m==0) break;
        for (int i=1; i<= n; i++) {
            scanf("%s",maze[i] + 1);                    //maze这里是数组 maze[i]是首地址
        }
        for (int i=1; i <=n; i++) {
            for (int j=1; j<=m; j++) {
                mark[i][j] = false;
            }
        }
        
        int ans = 0;
        for (int i = 1; i<=n; i++) {
            for (int j = 1; j <= m; j++) {
                if(mark[i][j] == true) continue;
                if(maze[i][j] == '*') continue;
                DFS(i,j);
                ans++;
            }
        }
        printf("%d\n",ans);
        
    }
    return 0;
    
}
*/

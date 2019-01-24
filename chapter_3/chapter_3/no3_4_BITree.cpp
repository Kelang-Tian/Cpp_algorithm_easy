//
//  no3_4_BITree.cpp
//  chapter_3
//
//  Created by Kelang-Tian on 2019/1/21.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
 题目：
 二叉树的前序、中序、后序遍历的定义: 前序遍历:对任一子树，先访问跟，然后遍历其左子树，最后遍历其右子树;
 中序遍历:对任一子树，先遍历其左子树，然后访问根，最后遍历其右子树; 后序遍历:对任一子树，先遍历其左子树，
 然后遍历其右子树，最后访问根。 给定一棵二叉树的前序遍历和中序遍历，求其后序遍历(提示:给定前序遍历与中
 序遍历能够唯一确定后序遍历)。
 
 输入：
 两个字符串，其长度 n 均小于等于 26。第一行为前序遍历，第二行为中序遍历。二叉树中的结点名称以大写字母表
 示:A，B，C....最多 26 个结点。
 
 输出：
 输入样例可能有多组，对于每组测试样例，输出一行，为后序遍历的字符串。
 
 样例：
 ABC
 BAC
 FDXEAG
 XDEFAG
 
 样出：
 BCA
 XEDGAF
 
 */

/*
#include <stdio.h>
#include <string.h>
struct Node{
    Node *lchild;
    Node *rchild;
    char c;
}Tree[50];
int loc;//静态数组中已经分配的节点个数

Node *create(){
    Tree[loc].lchild = Tree[loc].rchild = NULL;
    return &Tree[loc++];                         //返回指针，且loc++
}
char str1[30], str2[30];

void postorder(Node *T){
    if (T->lchild != NULL) {
        postorder(T->lchild);
    }
    if (T->rchild!= NULL) {
        postorder(T->rchild);
    }
    printf("%c",T->c);
}

Node *build(int s1,int e1,int s2,int e2){
    Node * ret = create();
    ret->c = str1[s1];
    int rootidx = 0;
    for (int i=s2 ; i<=e2; i++) {
        if (str2[i] == str1[s1]) {
            rootidx = i;
            break;
        }
    }
    if (rootidx!=s2) {
        ret->lchild = build(s1+1, s1+rootidx-s2, s2, rootidx-1);
    }
    if (rootidx!=e2) {
        ret->rchild = build(s1+rootidx-s2+1, e1, rootidx+1, e2);
    }
    return ret;
}
int main(){
    while (scanf("%s",str1)!=EOF) {
        scanf("%s",str2);
        printf("str1 %s\nstr2 %s\n",str1,str2);
        loc = 0;
        int L1 = strlen(str1);
        int L2 = strlen(str2);
        Node * T = build(0, L1-1, 0, L2-1);
        postorder(T);
        printf("\n");
        strcpy(str1,"");
        strcpy(str2,"");
    }
    return 0;
}

*/

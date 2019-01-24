//
//  no3_5_binary_sort_tree.cpp
//  chapter_3
//
//  Created by Kelang-Tian on 2019/1/21.
//  Copyright © 2019 Kelang-Tian. All rights reserved.
//
/*
 输入一系列整数，建立二叉排序数，并进行前序，中序，后序遍历。
 
 输入:输入第一行包括一个整数 n(1<=n<=100)。接下来的一行包括 n 个整数
 输出:
 可能有多组测试数据，对于每组数据，将题目所给数据建立一个二叉排序树，
 并对二叉排序树进行前序、中序和后序遍历。每种遍历结果输出一行。每行最后
 一个数据之后有一个空格。

 样例输入:
 5
 1 6 5 9 8
 样例输出:
 1 6 5 9 8
 1 5 6 8 9
 5 8 9 6 1
 
 提示:
 输入中可能有重复元素，但是输出的二叉树遍历序列中重复元素不用输出。
 */

#include <stdio.h>
#include <string.h>
struct Node{
    Node *lchild;
    Node *rchild;
    int c;
}Tree[100];

int loc;
Node *create(){
    Tree[loc].lchild = Tree[loc].rchild = NULL;
    return &Tree[loc++];
}
void postorder(Node *T){
    if(T->lchild!=NULL)
        postorder(T->lchild);
    if(T->rchild!=NULL)
        postorder(T->rchild);
    printf("%d ",T->c);
}

void inorder(Node *T){
    if (T->lchild!=NULL)
        inorder(T->lchild);
    printf("%d ",T->c);
    if (T->rchild!=NULL)
        inorder(T->rchild);
}
void preorder(Node *T){
    printf("%d ",T->c);
    if (T->lchild!=NULL)
        preorder(T->lchild);
    if (T->rchild!=NULL)
        preorder(T->rchild);
}

Node *insert(Node *T,int x){
    if(T == NULL){
        T = create();
        T->c = x;
        return T;
    }
    else if(x < T->c)
        T->lchild = insert(T->lchild, x);
    else if(x> T->c)
        T->rchild = insert(T->rchild, x);
    return T;
}

int main(){
    int n;
    while (scanf("%d\n",&n)!=EOF) {
        loc = 0;
        Node* T=NULL;
        for (int i=0; i<n; i++) {
            int x;
            scanf("%d",&x);
            T = insert(T, x);
        }
        printf("preorder:");
        preorder(T);
        printf("\ninorder:");
        inorder(T);
        printf("\npostorder:");
        postorder(T);
        printf("\n");
        
    }
    return 0;
}

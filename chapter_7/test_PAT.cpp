#include <stdio.h>
#include <string.h>
using namespace std;

struct E{
    int add;
    int data;
    int next;
}list[1000];
E sort[1000];

void reverse(int a,int b,E list1[]){
    for(int i = 0; i <= (b-a)/2; i++){
        E tmp = list1[i + a];
        list1[i + a] = list1[b - i];
        list1[b - i] = tmp;
        //printf("111111");
    }
    //printf("333333");
}

int main(){
    int s,num,k;      //start num k to inversion
    scanf("%d %d %d",&s,&num,&k);
    for(int i = 0; i < num; i++)
    {
        scanf("%d %d %d",&list[i].add,&list[i].data,&list[i].next);
    }
    
    for(int i = 0; i < num; i++)
    {
        if (list[i].add == s) {
            sort[0] = list[i];
            break;
        }
    }
    
    for(int i = 1; i < num; i++)
    {
        int tmp = sort[i - 1].next;
        for(int j = 0; j < num; j++)
        {
            if (list[j].add == tmp) {
                sort[i] = list[j];
            }
        }
    }
    
    int count = num/k;
    for(int i = 0; i < count; i++)
    {
        reverse(i*k,(i+1)*k-1,sort);
        //printf("22222\n");
    }
    
    for(int i = 0; i < num; i++)
    {
        if (sort[i].next == -1) {
            printf("%05d %d %d\n",sort[i].add,sort[i].data,sort[i].next);
        }else{
            printf("%05d %d %05d\n",sort[i].add,sort[i].data,sort[i].next);
        }
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int i;///1973年的C發明者的寫法1989年ANSI C
    for(i=0;i<=3;i++){
        printf("有幾次呢?\n");
    }///課本的寫法不好
    ///1998/1999 新版的C++/C寫法
    for(int i=0;i<3;i++){
        printf("老師推薦的寫法,有幾次?\n");
    }///會跑3次
}


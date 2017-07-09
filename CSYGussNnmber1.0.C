/*
*******************************************************************************************
Name    : csyGuessNum.c
作者    ：陈森尧
联系方式：1603057444
编程时间：2017-07-05
游戏简介：由计算机随机生成一个不大于maxnumber的数answer，玩家输入一个数字x，计算机判断x与
answer大小关系，x<answer,输出answer big；x<answer,输出answer small；两数字相等，输出bingo。
游戏版本：v1.0
*******************************************************************************************
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    FILE *fp;
    char a;
    if ((fp=fopen("Readme.txt","r"))==NULL){
        printf("Can not open file!");
        exit(0);
    }
    while((a=fgetc(fp))!=EOF)
        putchar(a);
    fclose(fp);
    int maxnumber=100;
    int answer;
    int x;
    srand( (unsigned)time( NULL ) );
    answer=rand()%100;
    printf ("请输入1-99的数字\n");
    scanf("%d",&x);
    while (x!=answer){
        if (x<answer)
            printf ("number small\n");
        else
            printf ("number big\n");
            scanf("%d",&x);
    }
    printf ("bingo");
    return 0;
}





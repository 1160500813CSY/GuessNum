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
    FILE *fp1;
    FILE *fp2;
    char a;
    if ((fp1=fopen("Readme.txt","r"))==NULL){
        printf("Can not open Readme!\n");
        exit(0);
    }
    while((a=fgetc(fp1))!=EOF)
        putchar(a);
    fclose(fp1);
     if ((fp2=fopen("Readme1.1.txt","w"))==NULL){
        printf("Can not open Readme1.1!\n");
        exit(0);
    }
    int maxnumber=100;
    int answer;
    int x;
    int i=0;
    srand( (unsigned)time( NULL ) );
    answer=rand()%100;
    printf ("请输入0-99的数字\n");
    fprintf(fp2,"请输入0-99的数字\n");
    scanf("%d",&x);
    fprintf(fp2,"%d\n",x);
    while (x!=answer){
        if (x<answer)
		{
            printf ("number small\n");
            fprintf(fp2,"number small\n");}
        else
            printf ("number big\n");
            fprintf(fp2,"number big\n");
            scanf("%d",&x);
              fprintf(fp2,"%d\n",x);
    }
    printf ("bingo");
    fprintf(fp2,"bingo");
    system("cls");
    return 0;
}

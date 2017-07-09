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
     if ((fp2=fopen("Readme1.2.txt","w"))==NULL){
        printf("Can not open Readme1.1!\n");
        exit(0);
    }
    int i=0,j=0,answer,x,n,maxnumber,mychoose1,mychoose2,standard;
     putchar(a);

    aa: printf("\n             菜单  \n1.begin   2.end  \n");
     scanf("%d",&mychoose1);
     switch(mychoose1){
 case 1:  printf("    请选择难易程度\n1.easy  2.simple   3.hard   4.自定义\n");
     scanf("%d",&standard);
 switch(standard){
 	case 1:n=pow(10,2);break;
 	case 2:n=pow(10,3);break;
 	case 3:n=pow(10,4);break;
 	case 4:printf("give the biggest number？\n0~%d");
 	       scanf("%d ",&maxnumber);
			while(maxnumber>0){
				maxnumber/=10;
				j++;
			} n=pow(10,j);break;
 }   
     srand( (unsigned)time( NULL ) );
     answer=rand()%n;
    
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
            i++;
            scanf("%d",&x);
              fprintf(fp2,"%d\n",x);
    }
    printf ("bingo ,you have tried for %d time\n",i);
    fprintf(fp2,"bingo ,you have tried for %d time\n",i);
     printf("1.try it again  2.end");
     scanf("%d",&mychoose2);
     switch(mychoose2){
  	case 1:goto aa;break;
  	case 2:fclose(fp2);break;
	 }break;
case 2:fclose(fp2);break;
    
    return 0;
}
}

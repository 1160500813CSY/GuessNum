/*
*******************************************************************************************
Name    : csyGuessNum.c
����    ����ɭҢ
��ϵ��ʽ��1603057444
���ʱ�䣺2017-07-05
��Ϸ��飺�ɼ�����������һ��������maxnumber����answer���������һ������x��������ж�x��
answer��С��ϵ��x<answer,���answer big��x<answer,���answer small����������ȣ����bingo��
��Ϸ�汾��v1.0
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

    aa: printf("\n             �˵�  \n1.begin   2.end  \n");
     scanf("%d",&mychoose1);
     switch(mychoose1){
 case 1:  printf("    ��ѡ�����׳̶�\n1.easy  2.simple   3.hard   4.�Զ���\n");
     scanf("%d",&standard);
 switch(standard){
 	case 1:n=pow(10,2);break;
 	case 2:n=pow(10,3);break;
 	case 3:n=pow(10,4);break;
 	case 4:printf("give the biggest number��\n0~%d");
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
    printf ("������0-99������\n");
    fprintf(fp2,"������0-99������\n");
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

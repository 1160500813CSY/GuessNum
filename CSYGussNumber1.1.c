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
            scanf("%d",&x);
              fprintf(fp2,"%d\n",x);
    }
    printf ("bingo");
    fprintf(fp2,"bingo");
    system("cls");
    return 0;
}

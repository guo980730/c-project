/*
 *  ����˵������дabs��labs����
 *  ���ߣ�guojn
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int ABS(const int j);
long LABS(const long j);

void main()
{
  int num=0;
  long lnum=0;

  printf("������һ��int������:");
  scanf("%d",&num);
  printf("������һ��long������:");
  scanf("%ld",&lnum);
  
  printf("int���ݵľ���ֵΪ:%d\n",ABS(num));
  printf("long���ݵľ���ֵΪ:%ld\n",LABS(lnum));
}
//int����ת����ֵ
int ABS(const int j)
{
  if(j>=0)
    return j;
  else
    return 0-j;
}
//long����ת����ֵ
long LABS(const long j)
{
  if(j>=0)
    return j;
  else
    return 0-j;
}

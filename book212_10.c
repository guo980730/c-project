/*
 *  ����˵��������52�������(1-52)������������У����ظ�����ʾ����
 *  ���ߣ�guojn
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void main()
{
  int array[52];
  int i=0;
  int j=0;
  int tem=0;
  int flag=0;
  srand(time(0));
  for(i=0;i<52;)
  {
    flag=0;
    tem=rand()%52+1;
    for(j=0;j<i;j++)
    {
      if(tem==array[j])
        flag=1;
    }
    if(flag==1) 
      continue;
    array[i++]=tem;
  }
  printf("���ɵ�52����������£�\n");
  for(i=0;i<52;i++)
  {
    if(i%13==0  &&  i!=0)
      printf("\n");
    printf(" %02d",array[i]);
  }
  printf("\n");
}

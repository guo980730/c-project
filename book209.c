/*
 *  ����˵�������������Ͷ���
 *  ���ߣ�guojn
 */
#include<stdio.h>
#include<string.h>
#include"pub.h"

void main()
{
  int x=0,y=0;
  
  printf("����������������");
  scanf("%d %d",&x,&y);

  printf("%d��%d��ȣ�%d����\n",x,y,max(x,y));
  printf("%d��%d��ȣ�%d��С��\n",x,y,min(x,y));
  
}

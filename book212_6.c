/*
 *  ����˵���������ַ�ת����
 *  ���ߣ�guojn
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"pub.h"

void main()
{
  char c;
  printf("������һ�������ַ���");
  scanf("%c",&c);
  printf("�ַ��Ķ�Ӧ����Ϊ��%d\n",ctoi(c));
  printf("�ַ��Ķ�Ӧ����+1Ϊ��%d\n",ctoi(c)+1);
}

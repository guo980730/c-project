/*
 *  ����˵��������һ�������ַ�������������ּӺ�
 *  ���磺���롰"123586"������ 25
 *  ���ߣ�guojn
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"pub.h"

int strSum(const char *s);

void main()
{
  char str[21];
  memset(str,0,sizeof(str));
  printf("������һ�������ַ�����");
  scanf("%s",str);
  printf("���ַ��������ּӺ�Ϊ��%d\n",strSum(str));
}

//����һ�������ַ�������������ּӺ�
int strSum(const char *s)
{
  int i=0;
  int sum=0;
  while(s[i]!='\0')
  {
    sum=sum+ctoi(s[i]);
    i++; 
  }
  return sum;
}

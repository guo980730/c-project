/*
 *  ����˵������дATOI��ATOL�⺯��
 *  ���ߣ�guojn
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"pub.h"

int ATOI(const char *nptr);
long ATOL(const char *nptr);

void main()
{
  char str[25];
  memset(str,0,sizeof(str));
  printf("������һ�������ַ�����");
  scanf("%s",str);
  printf("�ַ���תintΪ��%d\n",ATOI(str));
  printf("�ַ���תlongΪ��%ld\n",ATOL(str));
}
int ATOI(const char *nptr)
{
  int i=0;
  int num=0;
  if(nptr[0]=='-')
    i=1;
  while(nptr[i]!='\0')
  {
    num=num*10+ctoi(nptr[i]);
    i++;
  }
  if(nptr[0]=='-')
    return 0-num;
  else
    return num;
}
long ATOL(const char *nptr)
{
  int i=0;
  long num=0;
  if(nptr[0]=='-')
    i=1;
  while(nptr[i]!='\0')
  {
    num=num*10+ctoi(nptr[i]);
    i++;
  }
  if(nptr[0]=='-')
    return 0-num;
  else
    return num;
}

/*
 *  ����˵��������һ���ַ�����Ȼ����atoi����ת��int��+100�����
 *  ���ߣ�guojn
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void main()
{
  char str[20];
  memset(str,0,sizeof(str));
  printf("������һ�������ַ�����");
  scanf("%s",str);
  
  printf("strת��Ϊint+100��Ϊ��%d\n",atoi(str)+100);
}

/*
 * ����˵��������һ�����10���ַ��������飬���������
 * ���ߣ�guojn
*/
#include<stdio.h>
#include<string.h>

void main()
{
  char str[10][31];
  int  i=0;
  memset(str,0,sizeof(str));
  for(i=0;i<10;i++)
  {
    printf("�������%d���ַ�����",i+1);
    scanf("%s",str[i]);
  }
  for(i=0;i<10;i++)
  {
    printf("��%d���ַ���Ϊ��%s\n",i+1,str[i]);
  }
}

/*
 * ����˵���������ַ�������,�����ÿ���ַ�
 * ���ߣ�guojn
*/
#include<stdio.h>
#include<string.h>

void main()
{
  int i=0;
  int len=0;
  char s1[100];
  memset(s1,0,sizeof(s1));
  printf("������һ���ַ�����");
  scanf("%s",s1);
  while(s1[len]!='\0')
  {
    printf(" %c ",s1[len]);
    len++;
  }
  printf("\n�����ַ����ĳ���Ϊ��%d\n",len);
}

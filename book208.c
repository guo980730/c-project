/*
 * ����˵���������ַ�������
 * ���ߣ�guojn
*/
#include<stdio.h>
#include<string.h>

void main()
{
  int len=0;
  char s1[100];
  memset(s1,0,sizeof(s1));
  printf("������һ���ַ�����");
  scanf("%s",s1);
  while(s1[len]!=0)  //���='\0'Ҳ����
  {
    len++;
  }
  printf("�����ַ����ĳ���Ϊ��%d\n",len);
}

/*
 * ����˵����if��ʾ
 * ���ߣ�guojn
*/
#include<stdio.h>
#include<string.h>

void main()
{
  int age=0;
  printf("������������䣺");
  scanf("%d",&age);
  if(age<0)
    printf("����Ƿ���\n");
  else if(age<=6)
    printf("�������ڶ��׶�԰��ѧ��ǰ��\n");
  else if(age<=12)
    printf("�������ڶ�Сѧ��\n");
  else if(age<=15)
    printf("�������ڶ����У�\n");
  else if(age<=18)
    printf("�������ڶ����У�\n");
  else if(age>18)
    printf("�������ڶ���ѧ���ѿ�ʼ������\n");
}

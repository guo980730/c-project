/*
 *  ����˵����дһ������������Χ�ж����
 *  ���ߣ�guojn
 */
#include<stdio.h>
#include<string.h>
int checkSc(const int num);

void main()
{
  int len=0;
  int sc=0;
  printf("������һ����Χ���ȣ�cm����");
  scanf("%d",&len);
  sc=checkSc(len);
  /*
  if(sc==0)
    printf("����Ƿ���\n");
  else
    printf("(1-����2-������3-����)�������Ϊ��%d\n",sc);
  */
  switch(sc)
  {
    case 0: printf("����Ƿ���\n");       break;
    case 1: printf("�������Ϊ������\n"); break;
    case 2: printf("�������Ϊ������\n"); break;
    case 3: printf("�������Ϊ������\n"); break;
  }
}
//������������Χ��cm���ж���ģ�0-�Ƿ���1-����2-������3-����
int checkSc(const int num)
{
  int sc=0;
  if(num<30)
    sc=0;
  if((num>=30)  && (num<60))
    sc=1;
  if((num>=60) && (num<85))
    sc=2;
  if(num>=85)
    sc=3; 
  return sc;
}

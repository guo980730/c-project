/*
 * ����˵����ѭ�����continue��break��ʾ
 * ���ߣ�guojn
*/
#include<stdio.h>
#include<string.h>


void main()
{
  int num=0;
  int sum=0;
  int time=0;
  while(1)
  {
    printf("������һ������(0-�˳�)��");
    scanf("%d",&num);
    if(num>100)
      continue;
    if(num>0&&num<=100)
    {
      sum=sum+num;
      time++;
    }
    if(num==0)
      break;
  }
  printf("��Ч���ֹ���%d�����ܺͣ�%d \n",time,sum);
}

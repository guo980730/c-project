/*
 * ����˵�����ۼ��������ݣ��ܺʹ���5000�˳�ѭ��
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
    printf("������һ�����֣�");
    scanf("%d",&num);
    sum=sum+num;
    time++;
    if(sum>=5000)
      break;
  }
  printf("sum=%d,������%d�Ρ�\n",sum,time);
}

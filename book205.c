/*
 * ����˵������ʾ�����
 * ���ߣ�guojn
*/
#include<stdio.h>
#include<string.h>

int main()
{
  int num1,num2;
  num1=num2=0;
  printf("����������������");
  scanf("%d %d",&num1,&num2);
  printf("sizeof int:%d\n",sizeof num1);
  printf("��������ӣ�%d\n",num1+num2);
  printf("�����������%d\n",num1-num2);
  printf("��������ˣ�%d\n",num1*num2);
  printf("�����������%lf\n",(double)num1/num2);
  printf("������ȡ�ࣺ%d\n",num1%num2);
}

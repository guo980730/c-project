/*
 *  ����˵������дPOW������ʵ����һ������n����
 *  ���ߣ�guojn
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

long POW (const int x, const int y);

void main()
{
  int x=0,y=0;
  printf("��x^y(�ݲ�֧��yΪ����)��������x��y��ֵ��");
  scanf("%d %d",&x,&y);
  printf("%d^%d=%ld\n",x,y,POW(x,y));
}
//ʵ����һ������n���ݣ��ݲ�֧��yΪ����
long POW (const int x, const int y)
{
  int i=0;
  long res=1;
  for(i=0;i<y;i++)
  {
    res=res*x;
  }
  return res;
}

/*
 * ����˵�������������10λѧ����ƽ���ɼ�
 * ���ߣ�guojn
*/
#include<stdio.h>
#include<string.h>

void main()
{
  double score[10];
  double sum=0;
  int i;
  memset(score,0,sizeof(score));
  for(i=0;i<10;i++)
  {
    printf("�������%dλѧ���ĳɼ���",i+1);
    scanf("%lf",&score[i]);
    sum=sum+score[i];
  }
  printf("������ƽ���ɼ�Ϊ%lf\n",sum/10);
}

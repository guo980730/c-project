/*
 * ����˵�����ö�ά���������������࣬ÿ��8��ѧ���ģ�ÿ�����ƽ���ɼ����꼶ƽ���ɼ�
 * ���ߣ�guojn
*/
#include<stdio.h>
#include<string.h>

void main()
{
  double score[2][8];
  double sum[2];
  int i=0;
  int j=0;
  for(i=0;i<2;i++)
  { 
    sum[i]=0;
    for(j=0;j<8;j++)
    {
      printf("������%d���%dλѧ���ĳɼ���",i+1,j+1);
      scanf("%lf",&score[i][j]);
      sum[i]=sum[i]+score[i][j];
    }
    printf("%d���ƽ���ɼ�Ϊ%lf\n",i+1,sum[i]/8);
  }
  printf("�꼶��ƽ���ɼ�Ϊ%lf\n",i,(sum[0]+sum[1])/16);
}

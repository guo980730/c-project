/*
 * ����˵������ά���飬ĳѧУ�������꼶��ÿ���꼶�����࣬
 * ÿ������4��ѧ��,����ɼ�������࣬�꼶��ȫУƽ���ɼ���
 * ���ߣ�guojn
*/
#include<stdio.h>
#include<string.h>

void main()
{
  double score[2][3][4];
  double sum[3];      //sum[0]-ȫУ��sum[1]-�꼶��sum[2]-�༶
  int i,j,k;
  memset(score,0,sizeof(score));
  memset(sum,0,sizeof(sum));
  sum[0]=0;
  for(i=0;i<2;i++)
  {
    sum[1]=0;
    for(j=0;j<3;j++)
    {
      sum[2]=0;
      for(k=0;k<4;k++)
      {
	printf("������%d�꼶%d��%d��ѧ���ķ�����",i+1,j+1,k+1);
	scanf("%lf",&score[i][j][k]);	
	sum[2]=sum[2]+score[i][j][k];
      }
      printf("%d�꼶%d��ƽ����Ϊ��%lf\n",i+1,j+1,sum[2]/4);
      sum[1]=sum[1]+sum[2];
    }
    sum[0]=sum[0]+sum[1];
    printf("%d�꼶ƽ����Ϊ��%lf\n",i+1,sum[1]/12); //3*4
  }
  printf("ȫУƽ����Ϊ:%lf\n",sum[0]/24);  //2*3*4
}

/*
 *  ����˵�����������⺯��ʹ�ò���
 *  ���ߣ�guojn
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

void main()
{
  /*
  double dd=0;
  printf("������һ��double���ݣ�");
  scanf("%lf",&dd);
  */
  
  char d[21];
  double ip=0;
  double di=0;
  memset(d,0,sizeof(d));
  printf("������һ��double�ַ�����");
  scanf("%s",d);
  
  double dd=atof(d);
  printf("תΪdoubleΪ��%lf\n",dd);
  printf("����ֵΪ��%lf\n",fabs(dd));
  printf("��������Ϊ��%lf\n",round(dd));
  printf("����ȡ��Ϊ��%lf\n",ceil(dd));
  printf("����ȡ��Ϊ��%lf\n",floor(dd));
  printf("1.78��0.2�����������Ϊ��%lf\n",fmod(1.78,0.2));
  printf("2^1.5=%lf\n",pow(2,1.5));
  di=modf(dd,&ip);
  printf("С������Ϊ��%lf����������Ϊ��%lf\n",di,ip);
  printf("��ѧ��������ʾ��%e\n",dd);
}

/*
 *  ����˵������д���������ÿ⺯��
 *  ���ߣ�guojn
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

double FABS(const double x);  //double���������ֵ
double ROUND(const double x);  //double������������
double CEIL(const double x);  //double��������ȡ��
double FLOOR(const double x);  //double��������ȡ��
double MODF(double val,double *ip);  
//double���ݷֽ�ΪС�������������������ip�����У�����С����ֵ

void main()
{
  double dd=0;
  double di=0;
  double ip=0;
  printf("������һ��double���ݣ�");
  scanf("%lf",&dd);
  printf("dd����ֵΪ��%lf\n",FABS(dd));
  printf("dd��������Ϊ��%lf\n",ROUND(dd));
  printf("dd����ȡ��Ϊ��%lf\n",CEIL(dd));
  printf("dd����ȡ��Ϊ��%lf\n",FLOOR(dd));
  di=MODF(dd,&ip);
  printf("dd��������Ϊ:%lf��С������Ϊ:%lf\n",ip,di);
}

double FABS(const double x)  //double���������ֵ
{
  if(x>=0)
    return x;
  return 0-x;
}

double ROUND(const double x)  //double������������
{
  if(x>=0)
    return (int)(x+0.5);
  else
    return (int)(x-0.5);
  /*
  double di=0;
  di=fmod(x,1.0);
  if(di>=0.5)
    return x-di+1;  
  else
    return x-di;
  */
  
}

double CEIL(const double x)  //double��������ȡ��
{
  if(x>=0)
    return (int)x+1;
  else
    return (int)x;
  
  /*
  double di=0;
  di=fmod(x,1.0);
  return x-di+1;
  */
}

double FLOOR(const double x)  //double��������ȡ��
{
  if(x>=0)
    return (int)x;
  else
    return (int)x-1;
  /*
  double di=0;
  di=fmod(x,1.0);
  return x-di;
  */
}

//double���ݷֽ�ΪС�������������������ip�����У�����С����ֵ
double MODF(double val,double *ip)  
{
  *ip=(int)val;
  return val-*ip;
  /*
  double di=0;
  di=fmod(val,1.0);
  *ip=val-di;
  return di;  
  */
}

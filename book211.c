/*
 *  ����˵����ָ����ʾ
 *  ���ߣ�guojn
 */
#include<stdio.h>
#include<string.h>

void main()
{
  int i;
  double d;
  char c;
  int array[10];

  memset(array,0,sizeof(array));
  
  int *pi;
  double *pd;
  char *pc;
  
  pi=&i;
  pd=&d;
  pc=&c;
  
  printf("i��ֵΪ��%d,��ַΪ��%p\n",i,pi);
  printf("d��ֵΪ��%lf,��ַΪ��%p\n",d,pd);
  printf("c��ֵΪ��%c,��ַΪ��%p\n\n",c,pc);
  
  *pd=3.14;
  *pi=10;
  *pc='A';

  printf("i��ֵΪ��%d,��ַΪ��%p\n",i,pi);
  printf("d��ֵΪ��%lf,��ַΪ��%p\n",d,pd);
  printf("c��ֵΪ��%c,��ַΪ��%p\n\n",c,pc);

  //��һ���������һ��
  printf("array��ֵΪ��%p\n",array);
  printf("&array��ֵΪ��%p\n",&array);
  printf("&array[0]��ֵΪ��%p\n",&array[0]);
}

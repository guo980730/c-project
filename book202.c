/*
 * ����˵������ʾ��������
 * ���ߣ�guojn
*/

#include<stdio.h>
#include<string.h>

int main()
{
  char name[21];
  int age;
  int day;
  double time;
  memset(name,0,sizeof(name));	//��ʼ��
  strcpy(name,"guojn");
  age= 21;
  day= 20;
  time=100.20;
  printf("�û�%s,����%d,ѧϰc���Ե�%d�죬��%.2lfСʱ��\n",name,age,day,time);
  //printf("=%d=\n",sizeof(short));
  //printf("=%d=\n",sizeof(int));
  //printf("=%d=\n",sizeof(long));
  //printf("=%d=\n",sizeof(long long));
}

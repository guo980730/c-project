/*
 *  ����˵������дһ���˿˷��Ƴ��򣬳��˴�С������52�Ż��ƣ����ϴ��
 *  	      ����4�������Ӧ����
 *  ���ߣ�guojn
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
  int array[52];
  int player[4][13];
  int i=0;
  int j=0;
  int tem=0;
  int flag=0;
  memset(array,0,sizeof(array));
  memset(player,0,sizeof(player));
//����һ��52�����ݵ��������
  printf("��ʼϴ�ƣ�\n");
  srand(time(0));
  for(i=0;i<52;)
  {
    flag=0;
    tem=rand()%52+1;
    for(j=0;j<i;j++)
    {
      if(tem==array[j])
        flag=1;
    }
    if(flag==1) 
      continue;
    array[i++]=tem;
  }
  printf("��ʼ���ƣ�\n");
//����ҷ���
  /*  ��һ�ַ��Ʒ�ʽ,ÿ��ֱ�ӷ�������13��
  for(i=0;i<4;i++)
  {
    for(j=0;j<13;j++)
    {
      player[i][j]=array[i*13+j];
    }
  }
  */
  //��һ�ַ��Ʒ�ʽ��ÿ��ȡһ��
  for(i=0;i<13;i++)
  {
    player[0][i]=array[i*4+0];
    player[1][i]=array[i*4+1];
    player[2][i]=array[i*4+2];
    player[3][i]=array[i*4+3];
  }
//���4λ��ҵ���
  for(i=0;i<4;i++)
  {
    printf("��%dλ��ҵ���Ϊ��",i+1);
    for(j=0;j<13;j++)
    {
      printf(" %02d",player[i][j]);
    }
    printf("\n");
  }
}

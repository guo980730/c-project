/*
 * ����˵�������������ʾ
 * ���ߣ�guojn
*/
#include<stdio.h>
#include<string.h>

int main()
{
  int age=21;
  int hight=162;
  int flag=0;
  char name[21];
  char love[41];
  memset(name,0,sizeof(love));
  strcpy(love,"�������ԣ�"); 
  memset(name,0,sizeof(name));
  strcpy(name,"hudie");
  printf("��������������:");
  scanf("%s",name);
  printf("ȷ���밴1:");
  scanf("%d",&flag);
  if(flag==1&&strcmp(name,"hudie")==0)
    printf("%s\n",love);
  else
    printf("���ͣ�\n");
}

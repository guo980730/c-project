/*
 * ����˵�����߼�����&&��||����
 * ���ߣ�guojn
*/
#include<stdio.h>
#include<string.h>

int main()
{
  int age=0;  //����
  int hight=0;//��ߣ�cm��
  int sc=0;   //��ģ�1-������2-��ͨ��3-�ɻ�����
  int yz=0;   //��ֵ��1-���ã�2-һ�㣬3-��
  printf("�����볬Ů�����䣬��ߣ�cm������ģ�1-������2-��ͨ��3-�ɻ���������ֵ��1-���ã�2-һ�㣬3-�󣩣�");
  scanf("%d%d%d%d",&age,&hight,&sc,&yz);
  if(( (age>=18)    && (age<=30)      )&&
     ( (hight>=165) && (hight<=178)   )&&
     ( (sc==1)                        )&& 
     ( (yz==1)                        ))
  {
    printf("��ϲ����ѡ���ӣ�\n");
    return 0;
  }
  if(( (age>=18)    && (age<=30)      )&&
     ( (hight>=160) && (hight<=165)   )&&
     ( (sc==1)      || (sc==2)        )&& 
     ( (yz==2)                        ))
  {
    printf("��ϲ����ѡ��Ů��\n");
    return 0;
  }
  if(( (age>=30)    && (age<=40)      )&&
     ( (hight>=155) && (hight<=165)   )&&
     ( (sc==2)      || (sc==3)        )&& 
     ( (yz==2)                        ))
  {
    printf("��ϲ����ѡ���ۣ�\n");
    return 0;
  }
  printf("���ϸ���з��ؼң�\n");
  return 0;
}

/*
 *  ����˵������д�ַ�ת������
 *  ���ߣ�guojn
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int ISALPHA(int ch);//��ch��('A'-'Z','a'-'z')���ط�0ֵ�����򷵻�0
int ISALNUM(int ch);//��ch����ĸ�����֣����ط�0ֵ�����򷵻�0
int ISDIGIT(int ch);//��ch��('0'-'9')���ط�0ֵ�����򷵻�0
int ISLOWER(int ch);//��ch��Сд��ĸ('a'-'z')���ط�0ֵ�����򷵻�0
int ISUPPER(int ch);//��ch�Ǵ�д��ĸ('A'-'Z')���ط�0ֵ�����򷵻�0
int TOLOWER(int ch);//��ch�Ǵ�д��ĸ('A'-'Z')���ض�ӦСд��ĸ,�����ַ�����
int TOUPPER(int ch);//��ch��Сд��ĸ('a'-'z')���ض�Ӧ��д��ĸ,�����ַ�����
int ctoi(int ch);   //�������ַ�ת��Ϊ��Ӧint�������ַ�����

void main()
{
  int c='0';

  printf("������һ���ַ���");
  scanf("%c",&c);

  printf("�Ƿ���ĸ��%d\n",ISALPHA(c));
  printf("�Ƿ���ĸ�����֣�%d\n",ISALNUM(c));
  printf("�Ƿ����֣�%d\n",ISDIGIT(c));
  printf("תΪ���֣�%d,��1Ϊ��%d\n",ctoi(c),ctoi(c)+1);
  printf("�Ƿ�Сд��ĸ��%d\n",ISLOWER(c));
  printf("�Ƿ��д��ĸ��%d\n",ISUPPER(c));
  printf("ת��д��ĸ��%d - %c\n",c,TOLOWER(c));
  printf("תСд��ĸ��%d - %c\n",c,TOUPPER(c));
  
}
int ISALPHA(int ch)//��ch��('A'-'Z','a'-'z')���ط�0ֵ�����򷵻�0
{
  if(ch>='a'&&ch<='z'  ||  ch>='A'&&ch<='Z') return 1;
  return 0;
}

int ISALNUM(int ch)//��ch����ĸ�����֣����ط�0ֵ�����򷵻�0
{
  if(ch>='a'&&ch<='z'  ||  ch>='A'&&ch<='Z'  ||  ch>='0'&&ch<='9')   
     return 1;
  return 0;
}

int ISDIGIT(int ch)//��ch��('0'-'9')���ط�0ֵ�����򷵻�0
{
  if(ch>='0'&&ch<='9')   
     return 1;
  return 0;
}

int ISLOWER(int ch)//��ch��Сд��ĸ('a'-'z')���ط�0ֵ�����򷵻�0
{ 
  if(ch>='a'&&ch<='z')   
     return 1;
  return 0;
}

int ISUPPER(int ch)//��ch�Ǵ�д��ĸ('A'-'Z')���ط�0ֵ�����򷵻�0
{
  if(ch>='A'&&ch<='Z')   
     return 1;
  return 0;
}

int TOLOWER(int ch)//��ch�Ǵ�д��ĸ('A'-'Z')���ض�ӦСд��ĸ,�����ַ�����
{
  if(ch>='A'&&ch<='Z')   
     return ch+32;
  return ch;
}

int TOUPPER(int ch)//��ch��Сд��ĸ('a'-'z')���ض�Ӧ��д��ĸ,�����ַ�����
{
  if(ch>='a'&&ch<='z')   
     return ch-32;
  return ch;
}

int ctoi(int ch)   //�������ַ�ת��Ϊ��Ӧint�������ַ�����
{
  if((ch>='0')  &&  (ch<='9'))
    return ch-'0';
  return ch;
}

#include <stdio.h>

void encryption(char *in_file,char *out_file,int n);      /*��ӡ�򿪵��ļ��е����ݲ����ܲ��Ѽ��ܽ���ŵ��½��ļ���*/
void output(char *out_file);                              /*��������ļ��е����ݴ�ӡ*/

void main()
{
     char in_file[50], out_file[50];
	 int n;
     printf(" input in file name:\n");
     gets(in_file);
     printf(" input out file name:\n");
     gets(out_file);
	 printf("��������Կ:\n");
	 scanf("x%",&n);
     
	 printf("\nһ.�ļ��򿪽������:\n\n");
     encryption(in_file,out_file,n);

	 printf("\n");

	 printf("\n��.�ļ�����������:\n\n");
     output(out_file);

	 printf("\n\n");

}

void encryption(char *in_file,char *out_file,int n)
{
	FILE *in,*out;
	char ch;
     in = fopen( in_file, "rb");                     /*�Զ�����ֻ����ʽ��*/
     out = fopen( out_file, "wb");                   /*�Զ����Ʒ�ʽ�����ļ�*/
     if( in == NULL) 
	 {   printf("Cannot open the file....\n");
		 return;
	 }

	 if(out==NULL)
	 {
		 printf("Cannot creat the file....\n");
		 return;
	 }

     ch = fgetc(in);
     while( ch != EOF )                /*���ļ�û�н���*/
     {    putchar(ch);                /*��ӡ�ַ�*/
          ch = ch^n;                  /*�������*/
          fputc( ch, out );           /*���������������ļ���*/
          ch = fgetc(in);
      }
      fclose(in);
      fclose(out);
}

void output(char *out_file)
{   
	FILE *fp;
	char ch;
	fp=fopen( out_file, "rb");
    ch = fgetc(fp);
    while( ch != EOF)
	{   
		putchar(ch);
		ch = fgetc(fp);	 
	}

	fclose(fp);
}
   
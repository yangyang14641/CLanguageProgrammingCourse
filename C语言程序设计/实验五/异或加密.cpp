#include <stdio.h>

void encryption(char *in_file,char *out_file,int n);      /*打印打开的文件中的内容并加密并把加密结果放到新建文件中*/
void output(char *out_file);                              /*把输出的文件中的内容打印*/

void main()
{
     char in_file[50], out_file[50];
	 int n;
     printf(" input in file name:\n");
     gets(in_file);
     printf(" input out file name:\n");
     gets(out_file);
	 printf("请输入密钥:\n");
	 scanf("x%",&n);
     
	 printf("\n一.文件打开结果如下:\n\n");
     encryption(in_file,out_file,n);

	 printf("\n");

	 printf("\n二.文件输出结果如下:\n\n");
     output(out_file);

	 printf("\n\n");

}

void encryption(char *in_file,char *out_file,int n)
{
	FILE *in,*out;
	char ch;
     in = fopen( in_file, "rb");                     /*以二进制只读方式打开*/
     out = fopen( out_file, "wb");                   /*以二进制方式创建文件*/
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
     while( ch != EOF )                /*若文件没有结束*/
     {    putchar(ch);                /*打印字符*/
          ch = ch^n;                  /*异或运算*/
          fputc( ch, out );           /*将异或结果放入输出文件中*/
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
   
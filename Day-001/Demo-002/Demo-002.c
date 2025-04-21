// 课后作业.
// 0. 为什么我们说计算机其实是“二傻子”？    -----因为计算机只能读懂二进制指令。
// 1. CPU 唯一认识的语言是什么语言？    -----是二进制机器码。
// 2. C 语言编写的源代码转换为汇编语言的过程叫什么？    -----编译
// 3. 编译型语言和解释型语言的本质区别是什么？  -----编译性语言，会将代码编译为机器码，而解释型语言，会将代码编译为中间码(如JAVA的字节码)，在解释器中运行的时候，再转为机器码。
// 4. 在 Linux 系统上用 C 语言编译的可执行程序，是否能在 Windows 系统上执行？   ----不可以
// 5. 解释型编程语言是如何实现跨平台的？    ----通过将代码编译为中间码，再在解释器虚拟机中执行的方式，实现夸平台.
// 6. 莫斯密码的原理其实是什么？    ----？？？？  查表
// 7. 视频中小甲鱼“故弄玄虚”的那段密文还原后是什么内容（中文）？    ----？？？？

// 课后练习,完成一个C语言记录代码行数程序的抄录.
#include <io.h>
#include <direct.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX        256

long total;

int countLines(const char *filename);
void findAllCodes(const char *path);
void findALLFiles(const char *path);

int countLines(const char *filename)
{
        FILE *fp;
        int count = 0;
        int temp;
        
        if ((fp = fopen(filename, "r")) == NULL) 
        {
                fprintf(stderr, "Can not open the file：%s\n", filename);
                return 0;
        }
        
        while ((temp = fgetc(fp)) != EOF)
        {
                if (temp == '\n')
                {
                        count++;
                }
        }
        
        fclose(fp);
        
        return count;
}

void findAllCodes(const char *path)
{
        struct _finddata_t fa;
        long handle;
        char thePath[MAX], target[MAX];
        
        strcpy(thePath, path);
        if((handle = _findfirst(strcat(thePath, "/*.c"), &fa)) != -1L)
        {
                do
                {
                        sprintf(target, "%s/%s", path, fa.name);
                        total += countLines(target);
                }while (_findnext(handle, &fa) == 0);
        }
    
        _findclose(handle);
}

void findALLDirs(const char *path)
{
        struct _finddata_t fa;
        long handle;
        char thePath[MAX];
        
        strcpy(thePath, path);
        if((handle = _findfirst(strcat(thePath, "/*"), &fa)) == -1L)
        {
                fprintf(stderr, "The path %s is wrong!\n",path);
                return;
        }
    
        do
        {        
                if (!strcmp(fa.name, ".") || !strcmp(fa.name, ".."))
                        continue;
                    
                if( fa.attrib == _A_SUBDIR)
                {        
                        sprintf(thePath, "%s/%s", path, fa.name);
                        findAllCodes(thePath);
                        findALLDirs(thePath);
                }
        }while (_findnext(handle, &fa) == 0);
    
        _findclose(handle);   
}

int main()
{
        char path[MAX] = ".";
        
        printf("计算中...\n");
        
        findAllCodes(path);
        findALLDirs(path);
        
        printf("目前你总共写了 %ld 行代码！\n\n", total);
        system("pause");
        
        return 0;
}
// 第四课-变量-课后练习
// 0. 程序处理的两种基本数据对象是什么？    ----变量和常量
// 1. 变量由什么组成？  ----变量名和变量的值  修改   变量由变量名和存储单元构成，变量名用于确定目标，存储单元用于存放变量的值。
// 2. 下边哪些是正确的变量名？  ----A、E、F、G、H、I B-变量名使用了空格 C-变量名使用了@ D-使用了数字作为变量第一个字符 J-使用了中文作为变量名 修改H也是错的，变量只能使用字母和下划线开头。
// 3. 课堂上小甲鱼介绍了 C 语言经历了 ANSI C，C99，C11 三大标准的变革，那这三大标准定义的是 C 语言的什么？  ----定义的是C语言的关键字  修改  定义了C语言的语法。
// 4. 请通俗地解释下 C 语言的关键字是什么？     ----关键字是C语言固有的指令或者说命令。
// 5. 噢，粗心的小甲鱼似乎哪里搞错了，大家快来帮帮他吧。    ----将printf错误输入成了print
// 6. 噢，粗心的小甲鱼再次犯错（拉出去斩了），大家再帮帮他吧。  ----应当是使用了错误的（  错误  修改为：这里使用了数字作为开头，定义了一个变量名。


#include <stdio.h>

int main()
{
    int a;
    int b = 3;

    a = b;
    b = b*2;

    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
    
}
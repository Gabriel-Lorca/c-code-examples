// C语言学习第14章-for循环和循环嵌套

// for循环条件中的表达式可以按照需要进行省略,但分号不能省略.
// -for(表达式一;表达式二;表达式三) 完整for循环表达式，常见正常写法。
// -for(表达式一;表达式二;) 省略表达式三，在循环体内手动更新表达式。
// -for(表达式一;;) 表达式二默认为True，循环将无限制地执行，除非在循环体内用break退出
// -for(;;)   此种写法等价于   while(1)死循环
// 分支语句的底层逻辑是：哪些语句会被执行，哪些语句不会被执行.
// 循环语句的底层逻辑是：哪些语句会被执行多少次.
#include<stdio.h>
int main(){

    for (int count = 0; count < 10; count++)
    {
        printf("%d\n",count);
    }
    
    return 0;
}
#include <stdio.h>

// 定义一个结构体 标签+成员
struct  A1{
char names[21];
int age;
char grade;
};
//声明结构体变量
struct A1 a1;

// 定义一个结构体 标签+成员+对象
struct A2 {
int age;
char grade;
} a2;


// 定义一个结构体 成员+对象
struct  {
char names[21];
int age;
char grade;
} a3;
  
// 结构体中包含其他结构体
struct A4
{
    struct A2 a22;
}a4;

// 结构体声明+按顺序初始化
struct A5
{
    int age;
    char names[4];
}a5={26,"yfq"};


struct A6
{
int num;
};

struct  A6 a6[2];

struct  A6 a7[2]={{1},{2}};





int main()
{
    // 结构体数组
    a6[1].num=2;
    a7[1].num=3;
    a7[2].num=4;
    

    // 定以后逐个初始化
    a1.age=10;
    a1.grade='B';
    // 定义后一起初始化
    a2=(struct A2){1,'C'};
    
    
    // 结构体成员访问
    printf("output A5:%d,%s\r\n",a5.age,a5.names);
    printf("output a2:%d,%c\r\n",a2.age,a2.grade);
    
    a4.a22.age=1;
    a4.a22.grade='A';
    printf("output A4:%d,%c,%s\r\n",a4.a22.age,a4.a22.grade);
    
    // 字符数组如果用=赋值，则输出为空
    a3.names[21]="hello";
    puts(a3.names);
    
   return 0;
}

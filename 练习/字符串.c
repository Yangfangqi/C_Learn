#include <stdio.h>
#include <string.h>


// 声明一个字符串 “” 并初始化
char array1[]="hello";
// 声明一个字符数组 并初始化
char array2[]={'h','e','l','l','o'};
// 声明一个字符串‘’ 并初始化
char array3[]={'h','e','l','l','o','\0'};
// 声明一个字符串 并初始化
char array4[]={"hello"};
// 声明一个字符串，并初始化，未满
char array5[6]={"hel"};
// 声明一个字符串，未初始化
char array6[4];

int main()
{
gets(array6);
puts(array6);

printf("array6[4] count is :%d\r\n",array6[3]);
printf("array1 count is :%d\r\n",sizeof(array1));
printf("array1 count is :%d\r\n",strlen(array1));

/*        
    printf("array1[] count is :%d,%s\r\n",sizeof(array1),array1);
    printf("array2[] count is :%d,%s\r\n",sizeof(array2),array2);
    printf("array3[] count is :%d,%s\r\n",sizeof(array3),array3);
    printf("array4[] count is :%d,%s\r\n",sizeof(array4),array4);
    printf("array5[] count is :%d,%s\r\n",sizeof(array5),array5);
    printf("array5[4] is :%d\r\n",array5[4]);
    printf("please input a string:");
    scanf("%s",array6);
    printf("array6[] count is :%d,%s\r\n",sizeof(array6),array6);
*/  

    return 0;
}

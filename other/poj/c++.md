# Alex Fan的C++学习笔记
本文基于读者已有c语言基础.

## 注释

```c++
/*
note something
*/

//note something
```

以上是两种常用的注释方法

甚至可以用这种方法来注释和调试代码·

```c++
#if 1
	code1
#else
	code2
#endif
```

此时只需要更改#if后面的1/0,即可选择执行哪一段代码,非常方便.



## 数据类型

1.typedef **type** *newdata_name*

newdata_name sth

```c++
typedef int newint;
newint alex = 1;//int alex =1;
```

2.枚举enum

```c++
enum 枚举名{ 
     标识符[=整型常数], 
     标识符[=整型常数], 
... 
    标识符[=整型常数]
} 枚举变量;
```



## 变量类型

变量可以在外部声明,再在内部定义.

```c++
#include <iostream>
using namespace std;
int func();//声明函数
// 变量声明
extern int a, b;
extern int c;
extern float f;
  
int main ()
{
  // 变量定义
  int a, b;
  int c;
  float f;
 
  // 实际初始化
  a = 10;
  b = 20;
  c = a + b;
 
  cout << c << endl ;
 
  f = 70.0/3.0;
  cout << f << endl ;
 
  return 0;
}
int func(){
  return 0;
}
```


## 常量定义

```c++
#define identifier value
#define length 10 //不需要加;号

const type variable = value;
const int length = 10;//同样也是函数定义
```



## 修饰符类型

C++ 允许在 **char、int 和 double** 数据类型前放置修饰符。修饰符用于改变基本类型的含义，所以它更能满足各种情境的需求。

下面列出了数据类型修饰符：

- signed
- unsigned
- long
- short

修饰符 **signed、unsigned、long 和 short** 可应用于整型，**signed** 和 **unsigned** 可应用于字符型，**long** 可应用于双精度型。

修饰符 **signed** 和 **unsigned** 也可以作为 **long** 或 **short** 修饰符的前缀。例如：**unsigned long int**。

C++ 允许使用速记符号来声明**无符号短整数**或**无符号长整数**。您可以不写 int，只写单词 **unsigned、short** 或 **unsigned、long**，int 是隐含的。例如，下面的两个语句都声明了无符号整型变量。

```c++
unsigned x;
unsigned int y;
```



## 存储类


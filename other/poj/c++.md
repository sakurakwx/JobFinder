# Alex Fan的C++学习笔记
本文基于读者已有c语言基础.

## 一.注释

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



## 二.数据类型

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



## 三.变量类型

1.
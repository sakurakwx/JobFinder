## 温馨提示
所有训练代码全部放在ipynb后缀的文件中.这样查看起来比较方便.
### 常用python3函数
1.pop()
```python3
site= {'name': '菜鸟教程', 'alexa': 10000, 'url': 'www.runoob.com'}
pop_obj=site.pop('name')
print pop_obj    # 输出 ：菜鸟教程
```

2.map()
函数语法：
map(function, iterable, ...)
```python3
map(square, [1,2,3,4,5])
```

3.zip()
```python3
>>>a = [1,2,3]
>>> b = [4,5,6]
>>> c = [4,5,6,7,8]
>>> zipped = zip(a,b)     # 打包为元组的列表
[(1, 4), (2, 5), (3, 6)]
>>> zip(a,c)              # 元素个数与最短的列表一致
[(1, 4), (2, 5), (3, 6)]
>>> zip(*zipped)          # 与 zip 相反，*zipped 可理解为解压，返回二维矩阵式
[(1, 2, 3), (4, 5, 6)]s
```

4.矩阵
mat = [[0 for i in range(n)] for i in range(n)]
[[0, 0, 0, 0, 0],
 [0, 0, 0, 0, 0],
 [0, 0, 0, 0, 0],
 [0, 0, 0, 0, 0],
 [0, 0, 0, 0, 0]]

5.sorted()
排序
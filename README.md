# Alex Fan 's LeetCode Practice
>1

>2
>> x = y if z else k    
>> divmod()的使用

>3
>>滑动窗口法。  
set()的使用

>4
>>二分搜索法 m 和 n两个数组,然后从m/2开始,经过比较后再决定搜索m/4或者3m/4,这样的时间复杂度为O(log(m+n))

>5
>>中心拓展法 马拉车manacher算法.
核心思想是省去很多重复计算.比如以mid为中心点对称的两个点的RL[i]

>6 Z字形变换的关键在于flag的翻转.
>> 创建n个空元素的list的方法为a = [NoneType]*n

>7 一边div,一边加

>8 沙雕题目,不予置评
>>isdigit()


>9 没有想到特别好的解法,就用了拓展#法
>>'#'+join(x) = "a#b#c#d"   
>>''.join()可以把tuple变成str

>10.正则表达式 ,实现'.'和'*'

>11.双指针法,从两边同时向中间逼近,求最大值.
>>撤去两边较小的板

>12.双list

>13.easy题.python的循环for的i不能随着内部循环更改!!

>14.zip()
>>a = [1,2,3]  
>>b = [4,5,6]  
>>c = [4,5,6,7,8]  
>>zipped = zip(a,b)     # 返回一个对象  
>>list(zipped)  # list() 转换为列表  
>>[(1, 4), (2, 5), (3, 6)]  
>>加*号为解压

>15.记得先sort(),这会节省很多时间和空间利用.夹逼法

>16.仿照第十五题进行修改. 
>>复习时注意最后两个判断条件.

>17.
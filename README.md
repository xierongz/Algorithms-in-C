*************************************************************
- 《算法：C语言实现》学习日志
- 作者：谢荣桢
- 版本：V1.0
*************************************************************

2018/9/27（23:09）：

# 第一部分 基础知识
## 第一章 引言
### 1.1 算法
### 1.2 典型问题--连通性
### 1.3 合并-查找算法
&emsp;　快速--查找算法(quick-find algorithm)：
&emsp;　　　初始时，数组中的第i个元素的值为i，0<=i<n。
&emsp;　　　为实现p与q的合并操作，遍历数组，把所有名为p的元素值改为q。

- 性质1
&emsp;  **求解N个对象的连通性问题，如果执行M次合并操作，那么快速查找算法至少执行MN条指令**
-性质2
&emsp; **对于M>N，快速合并算法求解N个对象、M个对的连通问题需要执行MN/2条指令。**

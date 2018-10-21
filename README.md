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

- 性质1.1
&emsp;  **求解N个对象的连通性问题，如果执行M次合并操作，那么快速查找算法至少执行MN条指令**
- 性质1.2
&emsp; **对于M>N，快速合并算法求解N个对象、M个对的连通问题需要执行MN/2条指令。**
- 性质1.3
&emsp; **对于N个对象，加权快速合并算法判定其中的两个对象是否是连通的，之多需要遍历2lgN个指针。**

### 1.4 展望
设计算法的基本步骤：
- **确定完整、明确的问题陈述，包括确定问题固有的基本抽象操作。**
- **仔细设计一个简单算法的简明实现。**
- **通过逐步求精的过程开发改进后的算法实现，经过实验分析、数学分析或者两者共同验证改进算法的效率。**
- **找出数据结构或者算法操作的高级抽象表示，能够使改进版本的设计高效，**
- **可能时尽量保证最坏情况下的性能，但实际数据可用时接受好的性能。**

## 第二章 算法分析的原理
算法分析的基本方法：
**1.说明这个过程
2.在某个地方描述所用的数学约定
3.为讨论高级技术问题提供基础
4.当比较算法时，对得出的科学基本结论进行正确评价**

### 2.1 实现和经验分析
&emsp; 理解算法性能的第一步是进行**经验分析**，即给定解决同一问题的两个算法，运行观察哪个的运行时间更长。
&emsp; 但经验分析面临挑战：
**&emsp; 1.对于某些复杂算法，开发一个正确、完整的算法实现
**
**
&emsp; 2.确定输入数据的特性，以及对进行的实验有直接影响的其他因素。
**
&emsp; 对此有三个基本选择：**实际数据、随机数据**或**伪数据**
&emsp; 　　实际数据测试程序的真正开销；
&emsp; 　　随机数据确保实验测试的是算法，而非测试数据；
&emsp; 　　伪数据确保程序可以处理可能的任何输入。

&emsp; 选择算法时常犯的错误：
**&emsp; 　　1.忽略了算法的性能特征
&emsp; 　　2.过多地关注算法的性能特征**


### 2.2 算法分析
&emsp; 对算法进行数学分析的目的：
**&emsp; 　　比较同一任务的不同算法。
&emsp; 　　预测算法在新环境下的性能。
&emsp; 　　设置算法中的参数值。**

&emsp; 算法分析的步骤：
**&emsp; 　　1.明确算法基于的抽象操作，从而从实现中把分析分离出来。**
&emsp; 　　确定用于分析的最重要的量的方法：
**&emsp; 　　　　(1).对于某些典型运行，利用剖析机制决定程序中最常执行的部分。
&emsp; 　　　　(2).寻找这些量的一个近似估计，确保必要时能够对重要程序进行更完整的分析。**
**&emsp; 　　2.研究数据，为算法的输入建立模型**
&emsp; 　　　　(1).假设输入是随机的，并研究程序的平均情况(average-case)下的性能；
&emsp; 　　　　(2).寻求伪输入，并研究程序的最坏情况(worst-case)下的性能。

2018/10/21（19:40）：
### 2.3 函数的增长
&emsp; 　　大多数算法的主要参数是**N**，它对算法的运行时间影响最大。
&emsp; 　　参数**N**可以是多项式的度、待排序或查找的文件大小、文本字符串中的字符个数，或者是对所考虑的问题的规模的其他抽象度量。

注：当这样的参数多于一个时，通常把其中一个参数表示为另一个参数的函数，或者一次考虑一个参数，把分析规约到一个参数上，从而不失一般性只考虑一个参数。

本书中算法的运行时间一般会与以下某个函数成正比：
**l**&emsp;　　大多数程序的大部分指令执行一次，或者至多只执行几次。
&emsp; 　　如果一个程序的所有指令具有这个性质，称程序的运行时间为常量。
**log N**&emsp;当程序的运行时间为对数时，程序随着N的增长稍微变慢。　
&emsp; 　　当N加倍时，log N只增加常量，只有N增加到N^2时，log N才会加倍。
**N**&emsp;　　当程序的运行时间为线性时，通常对每个输入元素只作了少量处理工作。
&emsp; 　　这种情况对于一个必须处理N个输入(或者产生N个输出)的算法是最优的。
**Nlog N**&emsp;当把问题分解成小的子问题，且独立求解子问题，然后把这些子问题的解组合成原问题的解时，就会出现Nlog N的运行时间。
**N^2**&emsp;　当算法的运行时间为二次(quadratic)时，算法只适用于规模较小的问题。
&emsp; 　　二次运行时间一般出现在需要处理所有数据项对(也许是双层嵌套循环)的算法中。

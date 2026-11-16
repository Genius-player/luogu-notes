# P1720 月落乌啼算钱（斐波那契通项公式）
## 题目简述
使用斐波那契通项公式 $F_n=\frac{(\frac{1+\sqrt{5}}{2})^n - (\frac{1-\sqrt{5}}{2})^n}{\sqrt{5}}$ 计算第n项的值。
输入一个自然数n，输出$F_n$，结果保留两位小数。
数据范围：$0 \le n \le 48$

## 用到知识点
1. `pow(base, exp)`：头文件`<cmath>`，计算base的exp次方，求幂运算。
2. `sqrt()`：头文件`<cmath>`，计算平方根。
3. `fixed`、`setprecision()`：头文件`<iomanip>`，格式化输出。
    - `fixed + setprecision(k)`：保留小数点后k位。
    - 仅`setprecision(k)`：保留k位有效数字，二者容易混淆。
4. double浮点类型：存储小数，不能用int截断小数。

## ⚠️ 容易踩坑的地方
1. 黄金分割数是小数，不能用int保存，int会直接舍弃小数部分，导致结果完全错误，必须使用double。
2. 求n次方不是反复平方。循环`a=a*a`是不断平方，指数会变成$2^i$，不等于$a^n$。
3. 区分两种输出模式：写fixed代表固定小数位数，不写fixed则是有效数字。
4. pow函数适用于浮点幂运算；整数幂尽量避免pow，会存在浮点精度误差。
5. 输出保留两位小数时，必须同时写fixed和setprecision(2)，只写setprecision(2)含义完全不同。

## 解题思路
公式分子分成两部分方便计算
保留小数点后两位输出
## 总结
- 通项公式需要浮点变量保存黄金分割数，选用double。
- pow用来计算次方，sqrt用来开平方根，都需要cmath头文件。
- fixed搭配setprecision用来固定小数位数，仅setprecision代表有效数字，头文件iomanip。
- 输入6样例，输出8.00，公式计算结果自动适配小数输出。

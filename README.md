# findF
一个序列由N个元素组成，现希望从该序列中挑选出至少F个连续的元素，使这些数的均值（挑选出的连续数之和/数的个数）最大。         
输入要求：输入第1行包含两个整数N和F，其后的1行包含N个整数，表示该序列元素的个数。
输出要求：输出占1行，为对应的最大均值，精确到小数点后三位。
输入样例：
10 6
6 4 2 10 3 8 5 9 4 1
输出样例：
6.500


代码设计思路：
首先用sum数组储存以i结尾的i个数的和，记为sum[i]，所以F个数可以用sum[i]-sum[i-F]表示，从后往前推，用ans进行监测，最后计算


核心公式：ans=sum[i]-sum[i-F],


边界条件：F=<i<=N


算法复杂度T(n)=O(n)

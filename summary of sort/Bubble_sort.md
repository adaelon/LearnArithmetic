# 第一种——冒泡排序

这是一种较为基础的排序算法。

## 基本原理（思路）

相邻的两个数两两进行比较，不符合排序要求的立刻进行交换。

## 特点

这种算法一轮决定一个数的位置。

## 代码

~~~c++
for(i=1;i<n;i++){
	for(j=0;j<n-i;j++){
		if(a[j]>a[j+1]){
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
	}
}
~~~

#  选择排序

这是一种与冒泡排序一样较为低级的排序算法。

## 思路

首先在所有的记录中选出键值最小的记录，把它与第一个记录交换。

然后在其余的记录中再选出键值最小的记录与第二个交换。

依次类推，直至所有记录排序完成。在第i趟中，通过n-i次键值比较选出所需记录。

## 特点

也是一次决定一个数的位置，但与冒泡排序不同的是它排的顺序是从前往后，而冒泡排序则相反。

## 代码

```C++
for(i=0;i<n-1;i++){
	k=i;
	for(j=i+1;j<n;j++){
		if(a[j]<a[k]) k=j;
	}
	if(k!=i){
		c=a[k];
		a[k]=a[i];
		a[i]=c;
	}
}
```


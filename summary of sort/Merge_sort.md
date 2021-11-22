# 归并排序

它是一种运用分治思想的算法，相较于其他排序算法来说有比较稳定的时间复杂度。

## 思路

将序列分成两半，每一半递归求解，直到区间中剩下一个数直接返回

返回时将两个区间的信息进行合并。

### 思路详解

虽然思路写的很短，但是想要真正理解并灵活运用需要透彻的理解，所以有思路详解：

如果有两个已经排好序的数组{1 4 6 8} {2 7 9 12}，我们想做的是把它们合并并且排序，这时只要准备三个指针就可以了。

设k代表第一个数组的指针，m代表第二个数组的指针，t代表最后合并后的数组的指针。

先把k,m,t都放到相应数组的第一位，

if k<m,则k++ t++;

if k>m 则m++ t++;

我们会发现最后会剩下9和12，这时只要把它们放到目标数组的最后即可。

最后我们就得到了{1 2 4 6 7 8 9 12}。

注意题目给出的往往是一个数组，所以需要我们人为地把该数组进行切分。



这时有人可能要问了，归并排序只能排序两个排好序的数组吗。

这时我们就要用到分治思想了，我们就一个不规律的数组，两组两组无限下分，直到一个数组中只有一个数，然后我们再将这些数组合并起来，就可以将原来不规律的数组排好序了。

## 代码

```c++
int merge(int r[],int s[],int left,int mid,int right){
	int i,j,k;
	i=left;
	j=mid+1;
	k=left;
	while((i<=mid)&&(k<right)){
		if(r[i]<r[j]){
			s[k]=r[i];
			i++;
			k++;
		}else{
			s[k]=r[j];
			j++;
			k++;
		}
    }
		while(i<=mid)
		 s[k++]=r[i++];
		while(j<right)
		 s[k++]=r[j++];
	return 0;
}
int mergeSort(int s[],r[],int left,int right){
	int mid;
	int t[20];
	if(left==right)
	  s[left]=r[right];
	else{
		mid =(left+right)/2;
		mergeSort(r,t,left,mid);
		mergeSort(r,t,mid+1,right);
		merge(t,s,left,mid,right);
	}
	return 0;
}
```


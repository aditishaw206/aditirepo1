#include<stdio.h>
void merge(int a[],int l,int mid,int h)
{
  int i,j,k;
  int l1 = mid-l+1;
  int l2 = h-mid;
  int left[l1], right[l2];
  for (i=0;i<l1;i++)
    left[i] = a[l+i];
  for (j=0;j<l2;j++)
    right[j]=a[mid+1+j];
  i=0;
  j=0;
  k=l;
  while(i < l1 && j < l2)
   {
    if (left[i] <= right[j]) 
	{
      a[k] = left[i];
      i++;
    } 
	else 
	{
      a[k] = right[j];
      j++;
    }
    k++;
  }
  while (i < l1) 
  {
    a[k] = left[i];
    i++;
    k++;
  }
  while (j < l2) {
    a[k] = right[j];
    j++;
    k++;
  }
}
void mergeSort(int a[], int low, int high)
 {
  if (low<high) 
  {
    int mid=low+(high-low)/2;
    mergeSort(a,low,mid);
    mergeSort(a,mid+1,high);
    merge(a,low,mid,high);
  }
}
int main()
{
    int n,i;
    printf("Enter length of Array \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements \n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    mergeSort(a,0,n-1);
    printf("Sorted array \n");  
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}


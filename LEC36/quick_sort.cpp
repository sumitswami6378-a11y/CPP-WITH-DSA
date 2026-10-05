#include<iostream>
using namespace std;


int partition(int arr[],int low,int high){

    int pivot =arr[low];

    int count=0;

    for (int i = low; i <=high; i++)
    {
        if (arr[i] < pivot)
        {
            count++;
        }
        
        
    }

    int p = low + count;

    swap(arr[p],arr[low]);
    
    int i = low;

    int j = high;

    while (i < p && j > p)
    {
    while(i < p && arr[i] < pivot)
    {
    i++;
    }

    while(j > p && arr[j] >= pivot)
    {
    j--;
    }
        
    if (i < p && j > p)
    {
            swap(arr[i++],arr[j--]);
    }
        

        
    }

    return p;
    
}


void quicksort(int arr[],int low,int high){


    if (low >= high)
    {
        return;
    }
    
    



   if (low < high)
   {
    int p = partition(arr,low,high);

    quicksort(arr,low,p-1);
    quicksort(arr,p+1,high);
   }
   
}


int main(){


    int arr[10] = {1,7,1,2,4,8,1,4,7};
    int n = 9;

    quicksort(arr,0,n-1);

    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}


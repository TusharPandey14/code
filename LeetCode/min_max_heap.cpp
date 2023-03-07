#include <bits/stdc++.h>

// MIN HEAP
void Minheapify(vector<int>&arr, int n, int i){
    int smallest = i;
    int left = 2*i+1; // left and right change for 0 based indexing
    int right = 2*i+2;

    if(left < n && arr[left] < arr[smallest]){
        smallest = left;
    }
    if(right < n && arr[right] < arr[smallest]){
        smallest = right;
    }
    if(smallest != i){
        swap(arr[smallest], arr[i]);
        heapify(arr, n, smallest);
    }
}

// MAX HEAP
void Maxheapify(int arr[],int n,int i){
    int largest =i;
    int left=2*i;   // these left and right ARE for 1 based indexing
    int right=2*i+1;

    if(left<n && arr[largest]<arr[left]){
        largest=left;
    }
    if(right<n && arr[largest]<arr[right]){
        largest=right;
    }

    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }

}

vector<int> buildMinHeap(vector<int> &arr)
{
    int n = arr.size();
    for(int i=n/2-1; i>=0; i--){
       Minheapify(arr, n, i); 
       cout<<"Printing the Array Now"<<endl;
        for(int i=1;i<=n;i++)
        {
            cout<<arr[i]<<" ";
        }
       Maxheapify(arr, n, i);  
       for(int i=1;i<=n;i++)
        {
            cout<<arr[i]<<" ";
        }
       
    }
    return arr;
}
// In this sorting technique firstly we assume whole array is unsorted and then we find smallest element of that unsorted array.
// then we replace first element of unsorted array with the smallest element found in unsorted array.
// And then after every pass unsorted array shifts by 1 element to the right.
// It is an inplace sorting technique.

// Time Complexities : 
// Best = Average = Worst = 0(n^2)

// Space Complexity = 0(1)

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : "<<endl;
    cin>>n;
    cout<<"Enter array elements : "<<endl;
    vector<int> arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n-1;i++){
        int mini=i;
        for (int j=i+1;j<n;j++){
            if (arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);
    }
    cout<<"Sorted array is : "<<endl;
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
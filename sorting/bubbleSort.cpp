// here we sort the elemment by comparing adjacent elements and then if it follows the condition then we swap those elements.
// here if we are sorting in ascending order then after every pass the largest elements will get to their sorted position at last.


// Time Complexities : 
// best case = 0(n)
// Average Case = 0(n^2)
// Worst Case = 0(n^2)

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<"Enter array elements : ";
    vector<int> arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int swaps=0;
    for (int i=0;i<n-1;i++){
        bool swapped=false;
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaps++;
                swapped=true;
            }
        }
        if (!swapped){
            break;
        }
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"No. of swaps : "<<swaps<<endl;
}
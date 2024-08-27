/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <unordered_map>
using namespace std;


void selectionSort(int arr[],int n){
    
for(int i=0;i<=n-2;i++){ // n-2 as last element dont ned to go for swapping
    
    int min=i;
    for(int j= i;j<=n-1;j++) // from i to n-1 only we need to check
    {
        if(arr[j]<arr[min]){ // get smallest element
            min=j;
        }
    }
    
    // swap logic
    int temp = arr[i];
    arr[i]=arr[min];
    arr[min]=temp;
}

for(int i =0;i<n;i++){
    cout <<arr[i]<<" ";
}
    
}

int main()
{
 
 int arr[6] = {1,3,0,2,9};
 int n=5;
 selectionSort(arr,n);

    return 0;
}

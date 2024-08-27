https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/0


#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr, int N, int P) {
        // do modify in the given array
        
        int array[N+1]={0}; // as we want Nth index also in array and index starts form 0, so added +1
        
        for (int i =0;i<arr.size();i++){
            if(arr[i]<=N){ // if element is greater than N, that means we don't want its count.
            array[arr[i]]++;
            }
        }

        
        for(int i =1;i<N+1;i++){ // starts with i=1 as we dont want count of 0.
            arr[i-1]=array[i]; 
        }
        
    }
};


//{ Driver Code Starts.

int main() {
    long long t;

    // testcases
    cin >> t;

    while (t--) {

        int N, P;
        // size of array
        cin >> N;

        vector<int> arr(N);

        // adding elements to the vector
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        cin >> P;
        Solution ob;
        // calling frequncycount() function
        ob.frequencyCount(arr, N, P);

        // printing array elements
        for (int i = 0; i < N; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}

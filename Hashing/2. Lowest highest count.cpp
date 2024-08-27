//https://takeuforward.org/arrays/find-the-highest-lowest-frequency-element/

#include <iostream>
#include <unordered_map>
using namespace std;


void findCount(int arr[],int n){
    
    unordered_map<int,int> countMap;
    
    for(int i =0;i<n;i++){
        countMap[arr[i]]++;
    }
    
    int maxFre=0;
    int minFreq=n;
    int maxCountNumber=0;
    int minCountNumber=0;
    
    for( auto it: countMap){
        
        if(it.second > maxFre){
            maxFre=it.second;
            maxCountNumber=it.first;
        }
        
        if(it.second < minFreq){
            minFreq=it.second;
            minCountNumber=it.first;
        }
    }
    
    cout <<"High Freq Number "<< maxCountNumber<<endl;
    cout<<"Min Freq Number "<< minCountNumber<<endl;
    
}

int main()
{
 
 int arr[6] = {10,5,10,15,10,5};
 int n=6;
 findCount(arr,n);

    return 0;
}

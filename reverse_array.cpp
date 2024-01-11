#include<iostream>
using namespace std;
void PrintArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
}

void PrintArray2(vector<int> rr, int n){
    for(int i=0; i<n; i++){
        cout<< rr[i] << " ";
    }
    cout<<endl;
}



void ReverseArray(int arr[], vector<int> rr, int n){
    
    for (int i = n-1; i >= 0; i--)
    {
        rr.push_back(arr[i]);
        

        
    }
    
    cout << endl;
    
}


int main()
{
    int arr[]={1, 2, 3, 4, 5};
    int n= sizeof(arr)/sizeof(arr[0]);
    vector<int> rr;

    PrintArray(arr, n);

    ReverseArray(arr,rr,n);

    PrintArray2(rr, n);

    return 0;
}



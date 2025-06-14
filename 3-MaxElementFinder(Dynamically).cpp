#include <iostream>
#include <vector>
using namespace std;

// Challenge 3: Find max element in an array of n elements
// Input: [1, 5, 2, 8, 3] → Output: 8

int main()
{
    unsigned short int f;
    cout<<"Welcome to the Maximum find array App"<<endl<<"Choose Options respectively:"<<endl<<"0: Know size? Choose this option!"<<endl<<"1: Don't know the size but keep on adding it"<<endl;
    cout<<"Enter Your choice! ";
    cin>>f;
    cout<<"Proceeding ...."<<endl;
    if(f)
    {
        vector<int> arr;
         arr.push_back(0);
        int k {1};
        int iteration {};
        while (k)
        {
            cout<<"Enter the value of this iteration "<< k << ":"<<endl <<"///////////////NOTE: TO EXIT THIS ITERATION ENTER 0 TIMES!/////////////////////"<<endl;
            int l;
            cin>>l;
            if(l == 0){
                k =0;
                continue;
            }
            arr.push_back(l);
            arr[k] = max(arr[k],arr[k-1]);
            cout<<"Max element is "<<arr[k]<<endl;
            iteration++;
            k++;
        }
        cout<<"There were "<< iteration<<" and the max element till now is "<<arr[iteration]<<endl;
    }
    else
    {
        unsigned int n;
        cout<<"---------------------------------------------------------------------------------"<<endl;
        cout<<"Enter the value of n : ";
        cin >> n;  // 1435 1 4 4 5;
        int arr[n] {0};
        cout << "Enter the a Values of array :) "<<endl;
        for(int i = 0; i<n; i++) cin>>arr[i];
        //for(int i= 0; i < n; i++) cout<<arr[i]<<endl;
        for(int i=0; i< n-1; i++)arr[i+1] = max(arr[i],arr[i+1]);
        cout<<"The maximum element is "<< arr[n-1]<<endl;
    }
    cout<<"The process is finished!";
}

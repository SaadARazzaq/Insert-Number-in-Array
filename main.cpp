#include<iostream>
using namespace std;
int main(){
    cout<<endl;
        int missing, index;
        int arr[10];
        cout<<"Enter 9 elements in array: ";
        for(int i=0; i<9; i++){
            cin>>arr[i];
            if(i==8){
                cout<<"Your array has values: [";
                for(int i=0;i<9;i++){
                    cout<<arr[i]<<" , ";
                }
                cout<<"]";
            }
        }
        cout<<"\nEnter your tenth element: ";
        cin>>missing;
        cout<<"Enter Index: ";
        cin>>index;
        cout<<"your final array is: [";
        for(int i=9; i>index; i--){
            arr[i] = arr[i-1];
        }
        arr[index] = missing;
        for(int i=0; i<10; i++){
            cout<<arr[i]<<" , ";
        }
        cout<<"]";
    return 0;
}

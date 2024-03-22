#include<iostream>
using namespace std;
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";

    }cout<<endl;
}
void swapalternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
int even[8]={1,5,3,6,4,3,23,2};
int odd[7]={1,2,6,3,4,34,5};
swapalternate(even,8);
printarray(even,8);
cout<<endl;
swapalternate(odd,7);
printarray(odd,7);
return 0;
}
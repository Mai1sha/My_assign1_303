#include<iostream>
#include"array.h"
#include<utility>
using namespace std;


int find_func1(int my_arr[]){//function to find the index with user-input value
    int num1;
    cout<<"Enter num to find index:"<<" ";
    cin>>num1;
    for(int i=0;i<100;i++){
        if(my_arr[i]==num1)
        return i;
    }
    return -1;
}

pair<int, int> modify_func2(int arr[], int size){//function to return both old and new value using user-input index and new value
                                                 //used pair to return two values
    int indx2, newVal1;             
    cout<<"Enter index:"<<endl;
    cin>>indx2;
    cout<<"Enter new value:"<<endl;
    cin>>newVal1;
    if(indx2<0 || indx2>=size)
        throw out_of_range("Index is out of range. Index = " + to_string(indx2));
    int oldVal = arr[indx2];
    arr[indx2] = newVal1;
    pair<int, int> my_pair;
    my_pair.first=newVal1;
    my_pair.second=oldVal;
    return my_pair;//to return both my new and old values

}
void add_func3(int my_arr[],int &size){//function to add value at the end of the array

   int newVal2;
    cout<<"Enter a value to add at the end of the array:"<<" ";
    cin>>newVal2;//using user-input values
    
    if(size>500){
       throw out_of_range("Array size is already end.");//to throw an exception if the index is out of range
    }
    my_arr[size]=newVal2;   
    size++;//increase size after adding value at the end of the array
    
}

void replace_func4(int my_arr[],int &size){//function to replace index's value to 0
    int indx;
    cout<<"Enter index to replace:"<<" ";
    cin>>indx;
    if(indx>=0 && indx<size)//given condition before replacing value to 0
      my_arr[indx]=0;
}

#include<iostream>
#include<fstream>
#include"array1.cpp"
#include<utility>
using namespace std;

int main(){

   ifstream my_infile;
   my_infile.open("array.txt");//open a txt file 
   if(!my_infile.is_open()){
   cout<<"File not opened!!";//if there's a problem to open the file
  }
  else
  cout<<"File opened successfully!!"<<endl;


  int my_arr[500];//declaring an array of random size 500
  int size, i=0;
  while(my_infile>>my_arr[i]){//to read from the txt file
    i++;
  }
  size=i;
  for(int i=0;i<100;i++){
    my_infile>>my_arr[i];
  }
  for(int i=0;i<100;i++){
    cout<<my_arr[i]<<" ";//to print my array
  }
  cout<<endl;
  
  cout<<find_func1(my_arr)<<endl;//call to the find function


   try
    {
        pair<int,int>my_pair2 = modify_func2(my_arr, size);
        cout<<"New value = "<<my_pair2.first<<", Old value = "<<my_pair2.second<<endl;
        //exception handling if my array size is out of range
    }
    catch(out_of_range e)
    {
        cout<<e.what()<<endl;
    }

    try
    {
        add_func3(my_arr,size);
    }
    catch(out_of_range e)
    {
        cout<<e.what()<<endl;
    }
     replace_func4( my_arr,size);//call to replace function to replace given index's value to 0

     cout<<"My new array:"<<endl;

     for(int i=0;i<size;i++){//to print new array
      cout<<my_arr[i]<<" ";
     }
     my_infile.close();//close the file at the end

}
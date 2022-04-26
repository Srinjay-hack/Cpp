#include<bits/stdc++.h>
#include<fstream>
#include<iostream>
using namespace std;
int main(){
    char arr[100];
    cout<<"ENter your name and age";
    cin.getline(arr,100);
    fstream myfile("abc.txt",ios::out);
    //ofstream myfile("abc.txt",ios::app);
    // myfile.open("abc.txt");
    myfile<<arr;
    myfile.close();
    cout<<"File write operation performed successfully";

    cout<<"Reading from file operation started"<<"\n";
    char arr1[1000000];
    ifstream obj("abc.txt");
    obj.getline(arr1,1000000);
    cout<<"Array content:"<<arr1<<"\n";
    cout<<"Reading from file operation completed \n";
    obj.close();
	return 0;
}
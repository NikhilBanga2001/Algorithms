#include<iostream>

using namespace std;


void display(int arr[],int s)
{
    cout<<"\n****Array Elements are****: \n";
    for (int i = 0; i < s; i++)
    {
        cout<<"  "<<arr[i];
    }
    
}
int Binary_Search_Recursion(int arr[], int l , int h,int key,int size)
{
    int mid;
    // l = 0;
    //h = size -1;
        if(l<=h){
            mid = (l+h)/2;
        if(key == arr[mid])
        {
            return mid;
        }
        else if (key < arr[mid])
        {
           return Binary_Search_Recursion(arr,l,mid-1,key,size);
        }
        else{
           return Binary_Search_Recursion(arr,mid+1,h,key,size);
        }
    }
    return -1;
}
int main()
{
    int sizes;
    int low;
    
    cout<<"\nEnter size of an array:\n";
    cin>>sizes;
    int high;
    int *arr = new int[sizes];
    cout<<"\nEnter elements in a sorted way as binary search not works on unsorted way array:\n";
    for(int i = 0; i<sizes;i++)
    {
        cin>>arr[i];
    }
    display(arr,sizes);
    int key;
    cout<<"\nEnter element you want to search:\n";
    cin>>key;
    cout<<"Element Found at Index: "<<Binary_Search_Recursion(arr,0,sizes,key,sizes); 

    //searching using pre defined sorted array
    cout<<"\nsearching using pre defined sorted array";
    int arrays[] = {1,3,4,5,6,8,12,14,18,19,21,23};
    int length = sizeof(arrays) / sizeof(int);
    high = length - 1;
    display(arrays,length);
    cout<<"\nEnter element you want to search:\n";
	int keys;
    cin>>keys;
    cout<<"Element Found at Index: "<<Binary_Search_Recursion(arrays,low,high,keys,length);
}

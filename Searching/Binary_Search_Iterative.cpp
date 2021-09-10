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
int Binary_Search(int arr[], int key,int size)
{
    int l , mid ,h;
    l = 0;
    h = size -1;
    while(l<=h){
        mid = (l+h)/2;
        if(key == arr[mid])
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            h = mid -1;
        }
        else
            l = mid +1;
       
    }
    return -1;
}
int main()
{
    int sizes;
    cout<<"\nEnter size of an array:\n";
    cin>>sizes;

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
    cout<<Binary_Search(arr,key,sizes); 

    //searching using pre defined sorted array
    cout<<"\nsearching using pre defined sorted array";
    int arrays[] = {1,3,4,5,6,8,12,14,18,19,21,23};
    int length = sizeof(arrays) / sizeof(int);
    display(arrays,length);
    cout<<"\nEnter element you want to search:\n";
    cin>>key;
    cout<<Binary_Search(arrays,key,length);
}

/*optimized version of Linear Search with swapping for decreasing time complexity
*/
#include<iostream>

using namespace std;

void display(int arr[], int no_of_element)
{
    cout<<"\n******Array Elements are******:    ";
    for(int i = 0;i<no_of_element;i++)
    {
        cout<<"     "<<arr[i];
    }
}

void swapping(int &x,int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int LinearSearch(int arr[],int length, int findit)
{
    for(int i = 0;i<length;i++)
    {


        if(arr[i] == findit)
        {
            swapping(arr[i],arr[0]);
            //above statement is for copying the element in front which is asked many times
            return i;
        }


    }
    return -1;
}



int main()
{
    int arr[] = {2,4,6,8,10,12,14};

    int size_of_arr = sizeof(arr) / sizeof(arr[0]);


    display(arr,size_of_arr);

    cout<<"\n Enter Element you want to find:   ";
    int findit;
    cin>>findit;
    int result = LinearSearch(arr,size_of_arr,findit);
    (result == -1)
        ? cout<<"\nElement you wish not found in the array:   "
        : cout<<"\nCongrats! Element you wish found at:   "<<result;

  display(arr,size_of_arr);

}

/*In this program first inserting is done then display function is called
and then the program is now going on Linear Search
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

int LinearSearch(int arr[],int length, int findit)
{
    for(int i = 0;i<length;i++)
    {
        if(arr[i] == findit)
        {
            return i;
        }


    }
    return -1;
}

int main()
{
    int size_of_arr;
    cout<<"\nEnter Size of array\n";
    cin>>size_of_arr;
    int *arr = new int[size_of_arr];

    cout<<"\nEnter Elements in an array\n";
    for(int i= 0; i<size_of_arr; i++)
    {
        cin>>arr[i];
    }
    display(arr,size_of_arr);

    cout<<"\n Enter Element you want to find:   ";
    int findsit;
    cin>>findsit;
    int result = LinearSearch(arr,size_of_arr,findsit);
    (result == -1)
        ? cout<<"\nElement you wish not found in the array:   "
        : cout<<"\nCongrats! Element you wish found at:   "<<result;

}

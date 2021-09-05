#include<iostream>

using namespace std;


//Display of an array
void display(int arr[],int n){
	cout<<"\n***********Elements of an array***********";
	for(int i = 0; i<n;i++){
		cout<<"   "<<arr[i];
	}
}

//Type 1 insertion Function
void insertion(int arr[],int a , int x,int y){
	a++;
	for(int i = a;i>x;i--){
		arr[i]=arr[i-1];
	} 
	arr[x] = y;
	
	display(arr,a);//reuse of display function
}

//type 2 insertion function
void insertiontypetwo(int arr[],int a , int x,int y){
	a++;//added because 1 insertion is already taken place if not added then u will get the wrong output
	for(int i = a-1;i>=x;i--){
		arr[i+1]=arr[i];
	} 
	arr[x] = y;
	a++;
	display(arr,a);//reuse of display function
}

//Delete function 
void deletion(int arr[], int n, int index)
{	n+=2;//added because 2 insertion are take place if not added then u will get the wrong output
	for(int i= index; i<n-1; i++)
	{
		arr[i] = arr[i+1];
	}
	n--;
	
	display(arr, n);//reuse of display function
}	



int main(){
	int s;
	
	cout<<"\n Enter no of elements in an array";
	cin>>s;
	
	int *arr = new int[s];
	
	cout<<"\nEnter elements in an array:  \n ";
	for(int i =0; i<s; i++){
		cin>>arr[i];
	
	}
	display(arr,s);
	
	
	int index,ins_ele,indextwo;
	
	cout<<"\n enter index at wher you want to insert";
	cin>>index;
	
	cout<<"\n enter element which you want to insert";
	cin>>ins_ele;
	
	insertion(arr,s,index,ins_ele);
	
	cout<<"\n enter index at wher you want to insert";
	cin>>index;
	cout<<"\n enter element which you want to insert";
	cin>>ins_ele;
	
	insertiontypetwo(arr,s,index,ins_ele);
	
	cout<<"\n enter index at where you want to delete";
	cin>>indextwo;
	
  deletion(arr,s,indextwo);

}

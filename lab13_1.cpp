#include <iostream>
#include <string>
using namespace std;

template <typename T>
void printVector(T data[],int N,int w){
	for(int i=0;i<N;i++){
		if(i==w) cout<<"["<<data[w]<<"]"<<" ";
		else cout<<data[i]<<" ";
	}
}  

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	
//Write your code here.
	int end; 
	for(int i=1;i<N;i++){
		printVector(d,N,i);
		cout<<" =>> ";
		for(end=i-1;end>=0;end--){
			if(d[end+1]>d[end]) 
				swap(d,end+1,end);
			else break;
		}
		printVector(d,N,end+1);
		cout<<endl;
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
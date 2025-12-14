
//bubble sort.
#include<iostream>
using namespace std;
#include<vector>

void bubblesort(vector<int>ele){
    int n=ele.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(ele[j]>ele[j+1]) swap(ele[j],ele[j+1]);
        }
    }
    for(int i=0;i<ele.size();i++){
        cout<<ele[i]<<" ";
    }
}
int main(){
    int n,temp;
    cout<<"Enter the no of elements: ";
    vector<int> v;
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>temp;
        v.push_back(temp);
    }

    bubblesort(v);
}





//selection sort.
#include<iostream>
using namespace std;
#include<vector>
#include<climits>

void selectionsort(vector<int>ele){
    int n=ele.size();
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int idx=-1;
        for(int j=i;j<n;j++){
            if(ele[j]<min) {
                min=ele[j];
                idx=j;
            }
        }
        swap(ele[i],ele[idx]);
    }
    for(int i=0;i<ele.size();i++){
        cout<<ele[i]<<" ";
    }
}
int main(){
    int n,temp;
    cout<<"Enter the no of elements: ";
    vector<int> v;
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>temp;
        v.push_back(temp);
    }

    selectionsort(v);
}




//insertion sort.
#include<iostream>
using namespace std;
#include<vector>

void insertionsort(vector<int>ele){
    int n=ele.size();
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1){
            if(ele[j]>ele[j-1]) break;
            else swap(ele[j],ele[j-1]);
            j--;
        }
    }
    for(int i=0;i<ele.size();i++){
        cout<<ele[i]<<" ";
    }
}
int main(){
    int n,temp;
    cout<<"Enter the no of elements: ";
    vector<int> v;
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>temp;
        v.push_back(temp);
    }

    insertionsort(v);
}






//merge sort
#include<iostream>
using namespace std;
#include<vector>

void merge(vector<int>&a,vector<int>&b,vector<int>&res){
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]) res[k++]=a[i++];
        else res[k++]=b[j++];
    }
    if(i==a.size()){
        while(j<b.size()){
            res[k++]=b[j++];
        }
    }
    if(j==b.size()){
        while(i<a.size()){
            res[k++]=a[i++];
        }
    }
}

void mergesort(vector<int>&v){
    int n=v.size();
    if(n==1) return;
    int n1=n/2,n2=n-n1;
    vector<int>a,b;
    for(int i=0;i<n1;i++){
        a.push_back(v[i]);
    }
    for(int i=0;i<n2;i++){
        b.push_back(v[n1+i]);
    }
    mergesort(a);
    mergesort(b);
    merge(a,b,v);
    a.clear();
    b.clear();
}


int main(){
    int n;
    cout<<"Enter the no. of elments: ";
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        vec.push_back(num);
    }
    mergesort(vec);
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
}




//Quick sort
#include<iostream>
using namespace std;
#include<vector>

int partition(vector<int>&v,int low, int high){
    int pivot=v[high];
    int i=low-1;

    for(int j=low;j<high;j++){
        if(v[j]<pivot){
            i++;
            swap(v[i],v[j]);
        }
    }
    swap(v[i+1],v[high]);
    return i+1;
}

void quicksort(vector<int> &v, int low, int high){
    if(low>=high) return;
    int pi=partition(v,low,high);
    quicksort(v,low,pi-1);
    quicksort(v,pi+1,high);
}

int main(){
    int n;
    cout<<"Enter the no. of elments: ";
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        vec.push_back(num);
    }
    quicksort(vec,0,n-1);
    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
}
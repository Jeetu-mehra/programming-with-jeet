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

//write a cpp program to find the peak element
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>vec={1,2,3,4,5,4};
    int sz=vec.size();
    int st=1, end=sz-2;
    int f=0;
    while(st <= end)
    {
        int mid=st+(end-st)/2;
        if(vec[mid]>vec[mid-1]&&vec[mid]>vec[mid+1])
        {
            f=1;
            cout<<"peak element is="<<vec[mid];
            break;
        }
        else if(vec[mid]>vec[mid-1]&&vec[mid]<vec[mid+1])
        {
            st=mid+1;
        }
        else if(vec[mid]<vec[mid-1]&&vec[mid]>vec[mid+1])
        {
            end=mid-1;
        }
    }
    if(f==0)
    {
        cout<<"peak element is not present.";
    }
    return 0;
}
// write a program to print the number of permutations of orderd pair 
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int count=0;
    vector<int>vec={4,3,2,1};
    for(int i=0; i<vec.size(); i++)
    {
        for(int j=i+1; j<vec.size(); j++)
        {
            if(i<j&&vec[i]>vec[j])
            {
              count++;
            }
        }
    }
    cout<<"number of permutations="<<count<<endl;
    return 0;
}
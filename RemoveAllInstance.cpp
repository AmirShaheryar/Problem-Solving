#include<iostream>
using namespace std;

void RemoveAllInstance(int A[],int size,int Req)
{
    int K=0;

    for(int i=0;i<size;i++)
    {
        if(A[i]==Req)
        {
            K++;
        }

        else
        {
            swap(A[i],A[i-K]);
        }
    }
}

int main()
{
    int size;
    cout<<"Enter Size : ";
    cin>>size;

    int *A=new int[size];
    for(int i=0;i<size;i++)
    {
        cin>>A[i];
    }
        cout<<"Original Array \n";

    for(int i=0;i<size;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<"\n";

    RemoveAllInstance(A,size,3);
    
    cout<<"New Array \n";
    for(int i=0;i<size;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<"\n";
    delete[] A;




}
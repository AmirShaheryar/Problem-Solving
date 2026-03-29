#include<iostream>
using namespace std;

void MoveZero(int A[],int size)
{
    int Zero_Count=0;

    for(int i=0;i<size;i++)
    {
        if(A[i]==0)
        {
            Zero_Count++;
        }
        else
        {
            swap(A[i-Zero_Count],A[i]);
        }
    }
}

int main()
{
    int size;
    cout<<"Enter Size : ";
    cin>> size;

    int *A=new int[size];

    cout<<"Enter Array Elements \n";
    for(int i=0;i<size;i++)
    {
        cin>>A[i];
    }
    cout<<"\n\n";
    cout<<"Original Array \n";

    for(int i=0;i<size;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<"\n";
    MoveZero(A,size);
    
    cout<<"New Array \n";
    for(int i=0;i<size;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<"\n";
    delete[] A;
}
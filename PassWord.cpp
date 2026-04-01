#include<iostream>
using namespace std;

bool Strong(string s)
{
    int String_Size=s.size();

    int *A=new int[4];

    for(int i=0;i<4;i++)
    {
        A[i]=0;
    }

    int count=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            count+=1;
            A[0]=A[0]+1;
        }

        else if(s[i]>='A' && s[i]<='Z')
        {
            count+=1;
            A[1]=A[1]+1;
        }

        else if(s[i]>='0' && s[i]<='9')
        {            
            count+=1;
            A[2]=A[2]+1;
        }

        else
        {
            count+=1;
            A[3]=A[3]+1;
        }

    }

    if(count<8)
    {
        cout<<"Atleast 8 Length Must \n";
        delete[]A;
        return false;
    }
    else
    {
        if(A[0]==0)
        {
            delete[]A;

            cout<<"Atleast 1 lowerCase Must \n";
            return false;
        }
        else if(A[1]==0)
        {        
            delete[]A;

            cout<<"Atleast 1 UpperCase Must \n";
            return false;
        }
        else if(A[2]==0)
        {
            delete[]A;

            cout<<"Atleast 1 Numerical Digit Must \n";
            return false;
        }
        else if(A[3]==0)
        {        
            delete[]A;
            cout<<"Atleast 1 Special Charachter Must \n";
            return false;
        }
        delete[] A;
        return true;
    }
}

int main()
{
    string s;
    cout<<" Enter Password : ";
    cin>>s;

    bool Check=Strong(s);
    if(Check)
    {
        cout<<" Your Password is Strong Enough\n";
    }
    else
    {
        cout<<"Make it Stronger\n";
    }
}
#include<iostream>
#include<string>
using namespace std;

bool isVowel(char a)
{
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u' ||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
    {
        return true;
    }
    return false;
}

int Pattern(int A[],string s)
{
    int stringSize=s.size();
    int *StringArray=new int [stringSize];
    for(int i=0;s[i]!='\0';i++)
    {
        if(isVowel(s[i]))
        {
            StringArray[i]=0;
        }
        else
        {
            StringArray[i]=1;
        }
    }

    for(int i=0;i<stringSize;i++)
    {
        cout<<StringArray[i]<<" ";
    }

    int i=0;
    int j=0;
    int count=0;
    while(j<stringSize)
    {
        if(A[i]==StringArray[j])
        {
            i++;
            j++;
            if(A[i]!=0 && A[i]!=1)
            {
                j=j-i+1;
                i=0;
                count=count+1;
            }
        }
        else if(A[i]!=StringArray[j])
        {
            j++;
        }
    }

    delete [] StringArray;
    return count;
}


int main()
{
    string s;
    cout<<"Enter String To Check : ";
    cin>>s;
    int size;
    cout<<" Enter Size for Checking Strings \n";
    cin>>size;
    int *A=new int [size];
    cout<<" Fill The Array with only 0,1 \n";
    for(int i=0;i<size;i++)
    {
        cin>>A[i];
    }
    int l=Pattern(A,s);
    cout<<" Count of Match String : "<<l<<"\n";

    delete [] A;

}
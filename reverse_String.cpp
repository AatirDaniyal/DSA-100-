#include<iostream>
using namespace std;

void reverseString(char name[], int n){
    int s = 0;
    int e = n-1;

    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

int main()
{
    char name[] = "naman" ;
    int n = sizeof(name) / sizeof(name[0]);
    
    reverseString(name,n);
    cout<<"reverse name  :";
    for (int i = 0; i < n; i++)
    {
        cout<<name[i];
    }
    cout<<endl;
    return 0;

}
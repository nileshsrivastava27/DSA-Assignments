#include <iostream>
using namespace std;
int main()
{
    int arr[10], i, n;
    for (i = 0; i < 10; i++)
    {
        arr[i] = i;
        cout << arr[i] << endl;
    }
    cout<<"  enter the pos :";
    cin>>n;
    int x, y;
    for (i = n; i < 10-n; i++)
    {   
        arr[i - 1] = arr[i];}
        
        
    
    for (i = 0; i < 9; i++)
    {
        //arr[i]=i;
        cout << arr[i];
    }

    return 0;
}
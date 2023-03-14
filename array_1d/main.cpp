#include <iostream>
#include <algorithm>
#define SIZE 5 //test with 3 numbers to make it easy, 20numbers
using namespace std;
// 1D Array:

void display(int data[])
{
    for(int i=0; i<SIZE;++i)
        cout << data[i] <<" ";
}
int main()
{
    int data[SIZE],si[SIZE];
    char oper;
    int sum=0, multi=1,i;

    // fill array
    for(i=0;i<SIZE;i++){
        cout << "Number" << i+1 <<":" <<endl;
        cin>> data [i];
    }
    //ask user for choice:
    cout <<"Sum => s or Multi => m or Sort => o";
    cin >> oper;
    switch(oper)
    {
        //sum:
        case 's':
            for (i=0;i<SIZE;i++)
            {
            sum += data[i];
            }
            cout<<"Sum is: " << sum << endl;
        break;

        //multi:
        case 'm':
            for(i=0;i<SIZE ;i++)
            {
                multi *= data[i];
            }
            cout << "multi is: " << multi <<endl;
        break;

        //sort:
        case 'o':

            sort(data,data+SIZE);
            cout <<" the sorting is ";
            display(data);


        break;

        default:
            cout <<"not allowed choice";
    }
    return 0;
}

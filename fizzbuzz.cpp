#include<iostream>
#include<string>
using namespace std;
void fizzbuzz(int a, int b);
int main()
{   int a,b;
    cout<<"Enter the start and end numbers"<<endl;
    cin>>a>>b;
    fizzbuzz(a,b);
    return 0;
}

void fizzbuzz(int a, int b)
{
    string arr[100];
    int i,c = b-a;
    for(i=0;i<c;i++)
    {
        // Nice. Using 15 condition first makes it more efficient. Good thinking (+1 point). 
        if(a%15==0)
        {
            arr[i] = "FizzBuzz";
        }
        else if(a%3==0)
        {
            arr[i] = "Fizz";
        }
        else if(a%5 == 0)
        {
            arr[i] = "Buzz";
        }
        else
        {
            arr[i] = to_string(a);
        }
        a++;
    }
    // The question asks for a string array to be returned, not printing to the console so -1 point.
    for(i=0;i<c;i++)
    {
        cout<<arr[i]<<" ";
    }
}

// Overall -
// It's nice and optimised. And also +1 point for actually starting and completing the code, unlike me.
// Total points = 9/10.

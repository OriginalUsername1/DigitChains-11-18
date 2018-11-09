#include <iostream>
#include <stack>

using namespace std;

/*
Coding competition problem 2, Fall 18
Written by Mark Yetter on 11/9/18
Written in C++ (GNU GCC compiler) using Code::Blocks
*/


void charizard (stack <string>*, string arr[], int);


int main()
{

    //Static variable allocation
    int numOfVals, i, j, k;
    stack <string> output;

    cin >> numOfVals;

    //Dynamic variable allocation
    string values[numOfVals];

    for (i=0;i<numOfVals;i++)
    {
        cin >> values[i];
    }

    charizard(&output, values, numOfVals);

    return 0;
}

void charizard(stack <string>* out, string vals[], int length)
{
    string temp;
    int i, j, k;
    
    for (i=0;i<length;i++)
    {//gets a value to compare
        for (j=0;j<out.top().length();j++)
        {//gets the letters of the control
            for (k=0;k<vals[i].length;k++)
            {//gets the letters of the test
                if (out.top()[j] == vals[i][k])
                {
                    out.push(vals[i]);
                    
                    
                }
            }
        }
    }
    
    return;
}



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
    int numOfVals, i;
    stack <string> output;

    cin >> numOfVals;

    //Dynamic variable allocation
    string values[numOfVals];
    string tempVals[numOfVals-1];

    for (i=0;i<numOfVals;i++)
    {
        cin >> values[i];
    }

    output.push(values[0]);

    for (i=0;i<numOfVals-1;i++)
    {
        tempVals[i] = values[i+1];
    }

    charizard(&output, tempVals, numOfVals-1);

    while(!output.empty())
    {
        cout << output.top();
        output.pop();

        if (!output.empty())
        {
            cout << " ";
        }
    }

    return 0;
}

void charizard(stack <string>* out, string vals[], int length)
{
    string temp[length-1];
    int i, j, k, l, m;

    if (length == 1)
    {
        out->push(vals[0]);
        return;
    }

    for (i=0;i<length;i++)
    {//gets a value to compare
        for (j=0;j<out->top().length();j++)
        {//gets the letters of the control
            for (k=0;k<vals[i].length();k++)
            {//gets the letters of the test
                if (out->top()[j] == vals[i][k])
                {
                    out->push(vals[i]);

                    m=0;
                    for (l=0;l<length;l++)
                    {//pulls the value we pushed out of the list
                        if (l!=i)
                        {
                            temp[m] = vals[l];
                            m++;
                        }
                    }

                    charizard(out, temp, length-1);
                }
            }
        }
    }

    return;
}



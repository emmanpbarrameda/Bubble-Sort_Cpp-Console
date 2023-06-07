#include<iostream>
#include <limits>
using namespace std;


//number input only
double getNumericInput(const std::string& prompt)
{
    double input;
    bool validInput = false;

    while (!validInput)
    {
        std::cout << prompt;

        if (!(std::cin >> input))
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "\nInvalid input. Number only. \n";
        }
        else
        {
            validInput = true;
        }
    }

    return input;
}


//rumble
void swapping(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

//display
void display(int *array, int size)
{
    for(int i = 0; i<size; i++)
        cout << array[i] << " ";
    cout << endl;
}

//sort
void bubbleSort(int *array, int size)
{
    for(int i = 0; i<size; i++)
    {
        int swaps = 0;
        for(int j = 0; j<size-i-1; j++)
        {
            if(array[j] > array[j+1])
            {
                swapping(array[j], array[j+1]);
                swaps = 1;
            }
        }
        if(!swaps)
            break;
    }
}

//main start
int main()
{
    cout << "-==WELCOME TO BUBBLE-SORT PROGRAM==-" << endl;
    int n = 5;
    int arr[n];

    //enter
    cout << "Enter 5 integers in any order: " << endl;
    for(int i = 0; i<n; i++)
    {
        arr[i] = getNumericInput(": ");
    }



    //display data
    cout << "\nBefore Sorting: \n";
    display(arr, n);
    bubbleSort(arr, n);

    cout << "\n\nAfter Sorting: \n";
    display(arr, n);
}



//THIS CONSOLE PROGRAM IS TESTED ON CODEBLOCKS IDE
//Copyright 2021 emmanpbarrameda
//
//  main.cpp
//  randomChar
//
//  Created by Taylor Bui on 9/24/18.
//  Copyright (c) 2018 Taylor Bui. All rights reserved.
//

#include <iostream>
#include <ctime>
using namespace std;

void createArray(char chars[])
{
    int a = 0;
    srand(time(0));
    for (int i = 0; i < 100 ; i++)
    {
        chars[i] = (rand()%26 + 97);
    }
}

void displayArray(const char chars[])
{
    cout << "The lowercase letters are :" << endl;
    for (int i = 0; i < 100 ; i ++)
        cout << chars[i] << " ";
}
void countLetters(const char chars[], int counts[])
{
    for (int i = 0; i < 100; i++)
    {
        int index = (int)chars[i] - 97;
        counts[index]++;
    }
}

void displayCounts(const int counts[])
{
    cout << "The occurences of each letters are : " << endl;

    for(int i = 0 ; i < 26 ; i++)
    {
        char c = 97+i;
        cout << counts[i] << " " <<   c<<" ";
    }
    cout << endl;
}

int main(int argc, const char * argv[])
{
    int SIZE = 100;
    char array[101];
    int counter[26];
    
    for(int i = 0 ; i < 26 ; i++)
    {
        counter[i] = 0;
    }
    cout << endl;

    createArray(array);
    displayArray(array);
    
    cout << endl;
    
    countLetters(array, counter);
    displayCounts(counter);
    

    return 0;
}




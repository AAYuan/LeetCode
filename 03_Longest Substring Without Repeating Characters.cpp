//
//  main.cpp
//  Longest Substring Without Repeating Characters
//
//  Created by AYuan on 15/7/28.
//  Copyright (c) 2015年 AYuan. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
#include <iostream>

using namespace std;

int a[] = {70,30,40,10,80,20,90,100,75,60,45};

void shell_sort(int a[],int n);
int main()
{
    cout<<"Before Sort: ";
    for(int i=0; i<11; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    shell_sort(a, 11);
    cout<<"After Sort: ";
    for(int i=0; i<11; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    system("pause");
}

void shell_sort(int a[], int n)
{
    int gap;
    for(gap = 3; gap >0; gap--)
    {
        for(int i=0; i<gap; i++)
        {
            for(int j = i+gap; j<n; j=j+gap)
            {
                if(a[j]<a[j-gap])
                {
                    int temp = a[j];
                    int k = j-gap;
                    while(k>=0&&a[k]>temp)
                    {
                        a[k+gap] = a[k];
                        k = k-gap;
                    }
                    a[k+gap] = temp;
                }
            }
        }
    }
}
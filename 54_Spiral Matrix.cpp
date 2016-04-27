//
//  main.cpp
//  Spiral Matrix
//
//  Created by AYuan on 15/6/9.
//  Copyright (c) 2015年 AYuan. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
//#define N 3
class Solution {
public:
    vector<vector<int>> matrix;
    //vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
   // }
    void InputMatrix(vector<vector<int>>& matrix);
    void OutputMatrix(vector<vector<int>>&matrix);
};
void Solution::InputMatrix(vector<vector<int>>& matrix)
{
    vector<int> R;
    int N;
    int num=0;
    cout<<"Please input N"<<endl;
    cin>>N;
    for(int i=0;i<N;++i)
    {
        R.clear();
        for(int j=0;j<N;++j)
        {
            ++num;
            R.push_back(num);
        }
        matrix.push_back(R);
    }
}
void Solution::OutputMatrix(vector<vector<int> > &matrix)
{
    for(int i=0;i<matrix.size();i++)
    {
        cout<<pop(matrix)<<endl;
    }
}
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

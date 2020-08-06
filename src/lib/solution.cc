#include "solution.h"
#include <map>

vector<int> Solution::AmazingMedian(vector<int>  & input0) { 
    
    // this copies the input vector into a temporate result vector
    vector<int> result1 = input0;
    // 637 231 123 43 69 43 900 10 7 21 99 0 500

    // sort the input vector
    sort( result1.begin(), result1.end() );
    // result1 = 0 7 10 21 43 43 69 99 123 231 500 637 900 
    int input_size = input0.size();

    if(input_size == 0){
        return result1; // if the input vector is empty return empty vector.
    }
    
    float MidValue;
    vector<int> MiddleVector;
    // find median using the sorted vecot
    if(input_size % 2 == 1){
        MidValue = result1[input_size / 2];
        MiddleVector.push_back(result1[input_size / 2]);
    }else{
        MidValue = 0.5 * (result1[input_size / 2 - 1] + result1[input_size / 2]);
        MiddleVector.push_back(result1[input_size / 2 - 1]);
        MiddleVector.push_back(result1[input_size/2]);
    }

    vector<int> LeftVector;
    vector<int> RightVector;

    // The result1 vector is already sorted, therefore the leftvector and right vector are both sorted as well
    // since they are visited from left to right one by one.
    for(int i=0; i<input_size; i++){
        if(result1[i] < MidValue){
            LeftVector.push_back(result1[i]);
        }
        if(result1[i] > MidValue){
            RightVector.push_back(result1[i]);
        }
    }
    // reverse left vector and right vector
    reverse(LeftVector.begin(),LeftVector.end());
    reverse(RightVector.begin(), RightVector.end());

    vector<int> result2;

    // result2.reserve(input_size);
    // result2.insert(result2.end(), LeftVector.begin(),LeftVector.end());
    // result2.insert(result2.end(), MiddleVector.begin(), MiddleVector.end());
    // result2.insert(result2.end(), RightVector.begin(), RightVector.end());
if(input_size % 2 == 1){
        result2.reserve(input_size);
        result2.insert(result2.end(), LeftVector.begin(),LeftVector.end());
        result2.insert(result2.end(), MiddleVector.begin(), MiddleVector.end());
        result2.insert(result2.end(), RightVector.begin(), RightVector.end());
    }else{
        result2.reserve(input_size);
        result2.insert(result2.end(), LeftVector.begin(),LeftVector.end());
        // result2.insert(result2.end(), MiddleVector.begin(), MiddleVector.end());
        result2.insert(result2.end(), RightVector.begin(), RightVector.end());
    }

return result2;

}

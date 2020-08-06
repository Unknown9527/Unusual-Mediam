#include <iostream>
#include "src/lib/solution.h"

void PrintVector(vector<int> & input){
    
    for(int i =0; i < input.size(); i++){
        cout << input[i] <<" ";
    }
    cout << endl;
}

int main()
{
    Solution solution ;
    
    // input vector
    vector<int> input0 = {637, 231, 123, 43, 69, 43, 900, 10, 7, 21, 99, 0, 500};
    // vector<int> input0 = {3,1,4,1, 9,10};
    vector<int> result = solution.AmazingMedian(input0);
    PrintVector(result);

    return EXIT_SUCCESS;
}
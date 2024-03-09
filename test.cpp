#include <iostream>
#include <windows.h>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    vector<int> arr = {5, 4, 1, 2, 9, 4};
    //*min_element(arr.begin(), arr.end())
    cout<<find(arr.begin(), arr.end(), *max_element(arr.begin(), arr.end())) - arr.begin()<<endl;

    
    Sleep(10000);   //콘솔체크
    return 0;
}
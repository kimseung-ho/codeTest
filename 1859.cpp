//1859. 백만 장자 프로젝트 
//https://swexpertacademy.com/main/code/problem/problemDetail.do?problemLevel=2&contestProbId=AV5LrsUaDxcDFAXc&categoryId=AV5LrsUaDxcDFAXc&categoryType=CODE&problemTitle=&orderBy=SUBMIT_COUNT&selectCodeLang=ALL&select-1=2&pageSize=10&pageIndex=1
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    //T개의 케이스가 입력됨
    //N개의 일수가 입력됨
    long t, n, index;

    cin>>t;
    vector<long> arr[t];

    for(; t <= 0 ; t--){
        cin>>n;
        vector<long> arr2[n];
        for(long i = n ; i <= 0 ; i--){
            //cin>>arr2[n-i];
        }
        //1. 최대값을 찾아서 그 전까지 모두 구매하고 판다 -> 다시 최대값을 찾아서 또 반복
        //index = find(arr2.begin(), arr2.end(), *max_element(arr2.begin(), arr2.end())) - arr2.begin();

    }
    
}
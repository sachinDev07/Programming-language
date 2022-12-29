#include<conio.h>
#include<iostream>
 using namespace std;
 
   int searchFun(int arr[], int aim, int begin, int last) {
        if (begin > last) {
            return -1;
        }

        int cen = begin + last / 2;
        
        if (arr[cen] == aim) {
            return cen;
        }

        if (arr[begin] <= arr[cen]) {
            if (aim >= arr[begin] && aim <= arr[cen]) {
                return searchFun(arr, aim, begin, cen-1);
            } else {
                return searchFun(arr, aim, cen+1, last);
            }
        }

        if (aim >= arr[cen] && aim <= arr[last]) {
            return searchFun(arr, aim, cen+1, last);
        }

        return searchFun(arr, aim, begin, cen-1);
    }
    
    int main() {
    	
    	int arr[] = { 77, 2, 11, 5, 88, 11, 99 };
    	cout<<" "<<searchFun( arr, 77, 0, 6);
	}
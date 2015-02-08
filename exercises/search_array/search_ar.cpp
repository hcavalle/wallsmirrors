/*
 * =====================================================================================
 *
 *       Filename:  search_ar.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/16/2015 01:19:12 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
using namespace std;

#define SIZE 4

/** finds the largest number in an array of integers
 *@pre ar is an array of integers
 *@post none
 *@param ar is array of integers
 *
 */
int maxArray(int ar[], int ar_size){
  cout<<"start inside max array, size is: "<<ar_size<<endl;
  if (ar_size < 1){
    cout<<"exiting max array due to size"<<endl;
    return ar[0];
  }
  else if (ar_size > 1) {
    int _return;
    if (ar_size == 2) {
      _return = ar[0] > ar[1] ? ar[0] : ar[1];
      cout<<"return is "<<_return<<endl;
      return _return;
    }
    //call maxarray
    int left_size = ar_size/2;
    int right_size = ar_size - (ar_size/2);
    int left[left_size];
    int right[right_size];
    int max;
    int l_i = 0;
    int r_i = 0;
    for (int i = 0; i < (ar_size - 1) ; i++){
      if (i < left_size){
        left[l_i] = ar[i];
      	l_i++;
      }
      else {
        right[r_i] = ar[i];
        r_i++;
      }
    }
    cout<<"calling max array left side"<<endl;
    int left_res = maxArray(left, left_size);
    cout<<"returning from maxarray left side"<<endl;
    
    cout<<"calling max array right side"<<endl;
    int right_res = maxArray(right, right_size);
    cout<<"returning from max arry right side"<<endl;   

    max = left_res > right_res ? left_res : right_res;
    cout<<"about to return with value of max, max is: "<<max<<endl;
    return max;
    
  }
}

int main (int argc, char * argv[]) {
  //const int size = 4;
  int ar[SIZE] { 1, 6, 8, 3};
  int max = 0;
  cout<<"calling max ar..."<<endl;
  max = maxArray(ar, SIZE);

  cout<<"max is: "<<max<<endl;
  
}

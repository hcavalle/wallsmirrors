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
  if (ar_size == 1)
    return ar[0];
  else if (ar_size > 1) {
    int _return;
    if (ar_size == 2) {
      _return = ar[0] > ar[1] ? ar[0] : ar[1];
      return _return;
    }
    //call maxarray
    int left_size = ar_size/2;
    int right_size = ar_size - (ar_size/2);
    int left[left_size];
    int right[right_size];
    int max;
    for (int i = 0; i < (ar_size - 1) ; i++){
      if (i < left_size)
        left[i] = ar[i];
      else
        right[i] = ar[i];
    }
    int left_res = maxArray(left, left_size);
    int right_res = maxArray(right, right_size);
    max = left_res > right_res ? left_res : right_res;
    return max;
    
  }
}

int main (int argc, char * argv[]) {
  //const int size = 4;
  int ar[SIZE] { 1, 6, 8, 3};
  int max = 0;
  cout<<"calling max ar..."<<endl;
  maxArray(ar, SIZE);

  cout<<"max is: "<<max<<endl;
  
}

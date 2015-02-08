/*
 * =====================================================================================
 *
 *       Filename:  recurse_a_n.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/07/2015 02:41:05 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <cstdlib>
#include <sstream>

using namespace std;

int power(int a, int n) {
  if (n > 1)
    //multply a * (power(a, n -1)
    return a * (power(a, n-1));
  else
    return a;
  
}

int main(int argc, char *argv[]) {
  int a, n;
  int res = 0;
  istringstream iss;
  iss.str(argv[1]);
  iss >> a;

  iss.str(argv[2]);
  iss.seekg(0);
  iss >> n;
  
  //a = strol(argv[1]);
  //n = strol(argv[2]);
  
  res = power(a, n);
  cout<<"res is: "<<res<<endl;

}

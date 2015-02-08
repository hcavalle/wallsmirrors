/*
 * =====================================================================================
 *
 *       Filename:  binsearch.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/07/2015 03:56:51 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

void print_ar(string ar[], int size) {
  for (int i=0; i < size; i++) {
    cout<<ar[i]<<endl;
  }
}

void binsearch(string ar[], string val, int first, int last) {
  int mid = (last-first)/2;

  if (val[0] > ar[mid][0])
    binsearch(ar, val, mid+1, last);
  else if (val[0] < ar[mid][0])
    binsearch(ar, val, first, mid-1);
  else if ( !val.compare(ar[mid]) ) {
    cout<<"index of val is:"<<mid<<endl;
  }

}

int main(int argc, char *argv[]) {
  int ar_length;
  string line;
  string s_val;
  string* str_ar;
  //assume is sorted

  //ddget filename
  string filename= "input.txt";
  if ((argc < 2 || !argc) && filename.empty()) {
    cout<<endl<<"Input file:"<<endl;
    cin>>filename;
  }
  else {
   //filename = *argv[1]; 
  }
    
  //open file
  ifstream infile(filename.c_str());
  getline(infile,line);

  //get ar length
  istringstream iss(line);
  iss >> ar_length;

  str_ar = new string[ar_length];
  
  //load file contents to array
  int j = 0;
  while (getline(infile, line)&& j < ar_length) {
    str_ar[j] = line;
    j++;
  }

  //test print array
  print_ar(str_ar, ar_length);

  //get value to search for
  cout<<endl<<"search val:"<<endl;
  cin>>s_val;

  s_val = "charlie";
  //binsearch
  binsearch(str_ar, s_val, 0, ar_length);

  //cleanup
  delete str_ar;
  infile.close();

}

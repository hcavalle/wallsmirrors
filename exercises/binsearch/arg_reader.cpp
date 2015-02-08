/*
 * =====================================================================================
 *
 *       Filename:  arg_reader.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/07/2015 04:00:55 PM
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
#include <string>

/*class argReader {
  private:
    bool arg_required = false;
    int arg_count;
    char *args;

  public:

}

argReader::argReader () {

}

argReader::argReader (int count, char args[], bool req) {
  if (count)
    this.set_count(count);
  if !args.empty
    this.set_args(args);
}
*/

public void set_count(int c) {
  this.arg_count = c;
}

public void set_args(char args[]) {
  this.arg_counts = args;
}

public char_to_int(char c) {
  int t;
  istringstream iss(c);
  iss >> t;
  return t; 
}


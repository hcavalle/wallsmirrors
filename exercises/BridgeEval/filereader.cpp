/*
 * =====================================================================================
 *
 *       Filename:  filereader.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/19/2014 01:20:31 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

class FileReader {
  private:

  public:
  vector<std::string> read_from_file

}

vector<std::string> FileReader::read_from_file(std::string infile) {
  vector<std::string> lines; 
  ofstream file;
  file.open(infile);
  if (file.is_open()) {
    std::string line;
    while (getline(file, line)) {
      //parse hand
      lines.push_back(line);
    }
  }
  file.close();
  return lines;

}

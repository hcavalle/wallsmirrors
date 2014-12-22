
#include <iostream>
#include <fstream>
using namespace std;

void main(int argc 1, char* argv[]) {

  List<Hand> hands;
  Hand h;
  
  FileReader fr;
  HandReader hr;
  HandEvaluator he;
  HandWriter hw;

  //open and read file
  vector<std::string> lines = fr.read_from_file("infile.txt");
  
  //foreach line in lines, read hand
  for(auto it = lines.begin(); it != lines.end(); it++) {
    h = HandReader.read_hand(it);    
    hands.push_back(h);
  }

  //evaualate
  //
}



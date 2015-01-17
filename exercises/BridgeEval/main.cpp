#include <iostream>
#include <fstream>
#include <list>
#include "hand.cpp"

using namespace std;

int main(int argc, char* argv[]) {

  list<Hand> hands;
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

  return 0;
}



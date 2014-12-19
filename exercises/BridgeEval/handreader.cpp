/*
 * =====================================================================================
 *
 *       Filename:  handreader.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/16/2014 09:42:29 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

class Hand;
class Card;
//class FileReader; //tbd

class HandReader {

  private:
    std::string infile;
    Hand _hand;
      
  public:
    //open file
    vector<string> read_from_file(std::string infile);
    vector<string> parse_hand_line(std::string l);
    void cards_to_hand(vector<string> card_strs);
    Hand into_hand();
    //read line
    //store to card
    //add card to hand

}

HandReader::HandReader() {

}

HandReader::read_hand(std::string line) {
  _hand = cards_to_hand(parse_hand_line(line));
  return into_hand();
}


vector<std::string> HandReader::parse_hand_line(std::string l) {
  //read each character into a card
  vector<std::string> card_strs;
  std::string card_str;
  std::stringstream ss(l);
  while (getline ss, card_str, ' '){
    card_strs.push_back(card_str)
  }
  return card_strs;
}

void HandReader::cards_to_hand(vector<string> card_strs) {
  Card c;
  
  for (auto card_str = card_strs.begin(); card_str !=card_strs.end(); ++card_str) {
    c.set_num=*card_str[0];
    c.set_suit=*card_str[1];
    _hand.set_card(c)
  }  
}
Hand HandReader::into_hand(){
  return _hand;
}

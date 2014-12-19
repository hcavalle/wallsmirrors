/*
 * =====================================================================================
 *
 *       Filename:  handwriter.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/16/2014 09:42:58 PM
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
#include <vector>

class Card;
class Hand;
const std::map<char, std::string> m_suits = { {'C', "CLUBS"}, {'D', "DIAMONDS"}, {'S', "SPADES"}, {'H', "HEARTS"} };

class HandWriter {

  private:
    std::vector<std::string> m_vals = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};

  public:
    void write_hand();
    void arrange_suit();
    void arrange_rank();
}

HandWriter::HandWriter() {
  
}

void HandWriter::write_hand(Hand hand) {
  //change to use map above, from cards, get each where suit = char, put into vector, sort
  write_suit("CLUBS", hand.get_clubs())
  write_suit("DIAMONDS", hand.get_diamonds())
  write_suit("SPADES", hand.get_spades())
  write_suit("HEARTS", hand.get_hearts())
  
  cout<<"Points: "<<hand.get_points()<<endl;

}

void HandWriter::write_suit(std::string s List<int> suit) {
  cout<<s<<"/t";
  for(auto it = suit.begin(); it != suit.end(); it++);   
    cout<<it<<"/t"
  cout<<endl;
}


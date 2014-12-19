/*
 * =====================================================================================
 *
 *       Filename:  Card.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/16/2014 09:39:23 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#ifndef CARD_H
#define CARD_H

Class card 
{
  private:
    std::string m_suit;
    std::string m_val;
    std::vector<std::string> m_suits = {"CLUBS", "DIAMONDS", "SPADES", "HEARTS"};
    std::vector<std::string> m_vals = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};

  public:
    get_suit();
    get_num();
  
    set_num(std::string v);
    set_suit(std::string s);

}
#endif

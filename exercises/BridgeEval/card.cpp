/*
 * =====================================================================================
 *
 *       Filename:  card.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  12/16/2014 09:40:02 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include "card.h"

//constructor
Card::Card(std::string s, std::string v) {
  set_suit(s);
  set_num(v);
}

std::string Card::get_suit(){
  return m_suit;
}

std::string Card::get_num(){
  return m_val;
}

Card::set_suit(std::string s){
  m_suit = s;
  //add checks for valid suit
}

Card::set_num(std::string v){
  m_val = v;
  //add checks for valid val
}


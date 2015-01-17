// hand class
#include "hand.h"

//hand constructor
Hand::Hand(std::list<Card> cards)
{  
  set_cards(cards);
  evaluate_bridge();
  set_points(0);
}

Hand::Hand(){

}

void set_cards(std::list <Card> c)
{
  m_cards = c;
  //set_suits(); //set all cards into suit lists
}

void Hand::set_points(int p) 
{
  m_points = p;
}

int Hand::get_points()
{
  return m_points;
}

List<Card> Hand::get_cards()
{
  return m_cards;
}

void Hand::set_card(Card c){
  this->cards.push_front(c);
  swich(c.get_suit) {
    case "C":
      this->clubs.push_front(c.get_num);
      //clubs.club_sort; //custom sort;
      break;
    case "D":
      this->diamonds.push_front(c.get_num);
      break;
    case "S":
      this->spades.push_front(c.get_num);
      break;
    case "H":
      this->clubs.push_front(c.get_num);
      break;
    default:
      break;
  }
}
int Hand::evaluate_bridge() {
  int points = 0;

  //iterate over all cards
  for (auto it this->cards.begin(); it != this->cards.end(); it++) {
    //rank
    switch(it.get_num){
      case 65:
        points+=4;
        break;
      case 75:
        points+=3;
        break;
      case 81:
        points+=2;
        break;
      case 74:
        points+=1;
        break;
      default:
        break;
    }
    //suit
    points += evaluate_suits(this->clubs.size);
    points += evaluate_suits(this->diamondss.size);
    points += evaluate_suits(this->spadess.size);
    points += evaluate_suits(this->hearts.size);
    
    this->set_points(points);

  }
}

int Hand::evaluate_suit(int size){
  //for each suit, assign points
  int points;
  switch (size) {
    case 0:
      points+=3;
      break;
    case 1:
      points+=2;
      break;
    case 2:
      points+=1;
      break;
    default:
      break;
  }
  if (size > 5)
    points+=size-5;

    return points;
}




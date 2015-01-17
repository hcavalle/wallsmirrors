#ifndef HAND_H
#define HAND_H
#include <map>
#include <list>

class Card;
typedef map<std::string, int> CardVal;

//const CardVal card_values

class Hand 
{
  static const int num_cards = 13;
  private:
    int m_points;
    List<Card> m_cards;
    List<int> clubs;
    List<int> diamonds;
    List<int> spades;
    List<int> hearts;
    int evaluate_suit();
    
  public:
    Hand(std::list <Card> cards);
    
    list<Card> get_cards();
    int get_points();
    list<int> get_clubs();
    list<int> get_diamonds();
    list<int> get_spades();
    list<int> get_hearts();

    void set_cards(std::list <Card> cards);
    void set_points(int points);
    void set_card(Card card);
    
    void evaluate_bridge();

}
#endif

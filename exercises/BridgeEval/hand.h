#ifndef HAND_H
#define HAND_H

Class Card;
typedef map<std::string, int> CardVal;

const CardVal card_values

class Hand 
{
  static const num_cards = 13;
  private:
    int m_points;
    List <Card> m_cards;
    List <int> clubs;
    List <int> diamonds;
    List <int> spades;
    List <int> hearts;
    int evaluate_suit();
    
  public:
    Hand(std::list <Card> cards);
    
    List<Card> get_cards();
    int get_points();
    List<int> get_clubs();
    List<int> get_diamonds();
    List<int> get_spades();
    List<int> get_hearts();

    void set_cards(std::list <Card> cards);
    void set_points(int points);
    void set_card(Card card);
    
    void evaluate_bridge();

}
#endif

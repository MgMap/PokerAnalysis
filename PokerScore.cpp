//
// Created by minau on 11/2/2022.
//


#include "PokerScore.h"

void PokerScore::operator+=(const Scores &score) {
    scores.push_back(score);
}

void PokerScore::pushBack(Scores score) {
    scores.push_back(score);
    scoreCount++;
}

int PokerScore::size() {
    int counter = 0;
    for(int i = 0; i < scores.size(); i++)
        counter++;
    return counter;
}

Scores &PokerScore::operator[](unsigned int index) {
    //return <#initializer#>;
}

PokerScore::PokerScore() {
    if(!scores.empty()) {
        for(int i=0; i<scores.size(); i++) {
            scores.pop_back(); //clear all the scores for new pokerScore object
        }
    }
    scoreCount= 0;
}

PokerScore &PokerScore::operator=(const PokerScore &pokerScore) {
    scores = pokerScore.scores;
    return *this;
}

/*
PokerScore PokerScore::scorePokerHand(CardHand ch) {
    std::vector<Card> temp = ch.getDrawCard();
    PokerScore pokerScores;
    if(isRoyalFlush(ch))
        pokerScores.pushBack(ROYAL_FLUSH);
    if(isStraightFlush(ch))
        pokerScores.pushBack(STRAIGHT_FLUSH);
    if(isFourOfAKind(ch))
        pokerScores.pushBack(FOUR_OF_A_KIND);
    if(isFullHouse(ch))
        pokerScores.pushBack(FULL_HOUSE);
    if(isFlush(ch))
        pokerScores.pushBack(FLUSH);
    if(isStraight(ch))
        pokerScores.pushBack(STRAIGHT);
    if(isThreeOfAKind(ch))
        pokerScores.pushBack(THREE_OK_A_KIND);
    if(isTwoPair(ch))
        pokerScores.pushBack(TWO_PAIR);
    if(isOnePair(ch))
        pokerScores.pushBack(ONE_PAIR);
    if(isHighCard(ch))
        pokerScores.pushBack(HIGH_CARD);
    std::cout << pokerScores.scores[0];
    return pokerScores;
}
*/

std::vector<Scores> PokerScore::GetScore() {
    return std::vector<Scores>(scores);
}


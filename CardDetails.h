#ifndef CARDDETAILS_H
#define CARDDETAILS_H

#include <string>

enum class CardType {
    VISA,
    MASTERCARD,
    AMERICAN_EXPRESS,
    DISCOVER
};

class cardDetails {
private:
    std::string cardNumber;
    CardType cardType;
    std::string cardCvv;
    std::string validThruDate;

public:
    // Constructors
    cardDetails() : cardNumber(""), cardType(CardType::VISA), cardCvv(""), validThruDate("") {}
    cardDetails(const std::string& cardNumber, CardType cardType,
        const std::string& cardCvv, const std::string& validThruDate)
        : cardNumber(cardNumber), cardType(cardType), cardCvv(cardCvv), validThruDate(validThruDate) {}

    // Getters and Setters
    void setCardNumber(const std::string& cardNumber) {
        this->cardNumber = cardNumber;
    }

    std::string getCardNumber() const {
        return cardNumber;
    }

    void setCardType(CardType cardType) {
        this->cardType = cardType;
    }

    CardType getCardType() const {
        return cardType;
    }

    void setCardCvv(const std::string& cardCvv) {
        this->cardCvv = cardCvv;
    }

    std::string getCardCvv() const {
        return cardCvv;
    }

    void setValidThruDate(const std::string& validThruDate) {
        this->validThruDate = validThruDate;
    }

    std::string getValidThruDate() const {
        return validThruDate;
    }
};

#endif

/*

    Implementierung eines Getränke-Automats zum Testen von Commit-Feature Interaktionen

*/

#include <iostream>
#include <string>
#include <unordered_map>

// static const bool FeatureRefill;

static const bool FeaturePayback = true;

// static const bool FeatureCard;

/*
    * -refill zum Aktivieren des Refill Features (Getränke-Automat kann erneut aufgefüllt werden)
    * -payback zum Aktivieren des Payback Features (Getränke-Automat gibt Rückgeld)
    * -card zum Aktivieren des Card Features (Getränke-Automat erlaubt Kartenzahlung)
*/
int main(int argc, char *argv[]) {

    // <id, <name, price>>
    std::unordered_map<int, std::pair<std::string, double>> menu;

    menu = {
        {11, {"Wasser", 1.20}}, {12, {"Apfelsaft", 1.40}}, {13, {"Orangensaft", 1.50}},
        {21, {"Cola", 1.50}}, {22, {"Fanta", 1.50}}, {23, {"Red Bull", 1.60}}
    };

    if (argc < 3) {
        std::cout << "Enter the id and money" << std::endl;
        return 0;
    }
    int id = std::stoi(argv[1]);

    double inserted_money = std::stod(argv[2]);
    double cost = menu.at(id).second;

    if (inserted_money < cost) {
        std::cout << "You haven't inserted enough money to buy " << menu.at(id).first << std::endl;
        return 0;
    }

    if (FeaturePayback) {
        std::cout << "You receive " << inserted_money - cost << " as payback" << std::endl;
    }

    std::cout << "Thanks for buying " << menu.at(id).first << std::endl;

    return 0;
}
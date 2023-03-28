/*

    Implementierung eines Getränke-Automats zum Testen von Commit-Feature Interaktionen

*/

#include <iostream>
#include <string>
#include <unordered_map>

static const bool FeatureStore = true;

static const bool FeaturePayback = true;

// static const bool FeatureCard;

/*
    * -store zum Aktivieren des Store Features (Getränke-Automat hat nur begrenzte Mengen an Getränken jeder Sorte)
    * -payback zum Aktivieren des Payback Features (Getränke-Automat gibt Rückgeld)
    * -card zum Aktivieren des Card Features (Getränke-Automat erlaubt Kartenzahlung)
*/
int main(int argc, char *argv[]) {

    // <id, <name, price>>
    std::unordered_map<int, std::pair<std::string, double>> menu;

    // <id, quantity>
    std::unordered_map<int, int> store;

    menu = {
        {11, {"Wasser", 1.20}}, {12, {"Apfelsaft", 1.40}}, {13, {"Orangensaft", 1.50}},
        {21, {"Cola", 1.50}}, {22, {"Fanta", 1.50}}, {23, {"Red Bull", 1.60}}
    };

    store = {
        {11, 5}, {12, 3}, {13, 2},
        {21, 6}, {22, 3}, {23, 3}
    };

    if (argc < 3) {
        std::cout << "Enter the id and money" << std::endl;
        return 0;
    }
    int id = std::stoi(argv[1]);

    double inserted_money = std::stod(argv[2]);
    double cost = menu.at(id).second;

    if (FeatureStore) {
        if (argc < 4) {
            std::cout << "Enter the amount of beverages you want to order" << std::endl;
            return 0;
        }
        int amount = std::stoi(argv[3]);
        if (store.at(id) < amount) {
            std::cout << "Desired amount is not available" << std::endl;
            return 0;
        }
        cost = cost * amount;
    }

    if (inserted_money < cost) {
        std::cout << "You haven't inserted enough money. Required amount is " << cost << std::endl;
        return 0;
    }

    if (FeaturePayback) {
        std::cout << "You receive " << inserted_money - cost << " as payback" << std::endl;
    }

    std::cout << "Thanks for buying " << menu.at(id).first << std::endl;

    return 0;
}
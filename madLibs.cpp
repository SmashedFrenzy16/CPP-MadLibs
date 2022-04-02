#include <iostream>

using namespace std;

int main()
{
    string noun, pluralNoun, adjective, pluralNoun2, foodItem, building;

    cout << "Enter a noun: ";
    getline(cin, noun);

    cout << "Enter a plural noun: ";
    getline(cin, pluralNoun);

    cout << "Enter an adjective: ";
    getline(cin, adjective);

    cout << "Enter another plural noun: ";
    getline(cin, pluralNoun2);

    cout << "Enter a food item: ";
    getline(cin, foodItem);

    cout << "Enter a building type: ";
    getline(cin, building);

    cout << "\n\nThe " << noun << " went to the park " << "\n";
    cout << "And found some " << pluralNoun << "\n";
    cout << "And found " << adjective << " " << pluralNoun2 << "\n";
    cout << "Then ate " << foodItem << "\n";
    cout << "And wanted to go to his " << building << "\n";
    cout << "So ended up stepping in the " << pluralNoun << "\n";
}
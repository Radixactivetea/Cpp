#include <iostream>
#include <map>
//#include <unordered_map>
#include <string>
#include <list>

using namespace std;

void fundamentals()
{
	map<string, string> myDictionary;

	myDictionary.insert(pair<string, string>("strawberry", "die Erdbeere"));
	myDictionary.insert(pair<string, string>("banana", "die Banene"));
	myDictionary.insert(pair<string, string>("apple", "der Apfel"));
	myDictionary.insert(pair<string, string>("orange", "die Orange, die Apdelsine"));

	// access and change element
	myDictionary["strawberry"] = "Die Erdeere";

	// clear (to del)
	myDictionary.clear();

	// delete element
	myDictionary.erase("apple");

	// size of collection
	cout << myDictionary.size() << endl;

	for (auto pair : myDictionary)
	{
		cout << pair.first << " - " << pair.second << endl;
	}
}

void pokedex()
{
	//complex data type as value
	map<string, list<string>> pokemon;

	list<string> pikachuAttacks = { "thunder shock", "tail whip", "quick attack" };
	list<string> charmenderAttacks = { "flame thrower", "scary face" };
	list<string> chikoritaAttacks = { "razor leaf", "poison powder" };

	pokemon.insert(pair<string, list<string>>("Pikachu", pikachuAttacks));
	pokemon.insert(pair<string, list<string>>("Charmender", charmenderAttacks));
	pokemon.insert(pair<string, list<string>>("Chikorita", chikoritaAttacks));

	for (auto pair : pokemon)
	{
		cout << pair.first( << " - ";

		for (auto attack : pair.second)
		{
			cout << attack << ", ";
		}

		cout << endl;
	}
}

int main()
{	
	// a dictionary
	// it ordered ascending order
	// if dont in order use <unordered_map>
	
	fundamentals();
	pokedex();

	system("pause>0");	
}
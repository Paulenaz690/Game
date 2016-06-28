#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>

using namespace std;

string Name, type;
int lvl, xp, dmg;

void Menu();
void New();
void Story();
void About();
void NewChar();
void Game();
void Save();

void Save()
{
	ofstream Save;
	Save.open("Save.txt");
	Save << Name << type << dmg << xp << lvl;
	Save.close();
	Game();
 }

void Game()
{
	
}

void About()
{
	cout << "It's empty for now";
	Sleep(1000);
	Menu();
}

void Load()
{
	
}

void Stats()
{
	
}

void New()
{
	
		int who;
	cout << "Your name " << endl;
	cin >> Name;
	cout << "And you are \n1.) Warrior \n2.) Mage \n3.) Archer" << endl;
	cin >> who;
	switch(who)
	{
		case 1:
			type = "warrior";
			break;
		case 2:
			type = "mage";
			break;
		case 3:
			type = "archer";
			break;
		case 300:
			type = "spartan";
			break;
		default:
			type = "rogue";
			break;
	}
	xp = 0;
	lvl = 1;
	cout << type << endl;
	dmg = rand() % 10 + 1;
	cout << "Your damage is " << dmg << endl; 
	
}

void Story()
{
string hello = "This will be story";
int x=0;
while ( hello[x] != '\0')
{
	cout << hello[x];
	Sleep(130);
	x++;
}
}

void Menu()
{
	int menu;
	Sleep(500);
    cout << "**********| Text Dungeon |**********\n " << endl;
    Sleep(1000);
	cout << "1.) Start new game \n2.) Load game \n3.) About \n123.) exit" << endl;
	cin >> menu;
	switch(menu)
	{
		case 1:
			New();
			break;
		case 2:
			Load();
			break;
		case 3:
			About();
			break;
		case 123:
			break;
		case 666:
			cout << "Oh you nasty devil...\n "; 
			Sleep(800);
			cout << "  Devil: What do you want? Im busy!";
			break;
		case 69:
			cout << "You are a pervert, you know that?\n " << endl;
			Sleep(1000);
			Menu();
			break;
		default:
			Menu();
			break;
			
	}
}

int main() {
	Menu();
	return 0;
}

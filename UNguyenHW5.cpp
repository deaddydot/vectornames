#include <iostream>
#include <math.h>
#include <string>
#include <chrono>
#include <thread>
#include <cstdlib>
#include <ctime>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;

int main() 
{
	cout << "Press 6 to run the program.\n";
	int input;
	cin >> input;
	if (input == 6)
	{
		vector<string> names;
		names.push_back("Uy");
		names.push_back("Logan");
		names.push_back("Free");
		vector<string>::iterator iter;
		vector<string>::const_iterator readIter;
		int playerInput;
		do
		{
			// list names
			cout << "Here are the names: \n";
			for(iter = names.begin(); iter != names.end(); ++iter)
			{
			cout << *iter << endl;
			}
			// give the player their options
			cout << "\nWhat do you want to do?\n1.Add a name\n2.Change a name\n3.Remove a name\n4.List names\n5.Quit";
			// get player input
			cout << "\nChoice selected: ";
			cin >> playerInput;
			// if(add name)
			if(playerInput == 1)
			{
				// add name to vector
				cout << "What name do you want to add: ";
				string addName;
				cin >> addName;
				names.push_back(addName);
			}
				
			// else if(change name)
			else if(playerInput == 2)
			{
				// what name to change?
				cout << "Which name do you want to change?\n";
				// get input from player
				string changerName;
				cin >> changerName;
				// change name to what?
				cout << "What do you want to turn it into?\n";
				// get input from player
				string changedName;
				cin >> changedName;
				// old name = new name
				int i = 0;
				for(iter = names.begin(); iter != names.end(); ++iter)
				{
				 if(*iter == changerName)
				 {
					*iter = changedName;
				 }
			
			}
			}
				
			// else if(remove name)
			else if (playerInput == 3)
			{
				// what name to remove?
				cout << "What name do you want to remove?\n";
				// get input from player
				string removeName;
				cin >> removeName;
				// remove name
				int i = 0;
				for(iter = names.begin(); iter != names.end(); ++iter)
				{
				 if(*iter == removeName)
				 {
					names.erase(names.begin() + i);
				 }
				 ++i;
				}
				for(iter = names.begin(); iter != names.end(); ++iter)
				{
				cout << *iter << endl;
				}
			}
				
			// else if(show names)
			else if (playerInput == 4)
			{
				// sort names
				// for loop to show every name
				// use iterators and dereference operator
				cout << "Sorting names...\n";
				sort(names.begin(), names.end());
				cout << "Showing name...\n";
				for(iter = names.begin(); iter != names.end(); ++iter)
				{
				cout << *iter << endl;
				}
			}
				
			// else if(quit)
			else if (playerInput == 5)
			{
				break;
				// break out of loop
				// else
				// that's not one of the options!
			}
			else cout << "That's not one of the options!";
			
		// thank player
		// end game
	} while (playerInput != 5);
	}
	cout << "Thank you for using my app!";
			cout << "Program ends here...";
	}
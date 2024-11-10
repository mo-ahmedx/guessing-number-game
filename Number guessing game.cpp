
		#include <iostream>

		#include<chrono>

		#include<thread>
		using namespace std;

		int main() {

			int num1, num2, num3;
			char choice;
			int score = 100;

			cout << "_____________________________" << endl;
			cout << "-----Number Guessing Game----" << endl;
			cout << "_____________________________" << endl;

			this_thread::sleep_for(chrono::seconds(5));

			cout << "_____________________________" << endl;
			cout << "----------Round One----------" << endl;
			cout << "_____________________________" << endl;

			this_thread::sleep_for(chrono::seconds(2));
			cout << "Guess The Number(1-100): " << endl;
			cin >> num1;
			if (num1 == 16) {
				cout << "You got it, GG!!" << endl;
				cout << "Score: " << score << endl;
			return 0;
			}
		

			else if(num1 >=50) {
				score -= 10;
				cout << "Too High!!" << endl;
				this_thread::sleep_for(chrono::seconds(1));
				cout << "Good Luck Next Round!" << endl;

			}
			else if (num1 <= 5) {
				score -= 10;
				cout << "Too Law!!" << endl;
				this_thread::sleep_for(chrono::seconds(1));
				cout << "Good Luck Next Round!" << endl;
			}

			this_thread::sleep_for(chrono::seconds(2));

			cout << "_____________________________" << endl;
			cout << "----------Round Two----------" << endl;
			cout << "_____________________________" << endl;

			cout << "Guess The Number(1-100): " << endl;
			cin >> num2;
			if (num2 == 16) {
				cout << "You got it, GG!!" << endl;
				cout << "Score: " << score;
				return 0;
			}
			else if (num2 >= 50) {
				score -= 10;
				cout << "Too High!!" << endl;
				cout << "Good LUck Next Round!!!" << endl;
			}
			else if (num2 <= 10) {
				score -= 10;
				cout << "Too High!!" << endl;
				this_thread::sleep_for(chrono::seconds(1));
				cout << "Good Luck Next Round!" << endl;
			}
				this_thread::sleep_for(chrono::seconds(3));
				cout << "_____________________________" << endl;
				cout << "----------Round Three----------" << endl;
				cout << "_____________________________" << endl;
			
			cout << "Would you like to get hint??[Y/N]" << endl;
			cin >> choice;
			if (choice == 'Y' || choice == 'y') {

				cout << "Your Age*10/10-your age+0-1+17" << endl;
			}
			else {
				cout << "YOU HAVE A CHOICE TOO!" << endl;
			}
			cout << "Guess The Number(1-100): " << endl;
			cin >> num3;
			if (num3 == 16) {
				cout << "Finnllly u got it!" << endl;
				cout << "Score: " << score;
			}
			else {
				score -= 80;
				cout << "Game Over You Lose it!!" << endl;
				cout << "Score: " << score;
			}
			return 0;
		}

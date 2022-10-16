#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Solution {
public:
	int romanToInt(string s) {
		int value=0;
		int size = s.length();
		char roman[] = { 'I','V','X','L','C','D','M' };
		int values[] = { 1,5,10,50,100,500,1000 };

		int place=0;
		int x = 0, y = 0;

		for (int i = 0; i < size; i++) {
		
			if (i < size ) {
				//compare first and second 
				for (int j = 0; j < 7; j++) {
					if (s[i] == roman[j]) {
						x = values[j];

					}
					
				}
				//if i is not at the last place 
				if (i != size - 1) {
					for (int j = 0; j < 7; j++) {
						if (s[i + 1] == roman[j]) {
							y = values[j];

						}
					}
					if (x < y) {
						value = value + (y - x);
						//skip two element
						i++;
					}
					else {
						value += x;
					}
				}
				else if (i == size - 1) {
					value += x;
				}
			}
		
		}
		

		//return size;
		return value;


	}
		};
int main() {
	Solution q1;
	cout << q1.romanToInt("III");




}
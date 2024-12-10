// lawaTeko, Kairatu
// Melakukan sorting sederhana
#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

const size_t s_array = 10;
const size_t i_array = 5;

void arraySorting(array <int, s_array> &integer){
	cout << "Array angka    = ";
	for (int &a : integer){
		cout << a << " ";
	}	
	cout << endl;
}

void arraySorting(array <string, i_array> &character){
	cout << "Array karakter = ";
	for (string &b : character){
		cout << b << " ";
	}	
	cout << endl;
}

int main(){
	
	array <int, s_array> integer = {9,8,7,6,5,4,3,2,1,0};
	array <string, i_array> character = {"Kambing", "Sapi", "Ayam", "Burung", "Keledai"};
	
	arraySorting(integer);
	arraySorting(character);
	
	cout << endl;
	
	sort(integer.begin(), integer.end());
	arraySorting(integer);
	
	sort(character.begin(), character.end());
	arraySorting(character);
	
	return 0;
}

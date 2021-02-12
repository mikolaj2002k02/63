#include <iostream>
#include <fstream>
#include <string>


using namespace std;
int main() {

    ifstream in("ciagi.txt");
    ofstream out("wynik.txt");
    int tablica[1000];
    string w;
    
    for(int i = 0; i <= 1000; i++) in >> tablica[i];
    int w1, w2;
    while(w1!=w2)
    {
    	cout << w1 << endl;
	}
	{
	
	if(w2 % 2) w = w2;
	if(w1 % 2) w = w1;
}
out << "Liczby: " << w << endl;
	return 0;
}

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include<math.h> // use sqrt()
#include <vector> // use vectors
#include <algorithm> // use abs()
#include <stdlib.h>     /* srand, rand */

#include <ctime>

#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

using namespace std;

int main() //( int argc, const char* argv[] )
{	
	
	// BEGIN reading quotes
	std::ifstream InputQuotes;
	InputQuotes.open("quotes.txt", ios::in) ;
	// END reading quotes

	// BEGIN quote vector
	std::vector<string> Quotes ;
	// END quote vector

	std::string line ;
	while (getline(InputQuotes, line)){if (line.length() > 2){Quotes.push_back (line) ;}}
	InputQuotes.close() ;
	
	// initialize random seed: */
	srand (time(NULL));

	// generate secret number between 0 and 9: */
 	unsigned int R = rand() % Quotes.size () ;
	std::cout << endl ;
	std::cout << BOLDBLUE << '\t' << Quotes[R] << RESET << endl ;
	std::cout << endl ;

	stringstream ss ;
	ss << "espeak -ves" << "-s125 " << "\"" << Quotes[R] << "\"" ;
	ss << "say " << " " << "\"" << Quotes[R] << "\"" ;

	system( ss.str().c_str() ) ;

	return (0) ;
}

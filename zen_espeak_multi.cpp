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
	std::ifstream InputQuotesSp ;
	std::ifstream InputQuotesEn ;
	std::ifstream InputQuotesFr ;
	InputQuotesSp.open("quotesSp.txt", ios::in) ;
	InputQuotesEn.open("quotesEn.txt", ios::in) ;
	InputQuotesFr.open("quotesFr.txt", ios::in) ;
	// END reading quotes

	// BEGIN quote vector
	std::vector<string> QuotesSp, QuotesEn, QuotesFr ;
	// END quote vector

	std::string line ;

	while (getline(InputQuotesSp, line)){if (line.length() > 2){QuotesSp.push_back (line) ;}}
	InputQuotesSp.close() ;

	while (getline(InputQuotesEn, line)){if (line.length() > 2){QuotesEn.push_back (line) ;}}
	InputQuotesEn.close() ;

	while (getline(InputQuotesFr, line)){if (line.length() > 2){QuotesFr.push_back (line) ;}}
	InputQuotesFr.close() ;
	
	// initialize random seed: */
	srand (time(NULL));

	// generate a number among {1,2,3}
 	unsigned int Lang = rand() % 3 + 1 ;
	//std::cout << "Languaje= " << Lang << std::endl ;

	if ( Lang == 1 )
	{
		unsigned int R = rand() % QuotesSp.size () ;
		std::cout << endl ;
		std::cout << BOLDBLUE << '\t' << QuotesSp[R] << RESET << endl ;
		std::cout << endl ;
		stringstream ss ;
		ss << "espeak -ves" << "-s100 " << "\"" << QuotesSp[R] << "\"" ;
		//ss << "say " << " " << "\"" << QuotesSp[R] << "\"" ;
		system( ss.str().c_str() ) ;
	}

	if ( Lang == 2 )
	{
		unsigned int R = rand() % QuotesEn.size () ;
		std::cout << endl ;
		std::cout << BOLDBLUE << '\t' << QuotesEn[R] << RESET << endl ;
		std::cout << endl ;
		stringstream ss ;
		ss << "espeak -ven" << "-s100 " << "\"" << QuotesEn[R] << "\"" ;
		//ss << "say " << " " << "\"" << QuotesEn[R] << "\"" ;
		system( ss.str().c_str() ) ;
	}

	if ( Lang == 3 )
	{
		unsigned int R = rand() % QuotesFr.size () ;
		std::cout << endl ;
		std::cout << BOLDBLUE << '\t' << QuotesFr[R] << RESET << endl ;
		std::cout << endl ;
		stringstream ss ;
		ss << "espeak -vfr" << "-s100 " << "\"" << QuotesFr[R] << "\"" ;
		//ss << "say " << " " << "\"" << QuotesFr[R] << "\"" ;
		system( ss.str().c_str() ) ;
	}
	
 	

	return (0) ;
}

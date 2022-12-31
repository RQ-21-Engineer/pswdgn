#include "include/generator.h"


int main (int argc, char** argv) {

	Generator gen;

	if( (strcmp(argv[1], "-l") == 0) || (strcmp(argv[1], "--length") == 0) ) {


		if ( (strcmp(argv[3], "-on") == 0) || (strcmp(argv[3], "--only-number") == 0) ) {

			gen.key(

				std::atoi(argv[2]), true
			);


		} else if ( (strcmp(argv[3], "-a") == 0) || (strcmp(argv[3], "--all") == 0) ){

			gen.key(

				std::atoi(argv[2]), false
			);

		}


	} else {

		std::cout << "pswdgn [ -L | --length ] [NUMBER] [ -ON | --only-number ]" << std::endl;
	}
    
	
	return 0;

}



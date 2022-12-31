#include <time.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>



class Generator {

	public :
	   void key (int lengthKey, bool numberOnlyOption) {

	   		std::string result = "";
            
	   		std::string numberCharacters = "1234567890";
		    std::string lowerCharacters  = "abcdefghijklmnopqrstuvwxyz";
		    std::string upperCharacters  = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		    std::string allCharacters    = (

                lowerCharacters  +
                numberCharacters +
                upperCharacters
            );

			srand (
                time(0)
            );

			if ( numberOnlyOption ) {

				for (int i = 0; i < lengthKey; i ++) {

					result += numberCharacters [

                        rand() % numberCharacters.length() 
                    ];

				}

			} else {

				for ( int i = 0; i < lengthKey; i ++) {

					result += allCharacters [ 

                        rand() % allCharacters.length()
                    ];

				}
			}
            
            std::cout << result << std::endl;
		}

};




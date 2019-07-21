 #ifndef __LETTERMANAGER_H_INCLUDED
 #define __LETTERMANAGER_H_INCLUDED

 #include <vector>
 #include <string>
 #include "Letter.h"

 using namespace std;
 
 class LetterManager
 {
     private:
         vector <Letter> letters;
 
     public:
         LetterManager();
         ~LetterManager();
         void loadLettersFromFile();
         string getTextFromUser();
         void printUserText();
 };
 
 #endif


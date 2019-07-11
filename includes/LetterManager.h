 #ifndef __LETTERMANAGER_H_INCLUDED
 #define __LETTERMANAGER_H_INCLUDED
 
 using namespace std;
 
 class LetterManager
 {
     private:
         vector <Letter> letters;
 
     public:
         LetterManager();
         ~LetterManager();
         vector <Letter> LoadLettersFromFile();
         string GetTextFromUser();
         void PrintUserText();
 };
 
 #endif


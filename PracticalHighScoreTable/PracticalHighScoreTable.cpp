#include <iostream>
#include <vector>
#include "Utility.h"
using namespace std;

/// <summary>
/// This procedure takes an vector of ints and sorts them in place.
/// After a call to this procedure the vector of ints passed in will be
/// sorted from highest to lowest.
/// </summary>
/// <param name="numbers">an array of ints to sort</param>
void SortVectorHighToLow(std::vector<int>& numbers) {
    int tmp;

    for (int i = 1; i < numbers.size(); i++)
    {
        for (int j = i; j > 0 && numbers[j] > numbers[j - 1]; j--)
        {
            tmp = numbers[j];
            numbers[j] = numbers[j - 1];
            numbers[j - 1] = tmp;
        }
    }
}


// TODO: Create your own PrintVector method that will display the contents of
//       a given vector to the console.
    
//Create my PrintVector with vectorContent
void PrintVector(vector<int> vectorContent) {
    //Loop to the content of given vector to the console
    for (int i = 0; i < vectorContent.size(); i++) {
        cout << vectorContent[i] << "\n";
    } 
} 

int main()
{
    // TODO: Ask the user how many high scores they want.
    //       Then read in their input.
    //
    // ====> Support error checking (input validation).
    //
    //       **************************************************************
    //       ***********                                        ***********
    //       ***********     The stoi() method                  ***********
    //       ***********     DOES NOT VALIDATE INPUT            ***********
    //       ***********                                        ***********
    //       **************************************************************
    //
    // ====> The user should only be able to input a POSITIVE
    //       integer value (greater than 0).
    //       You may use Utility::ReadInt() which returns an int
    //       and Utility::IsReadGood() which returns a bool to
    //       indicate if the last read (ReadInt) was successful

    //Initialize bool result with Utility::IsReadGood()
    bool result = !Utility::IsReadGood();
    //Placeholder for highScores
    int highScores;
    //do-while loop with if-else statements to support error checking 
    do {
        //Ask the user how many high scores they want
        cout << "Hello! How many high scores do you want?: ";
        //Read their input using Utility::ReadInt()
        highScores = Utility::ReadInt();
       //If the input is equal or less than zero, number is not valid
        if (highScores <= 0) {
            cout << "Number is not valid! Please enter a positive number! " << "\n" << endl;
        }
        //Otherwise validate that Utility::ReadInt() was succesful
        else {
            result = Utility::IsReadGood();
        }
        //continue looping while result is not validated by Utility::IsReadGood()
    } while (!result);
   
    
    //Special string that clears the screen and moves the cursor to the top-left
    std::cout << "\x1B[2J\x1B[H";

        // TODO: Define an vector of ints, which will hold the high scores.
        //       Make the vector the exact size indicated by the user above.
   
        //Define my highScoresVector that will hold the high scores    
    vector<int> highScoresVector(highScores);
        
     
    // TODO: Ask the user for each high score, and read in their inputs.
    //       Make sure to read in as many high scores are in the vector.
    //       If the high score vector is size 5, then read in 5 inputs.
    //       You DO NOT NEED to support error checking for each score;
    //       assume each input will be an integer.
    
    //Loop to ask the user for each high score
    for (int i = 0; i < highScores; i++) 
    {
            //ask the user for each high score and read in their input
            cout << "Please enter high score number: " << i + 1 << ": ";
            cin >> highScoresVector[i];
        }

    // TODO: Uncomment the following lines
     std::cout << "\n" << "High Scores - Unsorted" << std::endl;

    // TODO: Call **your** PrintVector method (which you must write
    //       above - it's a separate TODO after the Main method)
    //       passing the vector of high scores.
    
     //Call my PrintVector method passing my highScoresVector
     PrintVector(highScoresVector);

    // TODO: Call the SortVectorHighToLow method (already written below so
    //       don't attempt to change/re-write it). Pass the vector of high 
    //       scores, to sort them.

     //Call the SortVectorHighToLow methof passing my highScoresVector
     SortVectorHighToLow(highScoresVector);

    // TODO: Uncomment the following line
     std::cout << "\n" << "High Scores - Sorted" << std::endl;

    // TODO: Call **your** PrintVector method (which you must write above)
    //       passing the vector of high scores.
     
     //Call my PrintVector passing my highScoresVector
     PrintVector(highScoresVector);

     //Return highScores
     return highScores;

    std::cout << "Press any key to exit . . . " << std::endl;
    std::cin.get();
}
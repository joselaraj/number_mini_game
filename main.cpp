#include <iostream>
#include <ctime>
#include <random>

using namespace std;

/*
 create a menu function that will display the following options
 -Easy Mode (num is only from 1-4)
 -Medium mode (num is from 1-10)
 -Hard mode (num is from 1-25)
 */
void Menu(){
    cout << "-----------------------------------------";
    cout << "\n\tWelcome to the Random Number Game!\n";
    cout << "-----------------------------------------\n";
    cout << "1.)Easy mode\n";
    cout << "2.)Medium mode\n";
    cout << "3.)Hard mode\n";
    cout << "4.)Quit program\n";
    cout << "Choose game Mode:";
}


/*
 create an easy mode function.
 this function will generate a random number from 1-4.
 one of the features its going to hold is hints
 so if the number that the system chose is even or odd it will display it
 */

void easyMode(){
    //create a var that holds the score. It is automatically set to 0 at the start of every game
    int highscore = 0;
    
    //to keep the game going so the user can get a highscore keep the program running until the user doesnt match with the system
    bool keepPlaying = true;
    
    srand(time(0));
    
    //create the while loop so the game continues until the user loses
    while(keepPlaying == true){
        //crate a var that allows the user to enter their number
        int userNum;
        
        //generate a random number from 1-4
        int easyNum = ((rand()%4)+1);
        
        // if the user would like to a hint they can do so by inputting y
        char hint;
        cout << "Would you like a hint?(Y/N)";
        cin >> hint;
        
        // for the easy mode the hint is going to be even or odd
        if(hint == 'y' || hint =='Y'){
            if(easyNum % 2 == 0){
                cout << "Even number\n";
            }else{
                cout << "Odd number\n";
            }
        }
        
        // ask the user to enter their guess
        cout << "User num:";
        cin >> userNum;
        
        // if the user and system numbers match, display both numbers and increase the highscore by one
        if(userNum == easyNum){
            cout << "\nMATCH!\n";
            cout << "User input:" << userNum << endl;
            cout << "System input:" << easyNum << endl;
            highscore++;
        }
        //else statement so when the user doesnt match the game stops running and redirects the user back to the game menu
        else{
            cout << "\nBetter luck next time.\n";
            cout << "User input:" << userNum << endl;
            cout << "System input:" << easyNum << endl;
            keepPlaying = false;
        }
    
    }
    // display the high score
    cout << "\n***********\n";
    cout << "Highscore:" << highscore << "!" << endl;
    cout << "***********\n\n";
    }

void mediumMode(){
    //create a var that holds the score. It is automatically set to 0 at the start of every game
    int highscore = 0;
    
    //to keep the game going so the user can get a highscore keep the program running until the user doesnt match with the system
    bool keepPlaying = true;
    
    srand(time(0));
    while(keepPlaying == true){
        //crate a var that allows the user to enter their number
        int userNum;
        
        //generate a random number from 1-10
        int medNum = ((rand()%10)+1);
        
        // if the user would like to a hint they can do so by inputting y
        char hint;
        cout << "Would you like a hint?(Y/N)";
        cin >> hint;
        
        // for the medium mode the hint is going to be even or odd, and if the number is greater or less than 5
        if(hint == 'y' || hint =='Y'){
            if(medNum % 2 == 0){
                cout << "HINT 1.) Even number\n";
            }else{
                cout << "HINT 1.)Odd number\n";
            }
            
            if(medNum >5){
                cout << "HINT 2.) Number is also greater than 5\n";
            }else{
                cout << "HINT 2.) Number is less than 5\n";
            }
        }
        
        // ask the user to enter their guess
        cout << "User num:";
        cin >> userNum;
        
        if(userNum == medNum){
            cout << "\nMATCH!\n";
            cout << "User input:" << userNum << endl;
            cout << "System input:" << medNum << endl;
            highscore++;
        }
        else{
            cout << "\nBetter luck next time.\n";
            cout << "User input:" << userNum << endl;
            cout << "System input:" << medNum << endl;
            keepPlaying = false;
        }
    
    }
    cout << "\n***********\n";
    cout << "Highscore:" << highscore << "!" << endl;
    cout << "***********\n\n";
}

void hardMode(){
    //create a var that holds the score. It is automatically set to 0 at the start of every game
    int highscore = 0;
    
    //to keep the game going so the user can get a highscore keep the program running until the user doesnt match with the system
    bool keepPlaying = true;
    
    srand(time(0));
    
    // if the user would like to a hint they can do so by inputting y
    while(keepPlaying == true){
        //crate a var that allows the user to enter their number
        int userNum;
        
        //generate a random number from 1-25
        int hardNum = ((rand()%25)+1);
        
        cout << "\nHINTS ARE DISABLED IN HARD MODE! >:)\n";
        cout << "User num:";
        cin >> userNum;
        
        if(userNum == hardNum){
            cout << "\nMATCH!\n";
            cout << "User input:" << userNum << endl;
            cout << "System input:" << hardNum << endl;
            highscore++;
        }
        else{
            cout << "\nBetter luck next time.\n";
            cout << "User input:" << userNum << endl;
            cout << "System input:" << hardNum << endl;
            keepPlaying = false;
        }
    
    }
    cout << "\n***********\n";
    cout << "Highscore:" << highscore << "!" << endl;
    cout << "***********\n\n";
}


int main(){
    //create a variable that holds the users input for difficulty
    int user_choice;
    
    //have a while loop so the user decides when they want to stop the game from running
    bool running = true;
    
    while(running == true){
        //display the menu
        Menu();
        //get the user choice and then plug it into a switch statement
        cin >> user_choice;
        
        switch (user_choice) {
            case 1:
                cout << "\n----------------------";
                cout << "\nLevel: Easy\n";
                cout << "Pick a number 1-4\n";
                cout << "----------------------\n";
                
                easyMode();
                break;
                
            case 2:
                cout << "\n------------------------";
                cout << "\nLevel: Medium\n";
                cout << "Pick a number 1-10\n";
                cout << "------------------------\n";
                mediumMode();
                break;
                
            case 3:
                cout << "\n----------------------";
                cout << "\nLevel: Hard\n";
                cout << "Pick a number 1-25\n";
                cout << "----------------------\n";
                hardMode();
                break;
                
            case 4:
                running = false;
                break;
                
            default:
                cout << "Invalid choice\n";
                break;
                
        }
    }
    
    return 0;
}

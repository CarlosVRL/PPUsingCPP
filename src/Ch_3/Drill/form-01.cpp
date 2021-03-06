/* 
 * File:   form-01.cpp
 * Author: CarlosVRL
 *
 * Created on April 14, 2017, 11:01 PM
 */

#include <iostream>

using namespace std;

int main()
{
    // Response messages
    string msg_prompt_name = 
            "Enter the name of the person you want to write to: ";
    string msg_greet_start =
            "\nDear ";
    string msg_greet_end =
            ",\n\n";
    string msg_intro =
            "\tHow are you? I am fine. I miss you.\n\n";
    string msg_prompt_other =
            "Please enter another friend's name: ";

    // Prompt user to enter recipient name
    cout << msg_prompt_name;
    string first_name;
    cin >> first_name;
    
    // Greeting message
    cout << msg_greet_start << first_name << msg_greet_end;
    
    // Introductory message
    cout << msg_intro;
    
    // Prompter user to enter other name
    cout << msg_prompt_other;
    string friend_name;
    cin >> friend_name;
    
    // Reference to other friend
    cout << "\nHave you seen " << friend_name << " lately?\n\n";
    
    // Friend gender
    char friend_sex = 0;
    cout << "Enter an 'm' for male or 'f' for female: ";
    cin >> friend_sex;
    cout << endl;
    
    // Follow up message based on gender
    switch(friend_sex)
    {
        case 'm' :
            cout << "If you see " << friend_name << ", please ask HIM to call me.\n\n";
            break;
        case 'f' :
            cout << "If you see " << friend_name << ", please ask HER to call me.\n\n";
            break;
        default :
            cout << "If you see " << friend_name << ", please ask THEM to call me.\n\n";
            break;
    }
    
    // Closing message
    cout << "Yours sincerely, \n\nCV";
    
    // Successful return
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

string getResponse(string input) {
    if (input == "hello") return "Hi! How can I help you?";
    if (input == "how are you") return "I'm just a bot, but I'm doing great!";
    if (input == "bye") return "Goodbye! Have a nice day!";
    return "I'm not sure how to respond to that.";
}

int main() {
    string userInput;
    cout << "Chatbot: Hello! Type 'bye' to exit.\n";

    while (true) {
        cout << "You: ";
        getline(cin, userInput);
        if (userInput == "bye") break;
        cout << "Chatbot: " << getResponse(userInput) << endl;
    }

    cout << "Chatbot: Bye!\n";
    return 0;
}

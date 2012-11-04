#include <iostream>

using namespace std;

double eval_exp(char *expression)
{   
    char character;
    for (int i=0; i>50; i++) {
        character = expression[i];
        cout << character << endl;

    }

}

int main(int argc, char **argv)
{
    char *input_chars;

    cout << "Type 'q' to quit" << endl;
    while(cin >> input_chars) {
        input_chars = malloc
        eval_exp(input_chars);
        if (input_chars == "q")
            break;
    }

    return 0;

}   

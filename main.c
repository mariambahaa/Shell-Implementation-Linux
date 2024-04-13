#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    //initializing string input from
    //user into string named input
    char input[100];

    //initializing array of strings to
    //prepare for the execvp command
    char *arg[100];

    //using i as a counter for the array arg
    int i=0;

    //flag to determine if there will
    //be an wait() command or not
    bool waitFlag = false;

    printf("ENTER THE COMMAND \n");

    //scanning the command from
    //user including spaces
    gets(input);

    //getting the first token
    //before delimiter (space) using strtok
    char* token = strtok(input, " ");

    //base case to stop loop
    //when there's no more tokens
    while (token != NULL) {

        //to copy each token
        //into the array of strings
        arg[i]=token;
        printf("%s\n", token);

        //strtok will return null if there's
        //no more tokens available
        token = strtok(NULL, " ");

        //arg[i]=token;
        printf("%s\n", arg[i]);
        i++;
    }

    //comparing if the last character was "&"
    //or not to determine if the parent process
    //will wait for the child process to finish
    //to complete execution or not
    if(strcmp(arg[i-1],"&")!=0)
    //wait flag will be true if there was no "&"
        waitFlag = true;

    //insert null as the end character to
    //end the string
    arg[i]= NULL;

    if(p==0)
    {
        printf("child");
    }
    else if(p>0){
        printf("parent");
    }

    return 0;
}

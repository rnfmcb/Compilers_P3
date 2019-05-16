/*Rachel Festervand   4/29/2019 
Program Translation project 3
This project is implimenting static semantics to properly use variables. 
Variables outside of a block are gloabal. Variables in a given block are scoped in teh block. 
 
*/ 

#include <iostream> 
#include <string>
#include <fstream>
#include <stdio.h> 
#include <stdlib.h>   
#include "token.h"
#include "stack.h"
#include "scanner.h" 
#include "parser.h"  
#include "node.h" 

using namespace std; 


int main(int argc, char*argv[]){
Parser object; 
Node *mainRoot = new Node(); 
Stack stack; 

//If no argument, open a txt file
  if(argc == 1){
      string filename = "test.txt";
      string temp;
      ofstream file;
      file.open(filename.c_str());
      while(getline(cin,temp)){
         file << temp << " ";
      }
     file.close();
     ifstream infile;
	 cout << "Recieved file" << endl; 
	 mainRoot = object.parse(infile,filename);
    // stack.printPreorder(mainRoot); 
	 stack.makeStack(mainRoot);    
  	 
    
  }
  //take first argument and turn into file with .input1 as file name
  else if  (argc == 2) {
      string file = argv[1];
  	  string filename = file + ".input1";
  	  ifstream infile;  

  	  mainRoot = object.parse(infile,filename); 
  	//  stack.printPreorder(mainRoot);
  	  stack.makeStack(mainRoot);  
   }
  //If another file is piped
   else if (argc > 2 ){
       cout << "Too many command arguments, ending program" << endl;
       exit(EXIT_FAILURE);
   }
   return 0;
   }
   
   

This Program takes input of a .bf extension file which contains bf code, process it and give you the output.

The linux directory contains the necessary files you need to run the program directly on linux.
To compile on linux make sure you have all the three files present inside the linux folder, and then run the following command
		
		g++ -static main.cpp -L -l libbf.a -o bf.out
This will create a bf.out file.
To execute this file, type in 
		./bf.out
For Windows,Simply run the file present in the windows sub-directory

To view the source code, go to sources sub-directory.
	1)main.cpp => this file is just a driver program.
	2)library.cpp => this file holds all the necessary code on which this software relies upon.
	3)mine.h => this is a header file and contains all necessary declarations.

NOTE:-
This is just a project i did in free time and might have certain bugs.
I'd appreciate feedback about this. 
If any of you plan on helping me and so are going to modify these files...plz let me know what changes you are trying to make and what for(reason:-I wanna learn and keep evolving)!!
******************That's it*****************************
HOPE YOU LIKE IT!!

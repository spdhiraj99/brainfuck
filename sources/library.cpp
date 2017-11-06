#include"mine.h"
//============================================================bullshit
Stack *top=NULL,*head=NULL;
int arr[MAX]={0},r=0,*ptr=arr;
int init=rand()%(MAX/2);
char lang[MAX];
//=========================================================
//========================================================
//                      STACK
//=========================================================
void push(int d){
    head=new Stack;
    if(!head){
        cerr<<"\nError allocating memory!\n ";
        //getch();
        exit(2);
    }
    if(top==NULL)
        head->prev=NULL;
    else
        head->prev=top;
    top=head;
    top->data=d;
}
void pop(){
    if(top==NULL){
        cerr<<"\nEmpty stack!\n";
        //getch();
        return;
    }
    head=top;
    top=top->prev;
    delete head;
}
int peek(){
    if(top==NULL){
        cerr<<"\nEmpty stack!\n";
        //getch();
        return -1;
    }
    return top->data;
}
//======================================================================
//======================================================================
//                       read from array and process them
//======================================================================
void reader(char ch){
    switch(ch){
    case '+':
        ++(*ptr);
        break;
    case '-':
        --(*ptr);
        break;
    case '<':
        ptr--;
        break;
    case '>':
        ptr++;
        break;
    case ',':
        char ch;
        cin>>ch;
        *ptr=(int)ch;
        break;
    case '.':
        cout<<(char)*ptr;
        break;
    }
}
//================================================================================
//================================================================================
//                                load data from file into array
//================================================================================
void loader(){
    char name[MAX];
    cout<<"\nEnter the file path you wish to open: ";
    cin>>name;
    int m=strlen(name);
    if(name[m-3]!='.'&&name[m-2]!='b'&&name[m-1]!='f'){
        cerr<<"Wrong extension...make sure you are using .bf extension..";
        //getch();
        exit(3);
    }
    fstream file(name,ios::in|ios::out);
    if(!file){
        cerr<<"Error while opening the file ";
        exit(1);
    }
    int o=0;
    while(!file.eof()){
        file>>lang[o];
        o++;
    }
}
//==================================================================================
//===================================================================================
//                        Process whole array
//========================================================================================
void runner(){
    cout<<endl<<"OUTPUT for your program is : "<<endl;
    int len=strlen(lang);
    while(r!=len){
        if(lang[r]=='['){
            push(r);
        }
        else if(lang[r]==']'){
            if((*ptr)!=0){
                r=peek();
            }
            else{
                pop();
            }
        }
        else
            reader(lang[r]);
        r++;
    }
}
//================================================================================================

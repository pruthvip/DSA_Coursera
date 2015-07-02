
#include<iostream.h>
#include<stdio.h>
#include<fstream.h>
//#include<conio.h>
#define max 100


int arr[1

int main()
{
    
    ifstream inFile;
    int number;
    inFile.open("IntegerArray.txt",ios::in);
    if(inFile)
    {while(inFile){
              inFile>>number;
              cout<<number<<"\n";
              }
    }
    
    
    

  //getch();
 return 0;
}

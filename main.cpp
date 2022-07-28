//Keene Cabahug sort a list of contacts by their last names in alphebetical order
#include <iostream>
#include<fstream>
#include <string>


int main(){

  int x = 0;
  
  
    
std::string line;


std::string fNames[9], lNames[9], numbers[9];
std::ifstream ifile;
std::ofstream ofile;
std::ofstream afile;
ifile.open("List.txt");


while (ifile>>fNames[x]>>lNames[x]>>numbers[x])
  x++;

std::cout<<"NOT SORTED: \n";

  for(int z = 0; z < 9; z++){
    std::cout<<fNames[z]<<" "<<lNames[z]<<" "<<numbers[z]<<"\n";
    ofile<<fNames [z]<< lNames [z]<< numbers [z]<<"\n";
  }//end of inputting to file

  ifile.close();
  bool flip = true;
  while (flip){
    flip = false;
    for (int b = 0; b<8 ; b++){
      if (lNames[b] == lNames[b+1] && fNames[b] > fNames[b+1]){
   
  
    
    flip = true;
    
 
    
    

   std::string l = lNames[b+1], m = fNames[b+1], o = numbers[b+1];
    lNames[b+1]= lNames[b];
    fNames[b+1] = fNames[b];
    numbers[b+1] = numbers[b];
    lNames[b]  = l;
    fNames[b] = m;
    numbers[b] = o;
      }//end of placement check
    }//end of sort
  }//end of swap
 
    bool swap = true;
  while (swap){
    swap = false;
    for (int b = 0; b<8 ; b++){
      if (lNames[b] > lNames[b+1]){
      
    
  
   
  
    
    swap = true;
    
 
    
    

   std::string l = lNames[b+1], m = fNames[b+1], o = numbers[b+1];
    lNames[b+1]= lNames[b];
    fNames[b+1] = fNames[b];
    numbers[b+1] = numbers[b];
    lNames[b]  = l;
    fNames[b] = m;
    numbers[b] = o;
    
   
   }// end of placement check
      
  }//end of sort
   

    
    
    
   }//end of swap
   ofile.open("Listo.txt");

  std::cout<<"\nLAST NAMES:\n";
  
  for(int b = 0; b < 9; b++){
    
    std::cout<<lNames[b]<<" "<<fNames[b]<<" "<<numbers[b]<<"\n";
    
    ofile<<lNames[b]<<" "<<fNames[b]<<" "<<numbers[b]<<"\n";
  
  }//printing
    
    ofile.close();




    
  
}// end of main
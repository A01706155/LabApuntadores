#ifndef Sumador_h
#define Sumador_h

#include <string>
#include<bits/stdc++.h> 

using namespace std;

// Clase padre Sumador:
class Sumador {  
  private: //Atributos
  string str1;
  string str2;
  public: //Metodos
  Sumador(string, string); //Constructor
  void sumarnumeros();

};

//Inicializar los Atributos
Sumador::Sumador(string no1, string no2){
  str1 = no1;
  str2 = no2;
}

void Sumador::sumarnumeros(){
      // Before proceeding further, make sure length 
    // of str2 is larger. 
    if (str1.length() > str2.length()) 
        swap(str1, str2); 
  
    // Take an empty string for storing result 
    string str = ""; 
  
    // Calculate length of both string 
    int n1 = str1.length(), n2 = str2.length(); 
  
    // Reverse both of strings 
    reverse(str1.begin(), str1.end()); 
    reverse(str2.begin(), str2.end()); 
  
    int carry = 0; 
    for (int i=0; i<n1; i++) 
    { 
        // Do school mathematics, compute sum of 
        // current digits and carry 
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
  
        // Calculate carry for next step 
        carry = sum/10; 
    } 
  
    // Add remaining digits of larger number 
    for (int i=n1; i<n2; i++) 
    { 
        int sum = ((str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
  
    // Add remaining carry 
    if (carry) 
        str.push_back(carry+'0'); 
  
    // reverse resultant string 
    reverse(str.begin(), str.end()); 
  
    cout<<str<<endl; 
}




#endif

//Practice solutions problems
/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/
#include <iostream>
#include <string>
using namespace std;

 void calulate(int li, int ls,  int value){
    //global variables
    int frontSit = 0;
    string tag= "";
          
         //codicion to find to number of the sit 
          if ( (li <= value) and (value <= (li+5))){
             frontSit = ((li+11)-(value-li));
          }else {
             frontSit = ((ls-11)+(ls-value));         
          }
          //condition to find to tag of the sit
          if ((value == li)or(value == (li+5))
              or(value == ls) or(value == (ls-5))){
                 tag = "WS";
           }else if ((value == (li+2))or(value == (li+3))
              or(value == (ls-2))or(value == (ls-3))){
                 tag = "AS";
                }else {
                 tag = "MS";
                }
      cout << frontSit << " " << tag << endl;
}



// Write your code here
int main(){

  //inputs
  int t = 0;
  cin >> t;
  int values[t];
  for (int i=0; i<t;i++){
      cin >> values[i];
  }
  
  for (int j=0; j<t; j++){
      //case 1:
      if ((1<=values[j])and(values[j]<=12)){
          calulate(1, 12, values[j]);
      }
      //case 2:
      if ((13<=values[j])and(values[j]<=24)){
          calulate(13, 24, values[j]);
      }
      //case 3:
      if ((25<=values[j])and(values[j]<=36)){
          calulate(25, 36, values[j]);
      }
      //case 4:
      if ((37<=values[j])and(values[j]<=48)){
          calulate(37, 48, values[j]);
      }
      //case 5:
      if ((49<=values[j])and(values[j]<=60)){
          calulate(49, 60, values[j]);
      }
      //case 6:
      if ((61<=values[j])and(values[j]<=72)){
          calulate(61, 72, values[j]);
      }
      //case 7:
      if ((73<=values[j])and(values[j]<=84)){
          calulate(73 , 84, values[j]);
      }
      //case 8:
      if ((85<=values[j])and(values[j]<=96)){
          calulate(85, 96, values[j]);
      }
      //case 9:
      if ((97<=values[j])and(values[j]<=108)){
          calulate(97, 108, values[j]);
      }
    }

    return 0;
}


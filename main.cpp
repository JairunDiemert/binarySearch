#include <iostream>
#include <cstdlib>
#include <ctime>
#include <climits>
#include <cmath>
using namespace std;

int main() {



  do {
  cout << "Enter value between " << min << " - " << max << ": ";
  cin >> num2Search;
  cout << endl;
  if (num2Search <= max && num2Search >= min){
    go = false;
  }
  else {
        cout << "Value you entered is not within the range, please try again." << endl << endl;
  }
  }while(go);

  while(max >= min){
    cmpCount++;
    center = (max + min)/2;
    if( center > num2Search){
      max = center + 1;
      cout << "new range: " << min << " - " << max << endl;
    }
    else if(center < num2Search){
      min = center - 1;
      cout << "new range: " << min << " - " << max << endl;
    }
    else {
      cout << endl << "Center is: " << num2Search << endl <<"You found the value: " << num2Search << endl << "It took: " << cmpCount << " tries.";
      break;
    }

  }
}

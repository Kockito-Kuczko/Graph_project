#include "constant.h"
#include "defaultgr.h"

bool checkInput(char c);
bool checkExistingEdge();

int main() {
	cout << "Graph Utility v0.01" << endl;
	
	cout << "\n Default graph edges:" << endl;
	for(int x = 0; x < 4; x++) {
	    for (int y = 0; y < 2; y++) {
	        cout << "Enter two adjacents for vertex " << x + 1 <<  endl;
	        cin >> defaultgr[x][y];
	        
	        //Force valid input
	        if (checkInput(defaultgr[x][y]) == false) {
                cout << "Error! Please enter a number:" << endl;
                y = y - 1;
            }    
            
            if (defaultgr[x][y] < 0 || defaultgr[x][y] > 3) {
	            cout << "Not a valid number. You must enter a number between 0 and " << "3" << ":" << endl;	            
                y = y - 1;                
            }
	        
        }
        
        //Warn about loop edges
        if ((defaultgr[x][0] || defaultgr[x][1]) == x) {
            cout << "You have created at least one loop edge." << endl;
        }
	}

	cout << endl;
	
	return 0;
}

/* input check prototype

if (checkInput(defaultgr[x][y]) == false) {
    cout << "Error! Please enter a number:" << endl;
    y = y - 1;
}    
else {
    if (defaultgr[x][y] < 0 || defaultgr[x][y] > 3) {
	    cout << "Not a valid number. You must enter a number between 0 and " << "3" << ":" << endl;	            
        y = y - 1;
}

*/

bool checkInput(char c) {
    return 0 <= c && c <= 9;

}

bool checkExistingEdge() {

}

//created by Kockito Kuczko @2014

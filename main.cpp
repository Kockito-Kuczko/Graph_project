#include "constant.h"
#include "defaultgr.h"


int main() {
	cout << "Hello world!" << endl;
	
	cout << "Default graph edges:" << endl;
	for(int x = 0; x < 4; x++) {
	    for (int y = 0; y < 2; y++) {
	        cout << "Enter adjacent for vertex " << x + 1 << "," << y + 1 << endl;
	        cin >> defaultgr[x][y] ;
	        
	        //Check if vertex number is valid
	        if  (defaultgr[x][y] < 0 || defaultgr[x][y] > 3) {
	            cout << "Error: vertex numbers range from 0 to 3" << endl;
	        }
        }
        
        //Warn about loop edges.
        if (defaultgr[x][0] == defaultgr[x][1]) {
            cout << "No loop edges allowed for now, please." << endl;
        }
	}

	cout << endl;
	
	return 0;
}

//created by Kockito Kuczko @2014
//gedit +terminal push test 2
//pull test

#include "constant.h"
#include "defaultgr.h"


int main() {
	cout << "Hello world!" << endl;
	
	cout << "Default graph edges:" << endl;
	for(int x = 0; x < 4; x++) {
	    for (int y = 0; y < 2; y++){
	        cout << "Enter adjacent for vertex " << x+1 << "," << y+1 << endl;
	        cin >> defaultgr[x][y] ;
 		    //cout << defaultgr[x][y] << " ";
 		}
	}

	cout << endl;
	
	return 0;
}

//created by Kockito Kuczko @2014
//gedit +terminal push test 2
//pull test

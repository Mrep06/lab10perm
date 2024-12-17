#include<iostream>
using namespace std;

int main(){
    string grade;
    int A = 0,B = 0,C = 0,D = 0,F = 0;
	int count[5] = {A,B,C,D,F}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	int i = 1;
	do{
		cout << "Student [" << i << "]: ";
		cin >> grade; 
		
		if(grade == "0") {
		    break;
		    } 
		
		if(grade == "A"){ count[0] += 1;
		}else if(grade == "B"){ count[1] += 1;
		}else if(grade == "C"){ count[2] += 1;
		}else if(grade == "D"){ count[3] += 1;
		}else if(grade == "F"){ count[4] += 1;
		}else{ cout << "Wrong input. Please input again." << endl;
		i -= 1;   
		} 
		i++;
	}while(i != 0);
	
	
	cout << "In total " << i-1 << " students." << endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";	
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4] <<"";		
	
	return 0;
}
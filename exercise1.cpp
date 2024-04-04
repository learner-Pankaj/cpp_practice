#include<iostream>

using namespace std;

int ebill(int readings) {
    int total = 0;

	if(readings < 0 ){
	    total = 0;
	}
	else if(readings <= 50){
	    total = readings*1+50;
	}
	else if(readings <= 150){
	    total = (50*1) + ((readings-50)*2)+50;
	}
	else{
	    total = (50*1)+(100*2)+((readings-150)*5+50);
	}
	
	return total;
}
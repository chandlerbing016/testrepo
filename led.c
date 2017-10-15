#include<stdio.h>
#include<time.h>

//program constants
const int DELAY_TIME = 1;
const int RUNNING_TIME = 30;

// just adding a random command another comment2
int main() {
	
	//initialize time variables
	long long int start = time(NULL);
	long long int MWANZO = time(NULL);
	int timer = DELAY_TIME;

	//running the simulation
	while((time(NULL)-MWANZO)<RUNNING_TIME){
		int K;
		//light moving to the right
		for(K=1; K<=8; K++) {
			do{
				//shift the delay time is over
				if(timer == DELAY_TIME) {
					//reset the time counter

				}



			}while(timer != DELAY_TIME)
		}

		//light moving to the left
		
	}


  
	return 0;
}

#pragma config(Motor,  motorB,           ,             tmotorNXT, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#define speed 50;

void stop(){
	motor[motorA] = 0;
	motor[motorC] = 0;
	wait1Msec(5000);
}

task main(){

int left = 0;
int right = 0;

while(1){

	motor[motorA] = speed;
	motor[motorC] = speed;

	nxtDisplayTextLine(1, "%d %d", left, right);

	switch (nNxtButtonPressed){
		case 'kLeftButton':
			while (nNxtButtonPressed == kLeftButton){}
			speed = speed - 10;
			left = left + 1;
		case 'kRightButton':
			while (nNxtButtonPressed == krightButton){}
			speed = speed + 10;
			right = right + 1;
		}
	if( left >= 3 && right >=3){
		right = 0;
		left = 0;
		stop();

	}
}
	
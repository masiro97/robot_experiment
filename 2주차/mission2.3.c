

void forward(){
	motor[motorA] = 75;
	motor[motorC] = 75;
	wait1Msec(2000);
}

void turn_right(){
	motor[motorA] = -50;
	motor[motorC] = 50;
	wait1Msec(1000);
}

void turn_left(){
	motor[motorA] = 50;
	motor[motorC] = -50;
	wait1Msec(1000);
}


task main()
{
	nNxtExitClicks = 2;

	if(nNxtButtonPressed == kExitButton){
		while(nNxtButtonPressed == kExitButton){}

		forward();
		turn_right();
		turn_left();
		forward();
		turn_right();
		forward();
		turn_left();
		forward();
	}

}

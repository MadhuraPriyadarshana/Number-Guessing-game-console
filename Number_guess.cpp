#include <iostream>
#include <cstdlib>
#include <ctime> 
#include<conio.h>
using namespace std;


void head(){  //heading function

	
	cout<<"\n"<< "**********************************************************************************************************************"<<"\n";
    cout<< "* ******************************************************* ** ******************************************************* *"<<"\n";
    cout<<"* *"<<"                          *****************************************************************                     "<<"* *"<<"\n";
	cout<<"* *"<<"                             __  _ _  ___  __  __      _   _  _  __       _ _ _  _  _  _                        "<<"* *"<<"\n";
	cout<<"* *"<<"                            / _|| | || __|/ _|/ _|    / \\ | \\| ||  \\     | | | || || \\| |                       "<<"* *"<<"\n";
	cout<<"* *"<<"                           ( |_n| U || _| \\_ \\\_ \\    | o || \\ || o  )    | V V || || \\\ |                        "<<"* *"<<"\n";
	cout<<"* *"<<"                            \\__/|___||___||__/|__/   |_n_||_|\\_||__/      \\_n_/ |_||_|\\_|                       "<<"* *"<<"\n";
    cout<<"* *"<<"                           ***************************************************************                      "<<"* *"<<"\n";
    cout<<"* *"<<"                                                                                                                "<<"* *"<<"\n";
    cout<<"* *"<<"                                                                                                                "<<"* *"<<"\n";
}

int main()
{

	system ("color f0");
	int num,num2,h2,gs,count=1;
    string usnm,level,player="y",mark,border1,border2,border,bor,end,S1;
    int opt,P1,P2,P3,counter = 0,Limit;
    int score[5],i=0,A=0;
	string nm[5],lv[5];

		
	border1="***********************************************************";
	border2="* ******************************************************* *";
	border="* *";
	bor="* *                                                                                                                * *\n";

    cout<<"\n"<<border1<<border1<<"\n";
    cout<<border1<<border1<<"\n";
    cout<<bor;
    cout <<border<< "                                 Welcome to the Special number guessing game                                    "<<border<<"\n";
    cout<<bor;
    cout<< border1<< border1<<"\n";
	cout<< border1<< border1<<"\n";
    cout <<border<< "                                                1 How to play Game                                              "<<border<<"\n";
    cout <<border<< "                                                2 Credits                                                       "<<border<<"\n";
    cout <<border<< "                                                3 Start The Game                                                "<<border<<"\n";
    cout <<border<< "                                                Enter Your Choice : ";
    cin >> opt;
    switch (opt)

     {
   case 1 :
   	system("cls");
   	cout<<"\n"<< border1<<"\n";
   	cout<<"		Instructions";
	cout<<"\n"<< border1<<"\n";
    cout<<"# First You have to enter your name and level..\n# 3 levels are in the game..\n# After the select your level, you can see the hints about the Hidden number\n# you have only 3 guesses for the one game..\n# only 5 players can play game\n# Good Luck!\n\n";
	cout<<"Press any key and enter to Next: ";
    cin>>S1;

	  {
   case 2 :
   	cout<<"\n"<< border1<<"\n";
   	cout<<"		Credits";
	cout<<"\n"<< border1<<"\n";
   	cout<<border<<"----------------\n";
   	cout<<"GAL/HNDIT/2020/F/0105	B.M.Priyadarshana\n\n";
	 {
    default :
    cout<<"Press any key and press enter to Start the game: ";
    cin>>S1;


	{
    	case 3 :
    system("cls");
	while(player=="Y" || player=="y"){
	int count=1,mark=7;


	cout<<"\n\n\n\n";
	system ("color 02");
	head();
    cout<<border<<"	Input your name		: ";
    cin>>usnm;
    cout<<border<<"	select level (E,M,H)	: ";
    cin>>level;
    srand(time(0)); //seed random number generator
	num2= rand() % 100 + 1; // random number between 10 and 25
    if(level=="E" || level=="e"){
    	srand(time(0)); //seed random number generator
		num = rand() % 10 + 1; // random number between 1 and 10
		cout<<border<<"                                                                                                                "<<border<<"\n";
		cout<<border<<"	HINT:	Number between 1-10"<<"                                                                                "<<border<<"\n";
		if(num>=5){
			cout<<border<<"	HINT:	Number is greater than or equal 5"<<"                                                                  "<<border<<"\n";
		}
		else{
			cout<<border<<"	HINT:	Number is less than 5"<<"                                                                              "<<border<<"\n";
		}
	}
	else if (level=="M" || level=="m"){
		srand(time(0)); //seed random number generator
		num = rand() % 16 + 10; // random number between 10 and 25
		cout<<border<<"                                                                                                                "<<border<<"\n";
		cout<<border<<"	HINT:	Number between 10-25"<<"                                                                               "<<border<<"\n";
		if(num>=17)
			cout<<border<<"	HINT:	Number is greater than or equal 17"<<"                                                                 "<<border<<"\n";
		else
			cout<<border<<"	HINT:	Number is less than 17"<<"                                                                             "<<border<<"\n";
	}
	else if (level=="H" || level=="h"){
		srand(time(0)); //seed random number generator
		num = rand() % 31 + 20; // random number between 20 and 50
		cout<<border<<"                                                                                                                "<<border<<"\n";
		cout<<border<<"	HINT:	Number between 20-50"<<"                                                                               "<<border<<"\n";
		cout<<border<<"	HINT:	X^2-"<<num2+num<<"x+"<<num*num2<<"=0"<<"                                                                                    "<<border<<"\n";
	}else {
	cout<<border<<"	Invalid Selection"<<"                                                                                          "<<border<<"\n";
	break;
	}

	h2=num%2;
	if (h2==0){

		cout<<border<<"	HINT:	Even Number"<<"                                                                                        "<<border<<"\n";
	}
	else{
		cout<<border<<"	HINT:	Odd Number"<<"                                                                                         "<<border<<"\n";
	}
	cout<<border<<"                                                                                                                "<<border<<"\n";
	cout<<"\n";
	do{
		count=count+1;
		mark=mark-2;
	long s_time = 0;
	long e_time = 0;


	Limit = 20000; // 20 Seconds
	s_time = clock (); // Start time
	cout<<border<<"	YOU HAVE ONLY 20 SECONDS	Input Your Guess:  ";
	cin>>gs;
	e_time = clock (); // end time
	if (e_time-s_time > Limit)
   	{
      cout <<border<<"	Sorry.. Your Time is Over. Your marks will be zero...";
      mark=0;
      break;
    }		
	
		if(gs==num){
			cout<<"		--------------\n";
			cout<<"		Congratulation\n";
			cout<<"		------------------------------\n";
			cout<<"		Name: "<<usnm<<"   "<<"level: "<<level<<"  marks: "<<mark<<"\n";
			cout<<"		------------------------------\n\n\n\n\n";
			break;
		}else {
		cout<<border<<"	Guess is wrong__"<<"                                                                                           "<<border<<"\n";
		if (count==4){
			mark=mark-1;
			cout<<border<<"                                                                                                                "<<border<<"\n";
			cout<<border<<"		 ------------------------------------------------------------------------                          "<<border<<"\n";
			cout<<border<<"	         | Your Guesses are over |   You lost the game |  Correct Answer Is : "<<num<<" |                          "<<border<<"\n";
			cout<<border<<"		 ------------------------------------------------------------------------                          "<<border<<"\n";

			}
		
		}
	}while(count<=3);
	
	
	score[i]=mark;
	nm[i]=usnm;
	lv[i]=level;
	i++;
	A++;	
	
	cout<<"\n"<<border<<"	Do you have another player? (Y or N) : ";
	cin>>player;
	system("cls");
}
	}
}}}

	system ("color f0");
	head();
	cout<<"\n"<< border1<< border1<<"\n";
    cout<< border2<< border2<<"\n";
    cout<<border<<"                                                                                                                "<<border<<"\n";
    cout<<border<<"		Score Board                                                                                        "<<border<<"\n\n";
    cout<<border1<<border1<<endl;


	for(int j=0; j<A; j++){
		cout<<"	"<<"Player "<<j+1<<": "<<nm[j]<<"	level : "<<lv[j]<<"		score : "<<score[j]<<"\n";
	}

	cout<<border1<<border1<<endl;
	cout<<border1<<border1<<endl;
	cout<<border<<"                                                                                                                "<<border<<"\n";
	cout<<border<<"                                                                                                                "<<border<<"\n";
	cout<<border<<"                                                    Game end                                                    "<<border<<"\n";
	cout<<border<<"                                                   Thank You!"<<"                                                   "<<border<<"\n";
	cout<<border<<"                                                                                                                "<<border<<"\n";
	cout<<border<<"                                                                                                                "<<border<<"\n";
	cout<< border2<< border2<<"\n";
	cout<< border1<< border1<<"\n";
	cout<<"Press any key to End game";




	return 0;
}



#include <string>
#include <iostream>
#include <vector>
#include <complex>
#include <tgmath.h>
#include <valarray>
#include <cmath>
#include <math.h>
#include <thread>
#include <chrono>
#include <limits>
#include <iomanip>
#include <cstdlib>
#include <time.h>
#include <stdlib.h>
using namespace std;
int calculating();
int main()
{
	
	vector <string> equation;
 
	int choice;
	int choice2;
	long double y=-1;
	int choice3;
	long double r;
	float x;
	float a;
	float j;
	float b;
	int hi;
	long double c;
	int m=0;
	int d;
	string snumber1;
	int rik;
	int joshua;
	
	cout<<"welcome to the algebra calc.\n";
	cout<<"to choose a thing that you want to put into the equation,\n";
	cout<<"look at the number before that and enter it and press enter\n";
	do
	{
    	
    	equation.clear();
    	cout<<"1.one-step algebraic equations\n";
    	cout<<"2.probability\n";
    	cout<<"3.exit\n";
    	cin>>choice;
    	y=-1;
    	m=0;
    	
    	switch (choice)
    	{
        	
        	case 1:{
        	do {
        	
        	y++;
       	
        	if(y==0){
            	cout<<"would you like to add a\n 1.variable\n or 2.number\n";
            	cin>>choice3;
            	if(choice3==1)
            	{
                	cout<<"variable added successfully\n";
                	equation.push_back("x");
            	}
            	if(choice3==2)
            	{
                	cout<<"what number do you want to add\n";
                	cin>>snumber1;
                	cout<<"number added successfully\n";
                	a=std::stoi(snumber1);
                	equation.push_back(snumber1);
            	}
        	}
        	if(y==1){
            	cout<<"what operation would you like to add\n1.addition\n2.subtraction\n3.multiplication\n4.division\n5.exponents\n6.equal sign\n7. or delete something\n";
            	cin>>choice3;
            	switch (choice3)
            	{
                	case 1:
                	equation.push_back("+");
                	cout<<"addition sign added successfully\n";
                   	r=choice3;
                	break;
                	
                	case 2:
                	equation.push_back("-");
                	cout<<"subtraction sign added successfully\n";
                   	r=choice3;
                	break;
                	
                	case 3:
                	equation.push_back("*");
                	cout<<"multiplication sign added successfully\n";
                   	r=choice3;
                	break;
                	
                	case 4:
                	equation.push_back("/");
                	cout<<"division sign added successfully\n";
                   	r=choice3;
                	break;
                	
                	case 5:
                	equation.push_back("^");
                	cout<<"power sign added successfully\n";
                	r=choice3;
                	break;
                	
                	case 6:
                	equation.push_back("=");
                	cout<<"equal sign added successfully\n";
                	break;
                	case 7: 
                	
                	hi=y-1;
                    equation.erase (equation.begin()+hi);
                    y=y-2;
                    cout<<y;
                    break;
            	}
        	}
        	if(y==2){
        	    
            	if(equation[0]=="x"){
            	    cout<<"1. number\n 2. erase the number you just added\n";
            	    cin>>d;
            	    switch(d){
            	        case 1:
            	        cout<<"what number would you like to add\n";
                	cin>>snumber1;
                	cout<<"number added successfully\n";
                	b=std::stoi(snumber1);
                	equation.push_back(snumber1);
                	break;
                	    case 2:
                	
                	hi=y-1;
                    equation.erase (equation.begin()+hi);
                    y=y-2;
                    cout<<y<<"\n";
                    cout<<hi<<"\n";
                   
                    break;
            	    }
                	
            	}
            	else{
                	cout<<"would you like to add a 1.variable\n or 2.number\n3.erase the thing you just added\n";
                	cin>>choice3;
                	if(choice3==1){
                    	cout<<"variable added successfully\n";
                    	equation.push_back("x");
                	}
                	if(choice3==2){
                    	cout<<"what number would you like to add\n";
                    	cin>>snumber1;
                    	cout<<"number added successfully\n";
                    	b=std::stoi(snumber1);
                    	equation.push_back(snumber1);
                	}
                	if(choice3==3){
                	 hi=y-1;
                    equation.erase (equation.begin()+hi);
                    y=y-2;
                    cout<<y<<"\n";
                    cout<<hi<<"\n";   
                	}
                	
            	}
        	}
        	if(y==3){
            	cout<<"what operation would you like to add\n1.addition\n2.subtraction\n3.multiplication\n4.division\n5.exponents\n6.equal sign\n7. erase something\n";
            	cin>>choice3;
            	switch (choice3)
            	{
                	case 1:
                    	equation.push_back("+");
                    	r=choice3;
                    	cout<<"addition sign added successfully\n";
                	break;
                	
                	case 2:
                	equation.push_back("-");
                   	r=choice3;
                   	cout<<"subtraction sign added successfully\n";
                	break;
                	
                	case 3:
                	equation.push_back("*");
                   	r=choice3;
                   	cout<<"multiplication sign added successfully\n";
                	break;
                	
                	case 4:
                	equation.push_back("/");
                   	r=choice3;
                   	cout<<"division sign added successfully\n";
                	break;
                	
                	case 5:
                	equation.push_back("^");
                	r=choice3;
                	cout<<"power sign added successfully\n";
                	break;
                	
                	case 6:
                	equation.push_back("=");
                	cout<<"equal sign added successfully\n";
                	break;
                	
                	case 7:
                	hi=y-1;
                    equation.erase (equation.begin()+hi);
                    y=y-2;
                    cout<<y<<"\n";
                    cout<<hi<<"\n";
            	}
        	}
        	if(y==4){
            	if(equation[0]=="x" or equation[2]=="x"){
                	cout<<"would you like to add 1. a number or \n2. erase something\n";
                    cin>>joshua;
                    if (joshua==1){
                	    cout<<"please enter your number";
                	    cin>>snumber1;
                	    cout<<"number added successfully\n";
                	    j=std::stoi(snumber1);
                	    equation.push_back(snumber1);
                    }
            	
            	    if (joshua==2){
            	        hi=y-1;
                        equation.erase (equation.begin()+hi);
                        y=y-2;
                        cout<<y<<"\n";
                        cout<<hi<<"\n";
            	    }
            	}
            	
            	else{
                	cout<<"would you like to add a 1.variable\n or 2.number\n 3. erase something";
                	cin>>choice3;
                	if(choice3==1){
                    	cout<<"variable added successfully\n";
                    	equation.push_back("x");
                	}
                	if(choice3==2){
                    	cout<<"what number would you like to add\n";
                    	cin>>snumber1;
                    	cout<<"number added successfully\n";
                    	j=std::stoi(snumber1);
                    	equation.push_back(snumber1);
                	}
                	if (choice3==3){
                	    hi=y-1;
                        equation.erase (equation.begin()+hi);
                        y=y-2;
                        cout<<y<<"\n";
                        cout<<hi<<"\n";
                	}
            	}
        	}
            	
        	}while(y<4);
        	for (int i=0; i<equation.size(); i++) 	
            	cout << equation[i] << " ";
        	
        	if(equation[1]=="="&& equation[0]=="x"){
            	if(r==1){
                	x=b+j;
                	calculating();
                	cout<<"the answer is "<< x <<" yay!!\n";
            	}
            	
            	if (r==2){
                	x = b-j;
            	calculating();
                	cout<<"the answer is "<< x <<" yay!!\n";
            	}
            	
            	if (r==3){
                	x = b*j;
            	calculating();
                	cout<<"the answer is "<< x <<" yay!!\n";
            	}
            	
            	if (r==4){
                	x = b/j;
            	calculating();
                	cout<<"the answer is "<< x <<" yay!!\n";
            	}
            	
            	if (r==5){
                	x=b;
                	cout<<"hi";
                	x=b*b;
                	for (int m = 1; m<(j-1); m++)
                	{
                    	x=x*b;
                	}
                	calculating();
                	cout<<"the answer is "<< x <<" yay!!\n";
            	}
            	m=1;
        	}
        	
        	
        	
        	//soulutions |
        	//          \/
        	
            	if (equation[1] == "="&& equation[2] == "x"){
                	if(r==1){
                    	x = a-j;

                	}
                	if(r==2){
                    	x = a+j;
                	calculating();
                	cout<<"the answer is "<< x <<" yay!!\n";
                    	
                	}
                	if(r==3){
                    	x = a/j;
                	calculating();
                	cout<<"the answer is "<< x <<" yay!!\n";
                	}
                	if(r==4){
                    	x = a*j;
               	calculating();
                	cout<<"the answer is "<< x <<" yay!!\n";
                	}
                	if (r==5){
                    	
                    	x = pow(a, 1.0/j);
                	calculating();
                	cout<<"the answer is "<< x <<" yay!!\n";
                	}
                	m=1;
            	}
            	
            	
        	
        	
        	
        	
            	if (equation[1] == "="&& equation[4] == "x"){
                	if(r==1){
                    	x = a-b;
                	calculating();
                	cout<<"the answer is "<< x <<" yay!!\n";
                	}
                	if(r==2){
                    	x = (a-b)*-1;
                	calculating();
                	cout<<"the answer is "<< x <<" yay!!\n";
                    	
                	}
                	if(r==3){
                    	x = a/b;
                	calculating();
                	cout<<"the answer is "<< x <<" yay!!\n";
                	}
                	if(r==4){
                    	x = b/a;
                	calculating();
                	cout<<"the answer is "<< x <<" yay!!\n";
                	}
                	if(r==5){
                    	x=log10(a)/log10(b);
                	calculating();
                	cout<<"the answer is "<< x <<" yay!!\n";
                	}
                	m=1;
            	}
            	
            	
            	
            	
            	
            	
            	
            	if(equation[3]=="="&& equation[0]=="x"){
                	
                	if(r==1){
                    	x=j-b;
                	calculating();
                	cout<<"the answer is "<< x <<" yay!!\n";
                	}
            	
                	if (r==2){
                    	x = b+j;
                	calculating();
                	cout<<"the answer is "<< x <<" yay!!\n";
                	}
            	
                	if (r==3){
                    	x = j/b;
                	calculating();
                	cout<<"the answer is "<< x <<" yay!!\n";
                	}
            	
                	if (r==4){
                    	x = b*j;
                	calculating();
                	cout<<"the answer is "<< x <<" yay!!\n";
                	}
                	if (r==5){
                    	
                    	x = pow(j, 1.0/b);
                	calculating();
                	cout<<"the answer is "<< x <<" yay!!\n";
                	}
                	m=1;
            	}
        	
        	
        	
        	
        	
        	
            	if (equation[3] == "="&& equation[2] == "x"){
                	
                	if(r==1){
                    	x = j-a;
                	calculating();
                	cout<<"the answer is "<< x <<" yay!!\n";
                	}
                	if(r==2){
                    	x = a-j;
                	calculating();
                	cout<<"the answer is "<< x <<" yay!!\n";
                    	
                	}
                	if(r==3){
                    	x = j/a;
                	calculating();
                	cout<<"the answer is "<< x <<" yay!!\n";
                	}
                	if(r==4){
                    	x = a/j;
                	calculating();
                	cout<<"the answer is "<< x <<" yay!!\n";
                	}
                	if(r==5){
                    	x=log10(j)/log10(a);
                	calculating();
                	cout<<"the answer is "<< x <<" yay!!\n";
                	}
                	m=1;
            	}
            	
            	
        	
        	
        	
        	
            	if (equation[3] == "="&& equation[4] == "x"){
                	
                	if(r==1)
                	{
                    	x = a+b;
                	calculating();
                	cout<<"the answer is "<< x <<" yay!!\n";
                	}
                	if(r==2)
                	{
                    	x = a-b;
                	calculating();
                	cout<<"the answer is "<< x <<" yay!!\n";
                    	
                	}
                	if(r==3){
                    	x = a*b;
                	calculating();
                	cout<<"the answer is "<< x <<" yay!!\n";
                	}
                	if(r==4){
                    	x = a/b;
                	calculating();;
                	cout<<"the answer is "<< x <<" yay!!\n";
                	}
                	if (r==5){
                    	rik=a;
                    	rik=a*a;
                    	for (int m = 1; m<(b-1); m++)
                    	{
                        	rik=rik*a;
                    	}
                    	x=rik;
                    	if(b==0)
                        	x==1;
                    	
               
                	
                	calculating();
                	cout<<"the answer is "<< x <<" yay!!\n";
                	}
                	m=1;
            	}
            	else if(m==0){
                	cout<<"\n";
                	for(int k=0; k<6; k++){
                	this_thread::sleep_for (std::chrono::seconds(1));
                	cout<<"calculating...\n";
                	}
                	cout<<"that is not a correct equation \n please try again \n ";
                	
            	}
        	}break;
        	case 2:{
	long long heads;
    long long tails;
	int heads_or_tails;
	long long how_many_times;
	long double this_is_the_answer;
    long long counter_variable;
	long long your_choice;
	long long how_many;
	long long count_var;
	long long one;
    long long two;
	long long three;
	long long four;
	long long five;
	long long six;
	int random;
    long double answer;
	
	srand(time(NULL));
	do {
 	cout << "\ndo you want to\n1.do probability of a coin landing on heads or tails\nor\n2. see how many times the computer will get a number when rolling a die\n3. random number generator\n4.exit\n";
 	cin >> your_choice;
 	switch (your_choice) {
   		case 1:
  			counter_variable = 0;
  			cout << "how many times do you want the computer to flip a coin?\n";
  			cin >> how_many_times;
  		heads = 0;
 		tails = 0;
  		do {
   		heads_or_tails = rand()%2;
   		if (heads_or_tails == 0) {
    		heads++;
   		}
   		else if (heads_or_tails == 1) {
    		tails++;
  		}
   		counter_variable++;
  		} while (counter_variable != how_many_times);
  		this_is_the_answer = (long double)heads / (long double)how_many_times;
  		this_is_the_answer = (long double)this_is_the_answer * 100;
  		cout << "\nthe chance of a coin flipping heads is\n" << this_is_the_answer<<"% and the computer fliped heads "<<heads<<" times";
  		this_is_the_answer = (long double)tails / (long double)how_many_times;
 		this_is_the_answer = (long double)this_is_the_answer * 100;
 		cout << "\nthe chance of a coin flipping  tails is\n" << this_is_the_answer<<"% and the computer flipped tails "<<tails<<" times";
 		if(heads-tails<0){
 		    answer=tails- heads;
 		}
 		else{
 		    answer=heads-tails;
 		}
 		cout<<"\nthe difference of heads and tails is "<<answer<<"\n";
 		break;
 		
 		case 2:
 		cout<<" how many times do you want the computer to roll the die\n";
 		cin>>how_many;
 		count_var = 0;
 		random = 0;
 		answer=0;
 		one = 0;
 		two = 0;
 		three = 0;
 		four = 0;
 		five = 0;
 		six = 0;
 		do {
 		    random = rand() % 6 + 1;
 		    
 		    if (random == 1){
 		        one++;
 		    }
 		    if (random == 2){
 		        two++;
 		    }
 		    if (random == 3){
 		        three++;
 		    }
 		    if (random == 4){
 		        four++;
 		    }
 		    if (random == 5){
 		        five++;
 		    }
 		    if (random == 6){
 		        six++;
 		    }
 		    count_var++;
 		}while(count_var != how_many);
 		answer = (long double)one / (long double)how_many;
 		answer = (long double)answer * 100;
 		cout<<" the experimental chance of getting a one is "<<answer<<" percent and the computer rolled a one "<<one<<" times";
 		answer = (long double)two / (long double)how_many;
 		answer = (long double)answer * 100;
 		cout<<"\n the experimental chance of getting a two is "<<answer<<" percent and the computer rolled a two "<<two<<" times";
 		answer = (long double)three / (long double)how_many;
 		answer = (double)answer * 100;
 		cout<<"\n the experimental chance of getting a three is "<<answer<<" percent and the computer rolled a three "<<three<<" times";
 		answer = (long double)four / (long double)how_many;
 		answer = (long double)answer * 100;
 		cout<<"\n the experimental chance of getting a four is "<<answer<<" percent and the computer rolled a four "<<four<<" times";
 		answer = (long double)five / (long double)how_many;
 		answer = (long double)answer * 100;
 		cout<<"\n the experimental chance of getting a five is "<<answer<<" percent and the computer rolled a five "<<five<<" times";
 		answer = (long double)six / (long double)how_many;
 		answer = (long double)answer * 100;
 		cout<<"\n the experimental chance of getting a six is "<<answer<<" percent and the computer rolled a six "<<six<<" times";
 		cout<<"\n and the theoretical chance of getting any number is one out of "<<"6"<<" \n\n\n\n";
 		break;
 	    
 	
 		
 		case 3:{
 		    
 		    
 		   
 		    int low;
 		    int high;
 		    cout<<"what is the lowest number?";
 		    cin>>low;
 		    cout<<"what is the highest number?";
 		    cin>>high;
 		    high++;
 		    low++;
 		    double random;
            srand( unsigned(time(NULL) ));
            random=(double)rand()/(RAND_MAX+1)*(high-low)+low;

 		    cout<<random;
 		    
 		}
 	}
	}while (your_choice<4);



    break;



    	    }break;
    	    
        	case 3141592:
        	cout<<"hi, our sources are: \n https://www.onlinegdb.com/online_c++_compiler\nhttp://www.cplusplus.com/doc/tutorial/introduction/\nhttp://www.cplusplus.com/doc/tutorial/program_structure/\n";
        	cout<<"http://www.cplusplus.com/forum/beginner/64219/\nhttp://www.cplusplus.com/doc/tutorial/basic_io/\njoshua's dad\n";
        	cout<<"https://en.wikipedia.org/wiki/Methods_of_computing_square_roots#Babylonian_method\nwww.cplusplus.com/doc/tutorial/variables/\nhttp://www.cplusplus.com/doc/tutorial/constants/\n";
        	cout<<"http://www.cplusplus.com/doc/tutorial/operators/\nRik's dad\nhttps://stackoverflow.com/questions/12556946/how-does-the-modulus-operator-work\nhttps://www.programiz.com/cpp-programming/if-else\n";
        	cout<<"https://www.geeksforgeeks.org/log-function-cpp/\nhttp://www.cplusplus.com/reference/cmath/sqrt/ \nhttps://stackoverflow.com/questions/7860569/how-i-can-get-and-use-the-header-file-graphics-h-in-my-c-program\n";
        	cout<<"https://www.programiz.com/cpp-programming/for-loop\nhttps://en.cppreference.com/w/cpp/language/for\nhttps://www.codeproject.com/Articles/675908/Linear-Equation-Solver-in-Cplusplus\n";
        	cout<<"http://www.cplusplus.com/doc/oldtutorial/arrays/\nhttps://en.cppreference.com/w/cpp/container/vector\nhttps://www.geeksforgeeks.org/array-strings-c-3-different-ways-create/\nhttps://stackoverflow.com/questions/20259351/difference-between-if-and-else-if\n";
        	cout<<"https://www.geeksforgeeks.org/converting-strings-numbers-cc/\nhttp://www.cplusplus.com/reference/vector/vector/clear/ \nhttp://www.cplusplus.com/reference/vector/vector/clear/\nhttps://www.purplemath.com/modules/solvelog2.htm\nVisual studio 2015\n ";
        	cout<<"https://www.piday.org/million/\n http://www.cplusplus.com/reference/thread/this_thread/sleep_for/ \nhttps://www.programiz.com/cpp-programming/function \nhttps://www.tutorialspoint.com/cplusplus/cpp_data_types.htm";
        	cout<<"since you knew that much pi, let's recite it together\n\n \n\n\n\n 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196442881097566593344612847564823378678316527120190914564856692346034861045432664821339360726024914127372458700660631558817488152092096282925409171536436789259036001133053054882046652138414695194151160943305727036575959195309218611738193261179310511854807446237996274956735188575272489122793818301194912983367336244065664308602139494639522473719070217986094370277053921717629317675238467481846766940513200056812714526356082778577134275778960917363717872146844090122495343014654958537105079227968925892354201995611212902196086403441815981362977477130996051870721134999999837297804995105973173281609631859502445945534690830264252230825334468503526193118817101000313783875288658753320838142061717766914730359825349042875546873115956286388235378759375195778185778053217122680661300192787661119590921642019893809525720106548586327886593615338182796823030195203530185296899577362259941389124972177528347913151557485724245415069595082953311686172785588907509838175463746493931925506040092770167113900984882401285836160356370766010471018194295559619894676783744944825537977472684710404753464620804668425906949129331367702898915210475216205696602405803815019351125338243003558764024749647326391419927260426992279678235478163600934172164121992458631503028618297455570674983850549458858692699569092721079750930295532116534498720275596023648066549911988183479775356636980742654252786255181841757467289097777279";
        	break;
    	}
    	cout<<"\n\n\n";
	}while(choice>0 && choice<3);
	
	
	return 0;
}
int calculating(){
    cout<<"\n";
    for(int t=1; t<4; t++){
    this_thread::sleep_for (std::chrono::seconds(1));
    cout <<"calculating... \n";
    }
}

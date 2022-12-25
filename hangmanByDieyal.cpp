/*name: daniyal ahmed
roll no: 22i-1032
assignment 4 
section b*/
#include<iostream>
#include<time.h>
#include<iomanip>
using namespace std;
void hangman1();
void hangman2();
void hangman3();
void hangman4();
void hangman5();
void hangman6();
void hangman7();
void hangman8();
void display_menu();
int main(){
    const int size=100;
    int t=0,random,n=0,count=0;
    char list[size]={"fast,programming,calculator,glasses,holder,pencil,lahore,athens,time,black,joker,charger,snake,king"};
    int separator[size];
    for(int i=0;i<size;i++){        //indexes of commas stored in another array to specify spaces between words
        if(list[i] ==',' || list[i] == '\0' || i==0){
            separator[t]=i;        //each elemt is the index no of commas
            t++;
        }
    }
    srand(time(0)); 
    random=(rand()%(t-1));         //generating random index of the new array to select a random comma, t-1
    if(random>0){                  //to avoid /0 to be selected.
        n=1;
    }                              //first letter was not printing so incase it is generated add nothing
    int elem=0;
    for(int i=separator[random]+n;i<separator[random+1];i++){
        count++;        //count no of words fromo selected comma to next comma to make an array
    }
    char word[count];
	char guess[count];
    int x=0;
    for(int i=separator[random]+n;i<separator[random+1];i++,x++){
        word[x]=list[i];            //store characters from one comma to the next using arrays
		guess[x]='-';
    }                   //generating dashes and menu
    display_menu();
	hangman1();
    cout<<"Guess the letter: \n";	
    for(int i=0;i<count;i++){
        cout<<guess[i];
	}
    cout<<endl;
    char letter;
    char incorrect[7];
    int number=0,incorr=0;
    bool flag=0;
    cout<<"Enter your guess: \n";
    for(int i=0;i<7;){   
        flag=0;
        cin>>letter;
        for(int j=0;j<count;j++){
            if(letter == word[j]){
                guess[j]=letter;
                number++;
                flag=1;
            }                               //if letter equals any leter of thw word it replaces dash and flag set to 1                                                      
            cout<<guess[j];                 //if not thrn flag reamains zero
        }
        cout<<endl;
        if(flag == 0){                        //if guess is incorrect then incorrect guess stored in array and printed
            incorrect[i]=letter;
            i++;
            cout<<"Incorrect! \n";    //i increased only if wrong guess   
        }
        if(i==0){
            hangman1();
        }
		else if(i==1){
			hangman2();             //calling hangman 
		}
        else if(i==2){
			hangman3();
		}
		else if(i==3){
			hangman4();
		}
		else if(i==4){
			hangman5();
		}
		else if(i==5){
			hangman6();
		}       	
		else if(i==6){
			hangman7();
		}
		else if(i==7){
			hangman8();
		}
		cout<<"Incorrect guesses are: ";
            for(int k=0;k<=i;k++){
                cout<<incorrect[k]<<" ";
			}
        cout<<endl;
        if(number==count){
            cout<<"Congratulations! You have won.\n";
            break;
        }     //counter increases everytime a right word guessed and if == word count then loop breaks and end
        if(number<count && i==7){
            cout<<"Oops! Your friend didn't make it. \n";
            cout<<"The word you had to guess was: ";
            for(int k=0;k<count;k++){               //if 7 tries and done thrn game lost and loop breaks
                cout<<word[k]<<" ";
            }
            cout<<endl;
            break;
        }
        cout<<"Enter your guess again: \n";
    }
return 0;
}
void display_menu(){
	cout<<setw(10)<<""<<"________________________________\n";
	cout<<setw(10)<<""<<"|$|HANGMAN - TERMINAL EDITION|$|\n";
	cout<<setw(10)<<""<<"|$|---'BRINGING THE EPIC'--- |$|\n";
	cout<<setw(10)<<""<<"|$|--- MASTERPIECE TO YOUR---|$|\n";
	cout<<setw(10)<<""<<"|$|---'VERY OWN TERMINALS'---|$|\n";
	cout<<setw(10)<<""<<"|$|--------------------------|$|\n";
	cout<<setw(10)<<""<<"|$|---------THE RULES--------|$|\n";
	cout<<setw(10)<<""<<"|$|-1. GUESS THE WORD TO SAVE|$|\n";
	cout<<setw(10)<<""<<"|$|YOUR PARTNER FROM HANGING-|$|\n";
	cout<<setw(10)<<""<<"|$|--2. YOU HAVE 7 STRIKES --|$|\n";
	cout<<setw(10)<<""<<"|$|3. MESS UP AND YOUR FRIEND|$|\n";
	cout<<setw(10)<<""<<"|$|----------DIES!!!!--------|$|\n";
	cout<<setw(10)<<""<<"|$|DONT MESS UP AND GOOD LUCK|$|\n";
	cout<<setw(10)<<""<<"|_|__________________________|_|\n";
}
void hangman1(){
    cout<<endl;
    cout<<setw(10)<<""<<"+----+\n";
    cout<<setw(10)<<""<<"     |\n";
    cout<<setw(10)<<""<<"     |\n";
   	cout<<setw(10)<<""<<"     |\n";
	cout<<setw(10)<<""<<"     |\n";
	cout<<setw(10)<<""<<"     |\n";
	cout<<setw(7)<<""<<"==========\n";	
}
void hangman2(){
    cout<<endl;
    cout<<setw(10)<<""<<"+----+\n";
    cout<<setw(10)<<""<<"|    |\n";
    cout<<setw(10)<<""<<"     |\n";
   	cout<<setw(10)<<""<<"     |\n";
	cout<<setw(10)<<""<<"     |\n";
	cout<<setw(10)<<""<<"     |\n";
	cout<<setw(7)<<""<<"==========\n";	
}
void hangman3(){
    cout<<endl;
    cout<<setw(10)<<""<<"+----+\n";
    cout<<setw(10)<<""<<"|    |\n";
    cout<<setw(10)<<""<<"0    |\n";
   	cout<<setw(10)<<""<<"     |\n";
	cout<<setw(10)<<""<<"     |\n";
	cout<<setw(10)<<""<<"     |\n";
	cout<<setw(7)<<""<<"==========\n";	
}
void hangman4(){
    cout<<endl;
    cout<<setw(10)<<""<<"+----+\n";
    cout<<setw(10)<<""<<"|    |\n";
    cout<<setw(10)<<""<<"0    |\n";
   	cout<<setw(10)<<""<<"|    |\n";
	cout<<setw(10)<<""<<"     |\n";
	cout<<setw(10)<<""<<"     |\n";
	cout<<setw(7)<<""<<"==========\n";	
}
void hangman5(){
    cout<<endl;
    cout<<setw(10)<<""<<"+----+\n";
    cout<<setw(10)<<""<<"|    |\n";
    cout<<setw(10)<<""<<"0    |\n";
   	cout<<setw(10)<<""<<"|\\   |\n";
	cout<<setw(10)<<""<<"     |\n";
	cout<<setw(10)<<""<<"     |\n";
	cout<<setw(7)<<""<<"==========\n";	
}
void hangman6(){
    cout<<endl;
    cout<<setw(10)<<""<<"+----+\n";
    cout<<setw(10)<<""<<"|    |\n";
    cout<<setw(10)<<""<<"0    |\n";
   	cout<<setw(9)<<""<<"/|\\   |\n";
	cout<<setw(10)<<""<<"     |\n";
	cout<<setw(10)<<""<<"     |\n";
	cout<<setw(7)<<""<<"==========\n";	
}
void hangman7(){
    cout<<endl;
    cout<<setw(10)<<""<<"+----+\n";
    cout<<setw(10)<<""<<"|    |\n";
    cout<<setw(10)<<""<<"0    |\n";
   	cout<<setw(9)<<""<<"/|\\   |\n";
	cout<<setw(10)<<""<<" \\   |\n";
	cout<<setw(10)<<""<<"     |\n";
	cout<<setw(7)<<""<<"==========\n";	
}
void hangman8(){
    cout<<endl;
    cout<<setw(10)<<""<<"+----+\n";
    cout<<setw(10)<<""<<"|    |\n";
    cout<<setw(10)<<""<<"0    |\n";
   	cout<<setw(9)<<""<<"/|\\   |\n";
	cout<<setw(9)<<""<<"/ \\   |\n";
	cout<<setw(10)<<""<<"     |\n";
	cout<<setw(7)<<""<<"==========\n";	
}

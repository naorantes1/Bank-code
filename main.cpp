#include <iostream>
#include <string>
#include <cmath>
using namespace std;

/*
int main(){
  int grade;
  cout << "Enter your exam grade: ";
  cin >> grade;
  cout << "your grade is: " << grade << endl;
  
  if (grade >= 90){
    cout << "you got an A" << endl;
  }
  if (grade < 90 && grade > 50){
    cout << "you got an average score" << endl;
  }
  if (grade <= 50){
    cout << "you failed" << endl;
  }
  
}
*/


//3 types of loops - for, while , do while 
// for (initalizer; condition; update){cout << "....."}
//intializer: initialize variable, execute one time
//condition: if true the body will be excuted, if false, will be terminated 
//update: it will update the value of initialized variable, and checks the conditon



/*
int main() {
  double x = 9, y = 2;
  double number = pow(y,x);
cout << x << " to the power of " << y << " is " << number;
}
*/


  

 /*
int main() {
  string forecast;
  double percantage;

  cout << "enter the weather forecast: (sunny, windy, or rainy): ";

cin >> forecast;

  //first case if the forecast is rainy 
  if (forecast == "rainy")
  {
    cout << " what is the chance of rain percantage: ";
    cin >> percantage;
  } else {
    percantage = 0;
  }

  //if the user entered sunny
  if(forecast == "sunny")
  {
    cout << " PLEASE BRING UR SUNGLASSES YOU DONT WANNA DAMAGE UR EYES" << endl;
  }

  if (forecast == "windy")
  {
    cout << " ITS GONNA BE FREEZING MAKE SURE TO BRING UR JACKET " << endl;
  }

  //if the user entered rainy 
  if (forecast == "rainy")
  {
    cout << " what is the chance of rain percantage: ";
  if (percantage > 50)
  {
    cout << " BRING AN UMBRELLA ITS GONNA BE RAINING CATS AND DOGS LOLL" << endl;
}
if (percantage <=50) 
{
  cout << "LOW CHANCE BUTS ITS POSSIBLE MANEEE JUST BRING YOUR UMBRELLA YOU LAZY FUCK" << endl;
}
  
  }  
 




 return 0;
}
*/



/*
int main()
{ 
  string password;
  
  cout << "enter your password:";
    cin >> password;

  if (password == "JAMES1021"){
    cout << "ermmm CORRECT YAYAYAYAYAY YOURE INNN YIPPE GET UR ASS IN NOW BOY" << endl;
  } 
else{
  cout << "ERM WRONG PASSWORD BOZO TRY AGAIN BUDDY" << endl;
}
return 0;
}
*/

/*
int main(){

  string name;
  cout << "Enter your name: ";
  cin >> name;
  
  int Steps;
  cout << "Enter the number of steps you have taken: ";
  cin >> Steps;
  if (Steps >= 10000){
    cout << "Great job on walking today." << endl;
  } else{
    cout << "Go outside and get your steps in." << endl;
  }
 
  double sleep;
  cout<< "enter the ammount of hours of sleep you got: ";
  cin >> sleep;
  if (sleep >= 8){
  cout <<"Good job you got enough sleep" << endl;
  }else{
  cout << "You need to get more sleep" << endl;
  }
  string favExercise;
  cout << "enter your favorite exercise: ";
  cin >> favExercise;
    

  char gender;
  cout << "enter your gender: (m or f): ";
  cin >> gender;
   
  if (gender == 'm'){
    cout << "Mr."<< name << ",  you walked: " << Steps << " ,hours slept: " << sleep <<", You're favorite exercise is: "<< favExercise << endl;
    }else{
      if (gender == 'f')
    cout<< "Ms." << name << "you walked:" << Steps << "Ms. youve slept:" << sleep << " you're favorite exercise is: " << favExercise << endl;
    }


  return 0;
}
*/
/*
int main(){
string name;
cout << "Enter your name: ";
cin >> name;

int tickets;
cout << "Enter the numbers of tickets you want to buy: ";
cin >> tickets;

int age;   
cout << "Enter your age: ";
cin >> age;

double price;
cout << "Enter price of ticket: ";
cin >> price;
if (age < 18){
  cout << "You are eligible for 10% discount " << endl;
  price = (price * tickets) * 0.90;
     }
  
  else if (age > 60){
  cout << "You are eligible for a 15% discount " << endl;
  price = (price * tickets ) * 0.85; 
  
}
  else
    price = price * tickets;

  cout << "Your new total is: " << price << endl;

  
string genre;
cout << "Enter the genre of the movie: (action, comedy) ";
cin >> genre;
    if (genre == "comedy"){
      cout <<"ENJOY YOU'RE MOVIE MATE :0 ";
    }else{
     if (genre == "action")  
      cout << "Have fun watching the action movie. " ;
    }

return 0;
}
 */ 

/*
int main(){
   int number;
   cout << "enter number to check if itd positive or negative: ";

  cin >> number;


  if (number > 0){
    cout << "the number is positive";
  } else if (under < 0){
    cout << "the number is negative";
  } else { 
    cout << "the number is zero";
  }


    return 0;
  }
*/

/*
int main(){

  for(int i = 1; i <= 5; i++){
    cout << i << " ";
}

for (int j = 1; j <= 500; j++){
  cout << "hellooooo" << endl;
}

// print even numbers from 2 to 20

for(int k = 2; k <= 20; k+=2){
  cout << k << endl;
}

//calculate numbers 1-100
int sum = 0;
for(int l = 1; l <= 100; l++){
  sum += l;
}
cout << sum << endl;


  
  return 0;
*/

//1.print numbers 10-1000 every 10

//2.display your name, however many years old you are

//3.print backwards 10-1

//4.print the multiplication table of 5 up to 10
  


/*
int main(){
  for (int i = 10; i <=1000; i+=10){
    cout << i << " " << endl;
  }

  cout << "My name is James, " << "i am 17 years old." << endl; 

  for (int j = 10; j >= 1; j--){
    cout << j << " " << endl;
  }
  
  for (int k = 1; k<= 10; k++){
    cout << 5 * k << endl;
  }

  return 0;  
}
*/

/*
int main(){

  int i = 10;
  int j = 0;
  int k = 20;
  int l = 1;

  while (i <= 1000){
    cout << i << endl;
    i+=10;  
  }

  while (j < 17){
    cout << "My name is James." << endl;
      j++;
  }

  while (k >=1){
    cout << k << endl;
    k--;
  }

  while (l <= 10){
    cout << 5 * l << endl;
    l++;
  }

  return 0;
}
*/

/*
int main(){

  string password;

  cout << "Enter the password: ";
  cin >> password;
  
  do{
    cout << "Wrong. Enter password: ";
    cin >> password;
  }while(password != "James");
  
  cout << "Correct password!" << endl;
  return 0;
}
*/



int main(){
  
char repeat = 'y';
double balance = 1000;
int numTransactions;
char transactionType;
double amount;

do{
  cout << "Welcome to the Chabot Bank. How many transactions would you like to make? ";
  cin >> numTransactions; 
  for (int i = 1; i <= numTransactions; i++){
  cout << "Would you like to make a deposit (d) or withdrawl(w): ";
  cin >> transactionType;
  cout << "Enter amount: ";
  cin >> amount;

  if (transactionType == 'd'){
    cout << "Your new balance is: " << endl;
    // balance + amount
    // balance += amount --> balance = balance + amount
    balance += amount;
    cout << balance << endl;
  }else if (transactionType == 'w'){
    if (amount > balance){
      cout << "Insufficient funds for withdrawl." << endl;
    }else {
      cout << "Your new balance is: " << endl;
      balance -= amount;
      cout << balance << endl;
    }
  }
    else{
    cout << "Invalid transaction type." << endl;
    }
  cout << "Current balance: $" << balance << endl;
}

  cout <<"Would you like to run the program again? (y/n): "; 
  cin >> repeat;
  
  if (repeat == 'q' || repeat == 'Q'){
    cout << "Thank you for using Chabot Bank." << endl;
    
  }
    
  
} while (repeat == 'y' || repeat == 'Y');








  return 0;
}
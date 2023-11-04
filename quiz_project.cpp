#include<bits/stdc++.h>
using namespace std;
// a function to calculate total score card
void calculate(int score){
    cout<<"your score is "<<score<<endl;
    float percentage = (score/5)*100;
    cout<<"you percentage is "<<percentage<<endl;
    switch(score){
        case 5:
        cout<<"you did a great job"<<endl;
        break;
        case 4:
        cout<<"good job!"<<endl;
        break;
        case 3:
        cout<<"good can do better"<<endl;
        break;
        case 2:
        cout<<"you can do better"<<endl;
        break;
        case 1:
        cout<<"work on yourself"<<endl;
    }
}
int main(){
    cout<<"*************WELCOME TO QUIZ*************"<<endl;
    cout<<"a) Maths"<<endl;
    cout<<"b) Chemistry"<<endl;
    cout<<"c) Physics"<<endl;
    //getting the subject selection 
    char ch;
    cout<<"select the subject\t";
    cin>>ch;
    cout<<endl;
    //now getting the level of hardness from the user
    cout<<"a) easy"<<endl;
    cout<<"b) moderate"<<endl;
    char op;
    cout<<"enter the level of hardness\t";
    //getting the input from the user
    cin>>op; 
    cout<<endl;
    //initalising the score of the user as 0
    int score = 0;
    //creating a option selector
    char ans;
    if(ch == 'a' && op == 'a'){
        //it means the subject selected is maths and the hardness is easy
        //Question 1
       cout<<"Q.1. What is the sum of 130+125+191?"<<endl;
       cout<<"A. 335"<<endl;
       cout<<"B. 456"<<endl;
       cout<<"C. 446"<<endl;
       cout<<"D. 426"<<endl;
       cout<<"enter your answer\t";
       ans ='\0'; 
       cin>>ans;
       if(ans == 'C' || ans == 'c'){
        score++;
       }
       cout<<endl;
       //Question 2
       cout<<"Q.2: If we minus 712 from 1500, how much do we get?"<<endl;
       cout<<"A. 788"<<endl;
       cout<<"B. 778"<<endl;
       cout<<"C. 768"<<endl;
       cout<<"D. 758"<<endl;
       cout<<"enter your answer\t";
        ans='\0';
       cin>>ans;
       if(ans == 'A' || ans == 'a'){
        score++;
       }
       //Question 3
       cout<<endl;
       cout<<"Q.3 50 times of 8 is equal to?"<<endl;
       cout<<"A. 80"<<endl;
       cout<<"B. 400"<<endl;
       cout<<"C. 800"<<endl;
       cout<<"D. 4000"<<endl;
       cout<<"enter your answer\t";
        ans='\0';
       cin>>ans;
       if(ans == 'B' || ans =='b'){
        score++;
       }
       //Question 4
       cout<<endl;
       cout<<"Q.4: 110 divided by 10 is:"<<endl;
       cout<<"A. 11"<<endl;
       cout<<"B. 10"<<endl;
       cout<<"C. 5"<<endl;
       cout<<"D. None of these"<<endl;
       cout<<"enter your answer\t";
        ans='\0';
       cin>>ans;
       if(ans == 'A' || ans =='a'){
        score++;
       }
       //Question 5
       cout<<endl;
       cout<<"Q.5 20 + (90/10)"<<endl;
       cout<<"A. 50"<<endl;
       cout<<"B. 55"<<endl;
       cout<<"C. 65"<<endl;
       cout<<"D. 60"<<endl;
       cout<<"enter your answer\t";
        ans='\0';
       cin>>ans;
       if(ans == 'C' || ans =='c'){
        score++;
       }
    }
    //going to another branch 
    else if(ch == 'a' && op == 'b'){
        //it means the subject selected is maths and the hardness is  medium
         // Question 1
    cout << "1. What is the square root of 144?\n";
    cout << "a) 12\nb) 14\nc) 16\nd) 18\nYour answer: ";
    ans = '\0';
    cin >> ans;
    if (ans == 'a' || ans == 'A') {
        score++;
    } 
    cout<<endl;
    // Question 2
    cout << "\n2. What is the value of 3^4?\n";
    cout << "a) 27\nb) 81\nc) 64\nd) 16\nYour answer: ";
    ans ='\0';
    cin >> ans;
    if (ans == 'b' || ans == 'B') {
        score++;
    } 
    cout<<endl;
    // Question 3
    cout << "\n3. If a rectangle has length 8 units and width 5 units, what is its perimeter?\n";
    cout << "a) 22 units\nb) 26 units\nc) 36 units\nd) 40 units\nYour answer: ";
    ans ='\0';
    cin >> ans;
    if (ans == 'c' || ans == 'C') {
        score++;
    }
    cout<<endl;
       // Question 4
    cout << "\n4. What is the sum of the interior angles of a triangle?\n";
    cout << "a) 90 degrees\nb) 180 degrees\nc) 270 degrees\nd) 360 degrees\nYour answer: ";
    ans='\0';
    cin >> ans;
    if (ans == 'b' || ans == 'B') {
        score++;
    } 
    cout<<endl;
    // Question 5
    cout << "\n5. If x + 3 = 10, what is the value of x?\n";
    cout << "a) 5\nb) 7\nc) 10\nd) 13\nYour answer: ";
    ans = '\0';
    cin >> ans;
    if (ans == 'b' || ans == 'B') {
        score++;
    } 
    }
    else if(ch == 'b' && op =='a'){
        // it means we have selected chemistry with easy level
        // Question 1
        cout << "1. What is the chemical symbol for water?\n";
        cout << "a) H2O\nb) CO2\nc) O2\nd) CH4\nYour answer: ";
        ans = '\0';
        cin >> ans;
        if (ans == 'a' || ans == 'A') {
            score++;
        }
        cout<<endl;
        // Question 2
        cout << "\n2. What is the atomic number of oxygen?\n";
        cout << "a) 8\nb) 16\nc) 14\nd) 12\nYour answer: ";
        ans = '\0';
        cin >> ans;
        if (ans == 'a' || ans == 'A') {
            score++;
        }
        cout<<endl;
        // Question 3
        cout << "\n3. Which gas do plants absorb for photosynthesis?\n";
        cout << "a) Oxygen\nb) Nitrogen\nc) Carbon Dioxide\nd) Hydrogen\nYour answer: ";
        ans = '\0';
        cin >> ans;
        if (ans == 'c' || ans == 'C') {
            score++;
        }
        cout<<endl;
        // Question 4
        cout << "\n4. What is the chemical formula for table salt?\n";
        cout << "a) NaCl\nb) HCl\nc) H2SO4\nd) CH3COOH\nYour answer: ";
        ans = '\0';
        cin >> ans;
        if (ans == 'a' || ans == 'A') {
            score++;
        }
        cout<<endl;
        // Question 5
        cout << "\n5. What gas do humans breathe out during respiration?\n";
        cout << "a) Oxygen\nb) Carbon Dioxide\nc) Nitrogen\nd) Hydrogen\nYour answer: ";
        ans = '\0';
        cin >> ans;
        if (ans == 'b' || ans == 'B') {
            score++;
        }
    }
    else if(ch == 'b'&& op == 'b'){
        //it means you selected chemistry with medium level of questions
        // Question 1
        cout << "1. What is the chemical formula for hydrogen peroxide?\n";
        cout << "a) H2O2\nb) CO2\nc) O2\nd) CH4\nYour answer: ";
        ans = '\0';
        cin >> ans;
        if (ans == 'a' || ans == 'A') {
            score++;
        }
        cout<<endl;
        // Question 2
        cout << "\n2. Which element is the most abundant in the Earth's crust?\n";
        cout << "a) Oxygen\nb) Silicon\nc) Carbon\nd) Hydrogen\nYour answer: ";
        ans = '\0';
        cin >> ans;
        if (ans == 'b' || ans == 'B') {
            score++;
        }
        cout<<endl;
        // Question 3
        cout << "\n3. What is the chemical symbol for gold?\n";
        cout << "a) Au\nb) Ag\nc) Fe\nd) Cu\nYour answer: ";
        ans = '\0';
        cin >> ans;
        if (ans == 'a' || ans == 'A') {
            score++;
        }
        cout<<endl;
        // Question 4
        cout << "\n4. What is the pH value of pure water?\n";
        cout << "a) 7\nb) 14\nc) 0\nd) 1\nYour answer: ";
        ans = '\0';
        cin >> ans;
        if (ans == 'a' || ans == 'A') {
            score++;
        }
        cout<<endl;
        // Question 5
        cout << "\n5. Which gas gives fizzy drinks their bubbles?\n";
        cout << "a) Oxygen\nb) Carbon Dioxide\nc) Nitrogen\nd) Hydrogen\nYour answer: ";
        ans = '\0';
        cin >> ans;
        if (ans == 'b' || ans == 'B') {
            score++;
        }
    }
    else if(ch == 'c' && op == 'a'){
        // it means we have selected the subject physics and the level is easy
        // Question 1
        cout << "1. What is the unit of measurement for force?\n";
        cout << "a) Newton\nb) Joule\nc) Watt\nd) Volt\nYour answer: ";
        ans = '\0';
        cin >> ans;
        if (ans == 'a' || ans == 'A') {
            score++;
        }
       cout<<endl;
        // Question 2
        cout << "\n2. What is the acceleration due to gravity on Earth?\n";
        cout << "a) 9.8 m/s^2\nb) 6.7 m/s^2\nc) 12 m/s^2\nd) 5 m/s^2\nYour answer: ";
        ans = '\0';
        cin >> ans;
        if (ans == 'a' || ans == 'A') {
            score++;
        }
       cout<<endl;
        // Question 3
        cout << "\n3. What is the formula for calculating work done?\n";
        cout << "a) Force × Distance\nb) Mass × Acceleration\nc) Force × Time\nd) Mass × Velocity\nYour answer: ";
        ans = '\0';
        cin >> ans;
        if (ans == 'a' || ans == 'A') {
            score++;
        }
        cout<<endl;
        // Question 4
        cout << "\n4. Which scientist is known for the theory of relativity?\n";
        cout << "a) Isaac Newton\nb) Albert Einstein\nc) Galileo Galilei\nd) Nikola Tesla\nYour answer: ";
        ans = '\0';
        cin >> ans;
        if (ans == 'b' || ans == 'B') {
            score++;
        }
        cout<<endl;
        // Question 5
        cout << "\n5. What is the SI unit of electric current?\n";
        cout << "a) Volt\nb) Ampere\nc) Ohm\nd) Watt\nYour answer: ";
        ans = '\0';
        cin >> ans;
        if (ans == 'b' || ans == 'B') {
            score++;
        }
    }
    else if(ch =='c' && op == 'b'){
        //it means we have selected physics with level medium
        // Question 1
        cout << "1. What is the formula for calculating kinetic energy?\n";
        cout << "a) 1/2 * mass * velocity^2\nb) mass * acceleration\nc) force * distance\nd) mass * gravity\nYour answer: ";
        cin >> ans;
        if (ans == 'a' || ans == 'A') {
            score++;
        }
       cout<<endl;
        // Question 2
        cout << "\n2. What is the SI unit of power?\n";
        cout << "a) Watt\nb) Joule\nc) Volt\nd) Ampere\nYour answer: ";
        cin >> ans;
        if (ans == 'a' || ans == 'A') {
            score++;
        }
       cout<<endl;
        // Question 3
        cout << "\n3. What is the law of conservation of energy?\n";
        cout << "a) Energy cannot be created or destroyed, only transferred or transformed\nb) Energy is constantly increasing\nc) Energy can be destroyed\n";
        cout << "d) Energy can be created at will\nYour answer: ";
        cin >> ans;
        if (ans == 'a' || ans == 'A') {
            score++;
        }
       cout<<endl;
        // Question 4
        cout << "\n4. What is the unit of measurement for electric resistance?\n";
        cout << "a) Ohm\nb) Ampere\nc) Volt\nd) Watt\nYour answer: ";
        cin >> ans;
        if (ans == 'a' || ans == 'A') {
            score++;
        }
        cout<<endl;
        // Question 5
        cout << "\n5. Which physicist formulated the laws of motion and universal gravitation?\n";
        cout << "a) Albert Einstein\nb) Isaac Newton\nc) Galileo Galilei\nd) Nikola Tesla\nYour answer: ";
        cin >> ans;
        if (ans == 'b' || ans == 'B') {
            score++;
        }
    }
    else{
        cout<<"you did'nt selected any option"<<endl;
    }
    calculate(score);
    if(ch == 'a' && op == 'a'){
        cout<<"The correct answers are \n C \n A \n B \n A \n C"<<endl;
    }
    else if(ch == 'a' && op == 'b'){
        cout<<"The correct answers are \n A \n B \n C \n B \n B"<<endl;
    }
    else if(ch == 'b' && op == 'a'){
        cout<<"The correct answers are \n A \n A \n C \n A \n B"<<endl;
    }
    else if(ch == 'b' && op == 'b'){
        cout<<"The correct answers are \n A \n B \n A \n A \n B"<<endl;
    }
    else if(ch == 'c' && op == 'a'){
        cout<<"The correct answers are \n A \n A \n A \n B \n B"<<endl;
    }
    else if(ch == 'c' && op == 'b'){
        cout<<"The correct answers are \n A \n A \n A \n A \n B"<<endl;
    }
    else{
        cout<<"you didnt gave the test"<<endl;
    }
    return 0;
}
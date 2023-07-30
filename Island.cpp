#include <iostream>
#include <string>

int main(){
  std::cout << "---------------------------------------------------\n";
  std::cout << "Welcome to our Fantasy land!!\nYou are going to discover a lot of stuff about our world!\n";
  std::cout << "---------------------------------------------------\n\n\n";
  std::cout << "Are you ready to start the adventure ?\n";
  std::cout << "Type Y to start or N to close the program.\n";
  std::string start;
  std::cin  >>  start;
  int choice3_1 = 0;
  int time = 0;
  while(start != "Y" && start != "y" && start != "N" && start != "n" ){
    std::cout << "Wrong Input! Try again!\n";
    std::cin  >>  start;
    }
  if(start == "Y" || start == "y"){
      //story starts here
    std::cout << "The story begins on the coast of the island\n ";
    int waiting = 0;
    int choice1;  
    int finish = 0;
    while(waiting != 4 && choice1 != 2 && choice1 != 3){
        std::cout << "You have few options what you can do.\n";
        std::cout << "\n\n";
        std::cout << "1) Stay and enjoy the sun\n";
        std::cout << "2) Explore the island\n";
        std::cout << "3) Catch some fish\n";
        std::cin >> choice1;
        //SPLIT 1
        if(choice1 == 1){
          std::cout << "You enjoyed the sun\n"; 
          waiting++;
        }else if(choice1 == 2){
          
              std::cout << "You decided to explore the wild life of the unknown island\n";
              std::cout << "On your way you found a dirt road.\nIt looks like other human being created this road and you decided to follow it\n";
              std::cout << "Now we have a bigger problem, the roud splits into two ways!!\n";
              std::cout << "it's on you to decide which way you want to go.\n";
              int choice2;
              //SPLIT 2
              while(finish !=1){
                std::cout << "\n\n";
                std::cout << "1) Go the way which leads to pyramids\n";
                std::cout << "2) Go the way which leads to Deeper forest\n";
                std::cin >> choice2;
                switch(choice2){
                  // Pyramid
                  case 1: 
                    std::cout << "you decided to visit the pyramids and explore it inside.\n";
                    std::cout << "you find out there's nothing inside. And when you're about to leave it there's a guy standing in the doors holding a knife.\n";
                    std::cout << "You now have only two options, decide quickly!\n";
                    std::cout << "\n\n";
                    //decision two
                    
                    while(choice3_1 != 1 && choice3_1 != 2 && time !=2){
                        std::cout << "1) Fight him!\n2) Talk to him\n anything else: wait\n\n";
                        std::cin >> choice3_1;
                        //ending 1
                        if(choice3_1 == 1){std::cout << "You tried to hit him, but he was way faster than you thought.¨nHe pierced your heart with a knife and you died quickly...\n ENDING 1 - YOU DIED. \n"; 
                        finish++;
                        }
                        //ending 2
                        else if(choice3_1 == 2){
                          std::cout << "You talked to him, and seems like he understand your language!!\n";
                          std::cout << "You walked with him and he explained you all the rules of the island you're currently on.\nHe shows you the village nearby and helps you build a boat and leave this island.\n";
                          std::cout << "ENDING 2 - SAVED BY THE LOCAL PERSON.\n";
                          finish++;    
                        }
                        //ending 3
                        else{
                            time++;
                            std::cout << "You waited for his reaction.. Don't do this again!!\n";
                            std::cout << time;
                            if(time == 2){finish++;} 
                        }
                    }
                         if(time ==2){
                         std::cout <<" You waited way too long...\n He pierced your heart with a knife and you died quickly...\n ENDING 3 - YOU DIED BECAUSE YOU WAIT WAY TOO LONG.\n";
                    }
                  break;
                  //forest
                  case 2: 
                      std::cout << "You decided to explore the forest.\n";
                      std::cout << "in further exploring you find a secret military base.\n";
                      std::cout << "But no one is there .\n";
                      //final forest decision
                      std::cout << "You go inside and there's a huge terminal with two buttons.\n";
                      std::cout << "You decided to push one of them.\n\n";
                      int finalforest;
                      while(finalforest != 1 && finalforest != 2){
                          std::cout << "1)Green button with boat symbol\n";
                          std::cout << "2)Red button with unknown symbol with sticker 'Don't press!!'\n\n ";
                          std::cin >> finalforest;
                          if(finalforest != 1 && finalforest != 2){"This value doesn't exist, repeat again!\n";}
                  }
                     if(finalforest == 1){
                       std::cout << "Pushing the green button was great idea!/n";
                       std::cout << "It opened a door with yacht, you go check it inside!/n";
                       std::cout << "You try to start the engine and you see the fuel is full.\n";
                       std::cout << "Your doors are now open and you can leave the abandoned island! /n";
                       std::cout << "ENDING 5 - LEAVING THE ISLAND ON YACHT.\n";
                       
                     }
                     else{
                       std::cout << "THAT WAS THE WORST IDEA POSSIBLE!!\n";
                       std::cout << "Right after you pushed the button, you knew there was nothing else you could do..\nYou clicked a button with nuclear bomb and within a second..\nEntire island blew up and you didn't even notice..\n";
                       std::cout << "ENDING 4 - NUCLEAR EXPLOSION\n";
                     }
                  finish++; 
                  
                  
                  
                  break;
                  default : std::cout << "Wrong value. repeat your action.\n";
                }
              }
        }
        else if(choice1 == 3){
          std::cout << "You decided to go fishing, you got a stick and tried to catch one.. but..\n Shack smelled the blood and he gone right after you :(.";
          waiting = 4 ;
        }
        
        if(waiting == 4){
          std::cout << "You were eaten by hungry shark, you lost.\n";
          std::cout << "SPECIAL ENDING - EATEN BY FISH.\n";
        }
    }
    
    



  }
  else{
    std::cout << "Program was ended by user.\n";
  }
}

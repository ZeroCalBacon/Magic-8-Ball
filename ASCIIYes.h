#ifndef ASCIIYES_H
#define ASCIIYES_H

#include <iostream>
#include <limits>
#include <string>
#include <chrono>
#include <thread>
#include <cstdlib>
#include <vector>

using namespace std;    

class ASCIIYes {
public:
   static vector<string> responses;

   static void initializeResponses() {
      responses.push_back(asciiSpeechBubbleY1());
      responses.push_back(asciiSpeechBubbleY2());
      responses.push_back(asciiSpeechBubbleY3());
      responses.push_back(asciiSpeechBubbleY4());
      responses.push_back(asciiSpeechBubbleY5());
      responses.push_back(asciiSpeechBubbleY6());
      responses.push_back(asciiSpeechBubbleY7());
   }

   static string getRandomResponse() {
      int index = rand() % responses.size();
      return responses[index];
   }
   
   static string asciiSpeechBubbleY1() {
        return R"(
                     @@@@@@@@@%*.. @@.,(@@@@@@@@@@,                                                                                                    
             @@@@@&                                  %@@@@                                                                                             
         @@@                                               &@@%                                                                                        
      @@                                                       @@@                                                                                     
    @@                                                            %@@                                                                                  
  /@*                                                                @@                                 %@@@@@@@@@@@@@@@@@@@@@(                        
 (@.                                                                   @@                          @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                   
 @@                                                                     @@                     (@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.               
/@                            IT IS CERTAIN.                            @@                   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@             
%@                                                                      @@                /@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@           
,@.                                                                    @@                @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@         
 @@                                                                   @@               @@@@@@@@@             @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@       
  @@                                                                 @@               @@@@@@@                  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@      
   @@                                                              @@                @@@@@@      @@@@@@@.       *@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@     
     @@&                                                        %@@                 @@@@@@      @@@    @@@       @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@(    
        @@&                                                     @@                  @@@@@@      &@@@@@@@%        @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
           @@@%                                         /@@@@    .@@               .@@@@@@    ,@@*   @@@         @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
                @@@@                              @@@@@@@  @@@@.    @@,            *@@@@@@     @@@   @@@        @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
                      .@@@@@@@@@@@@@@@@@@@@@@@@@@@&            @@@@@& #@@           @@@@@@@      *@@@@         @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
                                                                       *@&          @@@@@@@@(                .@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
                                                                                    &@@@@@@@@@@            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*    
                                                                                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@     
                                                                                      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@      
                                                                                       @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@       
                                                                                         @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@         
                                                                                          .@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@           
                                                                                             @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@             
                                                                                                @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                
                                                                                                   &@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#                   
                                                                                                        ,@@@@@@@@@@@@@@@@@@@@@.                        
        )";
    }

    static string asciiSpeechBubbleY2() {
        return R"(
                     @@@@@@@@@%*.. @@.,(@@@@@@@@@@,                                                                                                    
             @@@@@&                                  %@@@@                                                                                             
         @@@                                               &@@%                                                                                        
      @@                                                       @@@                                                                                     
    @@                                                            %@@                                                                                  
  /@*                                                                @@                                 %@@@@@@@@@@@@@@@@@@@@@(                        
 (@.                                                                   @@                          @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                   
 @@                                                                     @@                     (@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.               
/@                          YOU MAY RELY ON IT.                         @@                   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@             
%@                                                                      @@                /@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@           
,@.                                                                    @@                @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@         
 @@                                                                   @@               @@@@@@@@@             @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@       
  @@                                                                 @@               @@@@@@@                  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@      
   @@                                                              @@                @@@@@@      @@@@@@@.       *@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@     
     @@&                                                        %@@                 @@@@@@      @@@    @@@       @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@(    
        @@&                                                     @@                  @@@@@@      &@@@@@@@%        @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
           @@@%                                         /@@@@    .@@               .@@@@@@    ,@@*   @@@         @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
                @@@@                              @@@@@@@  @@@@.    @@,            *@@@@@@     @@@   @@@        @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
                      .@@@@@@@@@@@@@@@@@@@@@@@@@@@&            @@@@@& #@@           @@@@@@@      *@@@@         @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
                                                                       *@&          @@@@@@@@(                .@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
                                                                                    &@@@@@@@@@@            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*    
                                                                                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@     
                                                                                      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@      
                                                                                       @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@       
                                                                                         @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@         
                                                                                          .@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@           
                                                                                             @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@             
                                                                                                @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                
                                                                                                   &@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#                   
                                                                                                        ,@@@@@@@@@@@@@@@@@@@@@.                        
        )";
    }

    static string asciiSpeechBubbleY3() {
        return R"(
                     @@@@@@@@@%*.. @@.,(@@@@@@@@@@,                                                                                                    
             @@@@@&                                  %@@@@                                                                                             
         @@@                                               &@@%                                                                                        
      @@                                                       @@@                                                                                     
    @@                                                            %@@                                                                                  
  /@*                                                                @@                                 %@@@@@@@@@@@@@@@@@@@@@(                        
 (@.                                                                   @@                          @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                   
 @@                                                                     @@                     (@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.               
/@                           WITHOUT A DOUBT!                           @@                   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@             
%@                                                                      @@                /@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@           
,@.                                                                    @@                @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@         
 @@                                                                   @@               @@@@@@@@@             @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@       
  @@                                                                 @@               @@@@@@@                  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@      
   @@                                                              @@                @@@@@@      @@@@@@@.       *@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@     
     @@&                                                        %@@                 @@@@@@      @@@    @@@       @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@(    
        @@&                                                     @@                  @@@@@@      &@@@@@@@%        @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
           @@@%                                         /@@@@    .@@               .@@@@@@    ,@@*   @@@         @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
                @@@@                              @@@@@@@  @@@@.    @@,            *@@@@@@     @@@   @@@        @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
                      .@@@@@@@@@@@@@@@@@@@@@@@@@@@&            @@@@@& #@@           @@@@@@@      *@@@@         @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
                                                                       *@&          @@@@@@@@(                .@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
                                                                                    &@@@@@@@@@@            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*    
                                                                                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@     
                                                                                      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@      
                                                                                       @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@       
                                                                                         @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@         
                                                                                          .@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@           
                                                                                             @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@             
                                                                                                @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                
                                                                                                   &@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#                   
                                                                                                        ,@@@@@@@@@@@@@@@@@@@@@.                        
        )";
    }

    static string asciiSpeechBubbleY4() {
      return R"(
                     @@@@@@@@@%*.. @@.,(@@@@@@@@@@,                                                                                                    
             @@@@@&                                  %@@@@                                                                                             
         @@@                                               &@@%                                                                                        
      @@                                                       @@@                                                                                     
    @@                                                            %@@                                                                                  
  /@*                                                                @@                                 %@@@@@@@@@@@@@@@@@@@@@(                        
 (@.                                                                   @@                          @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                   
 @@                                                                     @@                     (@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.               
/@                            YES DEFINITELY!                           @@                   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@             
%@                                                                      @@                /@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@           
,@.                                                                    @@                @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@         
 @@                                                                   @@               @@@@@@@@@             @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@       
  @@                                                                 @@               @@@@@@@                  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@      
   @@                                                              @@                @@@@@@      @@@@@@@.       *@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@     
     @@&                                                        %@@                 @@@@@@      @@@    @@@       @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@(    
        @@&                                                     @@                  @@@@@@      &@@@@@@@%        @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
           @@@%                                         /@@@@    .@@               .@@@@@@    ,@@*   @@@         @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
                @@@@                              @@@@@@@  @@@@.    @@,            *@@@@@@     @@@   @@@        @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
                      .@@@@@@@@@@@@@@@@@@@@@@@@@@@&            @@@@@& #@@           @@@@@@@      *@@@@         @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
                                                                       *@&          @@@@@@@@(                .@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
                                                                                    &@@@@@@@@@@            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*    
                                                                                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@     
                                                                                      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@      
                                                                                       @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@       
                                                                                         @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@         
                                                                                          .@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@           
                                                                                             @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@             
                                                                                                @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                
                                                                                                   &@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#                   
                                                                                                        ,@@@@@@@@@@@@@@@@@@@@@.                        
        )";
    }

    static string asciiSpeechBubbleY5() {
        return R"(
                     @@@@@@@@@%*.. @@.,(@@@@@@@@@@,                                                                                                    
             @@@@@&                                  %@@@@                                                                                             
         @@@                                               &@@%                                                                                        
      @@                                                       @@@                                                                                     
    @@                                                            %@@                                                                                  
  /@*                                                                @@                                 %@@@@@@@@@@@@@@@@@@@@@(                        
 (@.                                                                   @@                          @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                   
 @@                                                                     @@                     (@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.               
/@                           AS I SEE IT, YES.                          @@                   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@             
%@                                                                      @@                /@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@           
,@.                                                                    @@                @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@         
 @@                                                                   @@               @@@@@@@@@             @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@       
  @@                                                                 @@               @@@@@@@                  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@      
   @@                                                              @@                @@@@@@      @@@@@@@.       *@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@     
     @@&                                                        %@@                 @@@@@@      @@@    @@@       @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@(    
        @@&                                                     @@                  @@@@@@      &@@@@@@@%        @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
           @@@%                                         /@@@@    .@@               .@@@@@@    ,@@*   @@@         @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
                @@@@                              @@@@@@@  @@@@.    @@,            *@@@@@@     @@@   @@@        @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
                      .@@@@@@@@@@@@@@@@@@@@@@@@@@@&            @@@@@& #@@           @@@@@@@      *@@@@         @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
                                                                       *@&          @@@@@@@@(                .@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
                                                                                    &@@@@@@@@@@            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*    
                                                                                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@     
                                                                                      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@      
                                                                                       @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@       
                                                                                         @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@         
                                                                                          .@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@           
                                                                                             @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@             
                                                                                                @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                
                                                                                                   &@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#                   
                                                                                                        ,@@@@@@@@@@@@@@@@@@@@@.                        
        )";
    }

    static string asciiSpeechBubbleY6() {
        return R"(
                     @@@@@@@@@%*.. @@.,(@@@@@@@@@@,                                                                                                    
             @@@@@&                                  %@@@@                                                                                             
         @@@                                               &@@%                                                                                        
      @@                                                       @@@                                                                                     
    @@                                                            %@@                                                                                  
  /@*                                                                @@                                 %@@@@@@@@@@@@@@@@@@@@@(                        
 (@.                                                                   @@                          @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                   
 @@                                                                     @@                     (@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.               
/@                          SIGNS POINT TO YES!                         @@                   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@             
%@                                                                      @@                /@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@           
,@.                                                                    @@                @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@         
 @@                                                                   @@               @@@@@@@@@             @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@       
  @@                                                                 @@               @@@@@@@                  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@      
   @@                                                              @@                @@@@@@      @@@@@@@.       *@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@     
     @@&                                                        %@@                 @@@@@@      @@@    @@@       @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@(    
        @@&                                                     @@                  @@@@@@      &@@@@@@@%        @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
           @@@%                                         /@@@@    .@@               .@@@@@@    ,@@*   @@@         @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
                @@@@                              @@@@@@@  @@@@.    @@,            *@@@@@@     @@@   @@@        @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
                      .@@@@@@@@@@@@@@@@@@@@@@@@@@@&            @@@@@& #@@           @@@@@@@      *@@@@         @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
                                                                       *@&          @@@@@@@@(                .@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
                                                                                    &@@@@@@@@@@            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*    
                                                                                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@     
                                                                                      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@      
                                                                                       @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@       
                                                                                         @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@         
                                                                                          .@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@           
                                                                                             @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@             
                                                                                                @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                
                                                                                                   &@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#                   
                                                                                                        ,@@@@@@@@@@@@@@@@@@@@@.                        
        )";
    }

    static string asciiSpeechBubbleY7() {
        return R"(
                     @@@@@@@@@%*.. @@.,(@@@@@@@@@@,                                                                                                    
             @@@@@&                                  %@@@@                                                                                             
         @@@                                               &@@%                                                                                        
      @@                                                       @@@                                                                                     
    @@                                                            %@@                                                                                  
  /@*                                                                @@                                 %@@@@@@@@@@@@@@@@@@@@@(                        
 (@.                                                                   @@                          @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                   
 @@                                                                     @@                     (@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.               
/@                             OUTLOOK GOOD.                            @@                   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@             
%@                                                                      @@                /@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@           
,@.                                                                    @@                @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@         
 @@                                                                   @@               @@@@@@@@@             @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@       
  @@                                                                 @@               @@@@@@@                  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@      
   @@                                                              @@                @@@@@@      @@@@@@@.       *@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@     
     @@&                                                        %@@                 @@@@@@      @@@    @@@       @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@(    
        @@&                                                     @@                  @@@@@@      &@@@@@@@%        @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
           @@@%                                         /@@@@    .@@               .@@@@@@    ,@@*   @@@         @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
                @@@@                              @@@@@@@  @@@@.    @@,            *@@@@@@     @@@   @@@        @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
                      .@@@@@@@@@@@@@@@@@@@@@@@@@@@&            @@@@@& #@@           @@@@@@@      *@@@@         @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
                                                                       *@&          @@@@@@@@(                .@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@    
                                                                                    &@@@@@@@@@@            @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*    
                                                                                     @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@     
                                                                                      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@      
                                                                                       @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@       
                                                                                         @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@         
                                                                                          .@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@           
                                                                                             @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@             
                                                                                                @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                
                                                                                                   &@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#                   
                                                                                                        ,@@@@@@@@@@@@@@@@@@@@@.                        
        )";
    }
};


#endif
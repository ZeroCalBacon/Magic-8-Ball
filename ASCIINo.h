#ifndef ASCIINO_H
#define ASCIINO_H

#include <iostream>
#include <limits>
#include <string>
#include <chrono>
#include <thread>
#include <cstdlib>
using namespace std;    


class ASCIINo {
public:
   static vector<string> responses;

   static void initializeResponses() {
      responses.push_back(asciiSpeechBubbleN1());
      responses.push_back(asciiSpeechBubbleN2());
      responses.push_back(asciiSpeechBubbleN3());
      responses.push_back(asciiSpeechBubbleN4());
      responses.push_back(asciiSpeechBubbleN5());
      responses.push_back(asciiSpeechBubbleN6());
      responses.push_back(asciiSpeechBubbleN7());
   }

   static string getRandomResponse() {
      int index = rand() % responses.size();
      return responses[index];
   }
    static string asciiSpeechBubbleN1() {
        return R"(
                     @@@@@@@@@%*.. @@.,(@@@@@@@@@@,                                                                                                    
             @@@@@&                                  %@@@@                                                                                             
         @@@                                               &@@%                                                                                        
      @@                                                       @@@                                                                                     
    @@                                                            %@@                                                                                  
  /@*                                                                @@                                 %@@@@@@@@@@@@@@@@@@@@@(                        
 (@.                                                                   @@                          @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                   
 @@                                                                     @@                     (@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.               
/@                          OUTLOOK NOT SO GOOD...                      @@                   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@             
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

    static string asciiSpeechBubbleN2() {
        return R"(
                     @@@@@@@@@%*.. @@.,(@@@@@@@@@@,                                                                                                    
             @@@@@&                                  %@@@@                                                                                             
         @@@                                               &@@%                                                                                        
      @@                                                       @@@                                                                                     
    @@                                                            %@@                                                                                  
  /@*                                                                @@                                 %@@@@@@@@@@@@@@@@@@@@@(                        
 (@.                                                                   @@                          @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                   
 @@                                                                     @@                     (@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.               
/@                          MY SOURCES SAY NO...                        @@                   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@             
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

    static string asciiSpeechBubbleN3() {
        return R"(
                     @@@@@@@@@%*.. @@.,(@@@@@@@@@@,                                                                                                    
             @@@@@&                                  %@@@@                                                                                             
         @@@                                               &@@%                                                                                        
      @@                                                       @@@                                                                                     
    @@                                                            %@@                                                                                  
  /@*                                                                @@                                 %@@@@@@@@@@@@@@@@@@@@@(                        
 (@.                                                                   @@                          @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                   
 @@                                                                     @@                     (@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.               
/@                          DON'T COUNT ON IT...                        @@                   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@             
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

    static string asciiSpeechBubbleN4() {
        return R"(
                     @@@@@@@@@%*.. @@.,(@@@@@@@@@@,                                                                                                    
             @@@@@&                                  %@@@@                                                                                             
         @@@                                               &@@%                                                                                        
      @@                                                       @@@                                                                                     
    @@                                                            %@@                                                                                  
  /@*                                                                @@                                 %@@@@@@@@@@@@@@@@@@@@@(                        
 (@.                                                                   @@                          @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                   
 @@                                                                     @@                     (@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.               
/@                            VERY DOUBTFUL...                          @@                   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@             
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

    static string asciiSpeechBubbleN5() {
        return R"(
                     @@@@@@@@@%*.. @@.,(@@@@@@@@@@,                                                                                                    
             @@@@@&                                  %@@@@                                                                                             
         @@@                                               &@@%                                                                                        
      @@                                                       @@@                                                                                     
    @@                                                            %@@                                                                                  
  /@*                                                                @@                                 %@@@@@@@@@@@@@@@@@@@@@(                        
 (@.                                                                   @@                          @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                   
 @@                                                                     @@                     (@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.               
/@                          SIGNS POINT TO NO...                        @@                   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@             
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

    static string asciiSpeechBubbleN6() {
        return R"(
                     @@@@@@@@@%*.. @@.,(@@@@@@@@@@,                                                                                                    
             @@@@@&                                  %@@@@                                                                                             
         @@@                                               &@@%                                                                                        
      @@                                                       @@@                                                                                     
    @@                                                            %@@                                                                                  
  /@*                                                                @@                                 %@@@@@@@@@@@@@@@@@@@@@(                        
 (@.                                                                   @@                          @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                   
 @@                                                                     @@                     (@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.               
/@                              SADLY, NO...                            @@                   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@             
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

    static string asciiSpeechBubbleN7() {
        return R"(
                     @@@@@@@@@%*.. @@.,(@@@@@@@@@@,                                                                                                    
             @@@@@&                                  %@@@@                                                                                             
         @@@                                               &@@%                                                                                        
      @@                                                       @@@                                                                                     
    @@                                                            %@@                                                                                  
  /@*                                                                @@                                 %@@@@@@@@@@@@@@@@@@@@@(                        
 (@.                                                                   @@                          @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                   
 @@                                                                     @@                     (@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@.               
/@                       YOU SHOULDN'T RELY ON IT...                    @@                   @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@             
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
//
//  main.cpp
//  vectors
//
//  Created by Jonah Woodbury on 5/5/15.
//  Copyright (c) 2015 Jonah Woodbury. All rights reserved.
//




// This program asks for an unlimited ammount of inputs, puts each of them into an index of a vector, and shows you the greatest and least numbers you entered.

// Commenting this was tiring!


#include <iostream>
#include <vector>

int main(){
    
    int x;
    std::vector<int> v; // I was having some error on this line that involved the word 'breakpoint' until it went away for no reason.
    
    std::cout << "Enter some numbers:\n";
    
    while(std::cin >> x){
    /* I don't really understand how this while loop works, and though other people use this it seems to behave strangely for
     me. I think it might be the problem since entering things other than integers (which I am generally required to do in
     order to get anything to happen) will probably effect the program's ability to determine if an index is greater than
     another index. */
        
        
        // notes on what I've noticed while the program is in this loop:
        
        /* When I type multiple numbers (separated by spaces) and press the 'enter' key the command line still expects input. */
        
        /* When I type a letter after the numbers, the program doesn't stop and I get that same error that shows a
         'breakpoint,' this time down at the for loop. When I type a letter before the numbers, the program finishes and tells
         me that the vector is empty. */
        
        /* When I type in a really long number (something like 22 characters, and then just hit enter) the program finishes,
         and says that the vector is empty. When I type two long numbers, it does the same. This is the only way that I can
         get the program to respond with only numbers in the input stream. */
        
        /* When I type in only letters the program finishes and tells me that the vector is empty. */
   
        
    // v.push_back(x) defnitely works though.
            v.push_back(x);
    }
    
    std::size_t i = 0;
    std::size_t greatest_index = 0;
    std::size_t least_index = 0;

    for (; i < v.size(); i += 1) { // 'i' doesn't iterate here
        std::cout << "vector size = " << v.size() << std::endl << "i = " << i << std::endl; // I added this line to tell whether or not 'v' and 'i' were being added to. 'v' usually is, but 'i' never is.
        if(v[i] > v[greatest_index]) greatest_index = i; std::cout << "New greatest index " << v[greatest_index]; // I get that 'breakpoint' error right at this line.
        if(v[i] < v[least_index]) least_index = i; std::cout << "New least index " << v[least_index];
    }
        if(v.empty()){
            std::cout << "Vector is empty.\n";
        }
        else{
            std::cout << "Greatest number: " << v[greatest_index] << std::endl << "At index: " << greatest_index << std::endl << std::endl;
            std::cout << "Least number: " << v[least_index] << std::endl << "At index: " << least_index << std::endl << std::endl;
        }
    
    return 0;
}
//
//  main.cpp
//  vectors
//
//  Created by Jonah Woodbury on 5/5/15.
//  Copyright (c) 2015 Jonah Woodbury. All rights reserved.
//

#include <iostream>
#include <vector>

int main(){
    
    int x;
    std::vector<int> v;
    
    std::cout << "Enter some numbers:\n";
    
    while(std::cin >> x){
            v.push_back(x);
    }
    
    std::size_t i = 0;
    std::size_t greatest_index = 0;
    std::size_t least_index = 0;

    for (; i < v.size(); i += 1) {
        std::cout << "v = " << v.size() << std::endl << "i = " << i << std::endl;
        if(v[i] > v[greatest_index]) greatest_index = i; std::cout << "New greatest index " << v[greatest_index];
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
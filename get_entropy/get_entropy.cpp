//
//  main.cpp
//  get_entropy
//
//  Created by git on 11/24/19.
//  Copyright © 2019 randymcmillan.net. All rights reserved.
//
#define RAND_FROM_TO(min, max) (min + arc4random_uniform(max - min + 1))
#import <iostream>
#import <time.h>

int main(int argc, const char * argv[]) {
    
    printf("%d\n", RAND_FROM_TO(0, arc4random_uniform((int)time(NULL))));
    
    return 0;

}

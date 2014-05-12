//
//  SocketManager.cpp
//  MCPU
//
//  Created by Rayer Shih on 5/13/14.
//
//

#include "SocketManager.h"

bool SocketManager::init(int dataPort, int admPort) {
    //create socket
    _dataSocket = socket(AF_INET, SOCK_STREAM, 0);
    _admSocket = socket(AF_INET, SOCK_STREAM, 0);
    
    if(_dataSocket == -1 || _admSocket == -1) {
        //Initialization failed
        return false;
    }
    
    
}

void SocketManager::update(double delta) {
    
    
}
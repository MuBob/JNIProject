//
// Created by Administrator on 2017/8/12.
//

#include "sm.h"

jstring SM2_KEY(char * publicKey){
    char * privateKey=SM2_a;
    SM2_KeyGeneration_w(privateKey, publicKey);
    return privateKey;
}
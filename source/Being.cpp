#include"Being.h"
Being::Being(){
    pFigure = 0;
}
Being::~Being(){
    
}
void Being::execute(){

}
void Being::draw(){
    pGM->drawBeing(this);
}

void Being::loadImage(){
    pGM->loadImage(this);
}

void getFigure(){
    return pFigure;
}
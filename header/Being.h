#ifndef BEING_H
#define BEING_H


class Being{

protected:
    static GraphicManager* pGM;
    void *pFigure;
public:
    Being();
    ~Being();
    static void setGraphicManager(GraphicManager* p) { pGM = p; }
    virtual void execute();
    void draw();
    void loadImage();
};
GraphicManager* Being::pGM = 0;

#endif
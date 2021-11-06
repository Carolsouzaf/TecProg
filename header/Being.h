#ifndef BEING_H
#define BEING_H
    
class Being{

protected:
    int id;
public:
    Being();
    ~Being();
    virtual void execute();
    void printSelf();
};

#endif